/*
* @Author: Dicer
* @Date:   2018-10-25 19:33:38
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-25 21:26:55
*/
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef long long LLT;
typedef unsigned long long ull;
typedef pair<int, int> pii;
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1000010;
const int MAXM = 1000010 ;


class BigInt
{
public:
	BigInt():num(), negative(false){}
	BigInt(const LLT);
	BigInt(const char*);
	BigInt(const string);
	BigInt(const BigInt & x);
	BigInt & operator = (const BigInt &);
	friend istream & operator >> (istream &, BigInt &);
	friend ostream & operator << (ostream &, BigInt);
	const BigInt operator + (const BigInt &) const;
	const BigInt operator - (const BigInt &) const;
	const BigInt operator * (const BigInt &) const;
	const BigInt operator / (const LLT &) const;
	const LLT operator % (const LLT &) const;
	bool operator > (const BigInt &) const;
	bool operator < (const BigInt &) const;
	bool operator == (const BigInt &) const;
	bool operator >= (const BigInt &) const;
	bool operator <= (const BigInt &) const;
	friend const BigInt abs(const BigInt &);
	const BigInt operator - () const;
private:
	deque<int> num;
	bool negative;
};

BigInt::BigInt(const LLT x){
	LLT t = abs(x);
	negative = x >= 0 ? false : true;
	while (t > 0){
		num.push_back(t % 10);
		t /= 10;
	}
}
BigInt::BigInt(const char* str){
	unsigned i = str[0] == '-' ? 1 : 0;
	this->negative = (str[0] == '-' ? true : false);
	for (; i < strlen(str); ++i) num.push_back(str[i] - '0');
}
BigInt::BigInt(const string str){
	unsigned i = str[0] == '-' ? 1 : 0;
	this->negative = (str[0] == '-' ? true : false);
	for (; i < str.size(); ++i) num.push_back(str[i] - '0');
}
BigInt::BigInt(const BigInt &x):num(x.num), negative(x.negative){}
BigInt & BigInt::operator = (const BigInt &x){
	negative = x.negative;
	num = x.num;
	return (*this);
}
istream & operator >> (istream &is, BigInt & x){
	string str; is >> str;
	x = str;
	return is;
}
ostream & operator << (ostream &os, BigInt x){
	if (x.negative) os << '-';
	for (unsigned i = 0; i != x.num.size(); ++i)
		os << x.num[i];
	return os;
}
bool BigInt::operator > (const BigInt & rhs) const {
	BigInt x = (*this), y = rhs;
	if (!x.negative && y.negative) return true;
	if (x.negative && !y.negative) return false;
	if (x.negative && y.negative) swap(x, y);
	if (x.num.size() > y.num.size()) return true;
	if (x.num.size() < y.num.size()) return false;
	for (unsigned i = 0; i != x.num.size(); ++i) {
		if (x.num[i] > y.num[i]) return true;
		if (x.num[i] < y.num[i]) return false;
	}
	return false;
}
bool BigInt::operator < (const BigInt & rhs) const {
    return rhs < *this;
}
bool BigInt::operator == (const BigInt & rhs) const {
	return negative == rhs.negative && num == rhs.num;
}
bool BigInt::operator >= (const BigInt & rhs) const {
	return *this > rhs || *this == rhs;
}
bool BigInt::operator <= (const BigInt & rhs) const {
    return rhs >= *this;
}
const BigInt abs(const BigInt & rhs){
	BigInt res;
	res.negative = false;
	res.num = rhs.num;
	return res;
}
const BigInt BigInt::operator - () const {
	BigInt ret = *this; ret.negative = !ret.negative;
	return ret;
}
const BigInt BigInt::operator + (const BigInt & y) const {
	if (!this->negative && y.negative) return *this - abs(y);
	if (this->negative && !y.negative) return y - abs(*this);
	if (this->negative && y.negative) return -(abs(*this) + abs(y));
	BigInt x = *this, res;
	int temp = 0;
	for (int i = x.num.size() - 1, j = y.num.size() - 1; i >= 0 || j >= 0; --i, --j) {
		int a = i < 0 ? 0 : x.num[i];
		int b = j < 0 ? 0 : y.num[j];
		res.num.push_front((a + b + temp) % 10);
		temp = (a + b + temp) / 10;
	}
	if (temp != 0) res.num.push_front(temp);
	return res;
}
const BigInt BigInt::operator * (const BigInt & y) const {
	deque<int> a, b, res;
	copy(this->num.begin(), this->num.end(), front_inserter(a));
	copy(y.num.begin(), y.num.end(), front_inserter(b));
	res.resize(a.size() + b.size() + 5);
	for (unsigned i = 0; i < a.size(); ++i) for (unsigned j = 0; j < b.size(); ++j)
		res[i + j] += a[i] * b[j];
	for (unsigned i = 0; i < res.size() - 1; ++i){
		res[i + 1] += res[i] / 10;
		res[i] %= 10;
	}
	while (res.size() >= 2 && res.back() == 0)
		res.pop_back();
	reverse(res.begin(), res.end());
	BigInt ret; ret.negative = this->negative ^ y.negative; ret.num = res;
	return ret;
}
const BigInt BigInt::operator - (const BigInt & y) const {
	if (!this->negative && y.negative) return *this + abs(y);
	if (this->negative && !y.negative) return -(abs(*this) + y);
	if (this->negative && y.negative) return abs(y) - abs(*this);
	deque<int> a, b, res; BigInt ret;
	copy(this->num.begin(), this->num.end(), front_inserter(a));
	copy(y.num.begin(), y.num.end(), front_inserter(b));
	if (y > *this) swap(a, b), ret.negative = true;
	res.resize(max(a.size(), b.size()) + 5);
	for (unsigned i = 0, j = 0; i < a.size() || j < b.size(); ++i, ++j){
		int m = i < a.size() ? a[i] : 0;
		int n = j < b.size() ? b[j] : 0;
		res[i] = m - n;
	}
	for (unsigned i = 0; i < res.size() - 1; ++i) if (res[i] < 0) {
		res[i] += 10;
		--res[i + 1];
	}
	while (res.size() >= 2 && res.back() == 0)
		res.pop_back();
	reverse(res.begin(), res.end()); ret.num = res;
	return ret;
}
const BigInt BigInt::operator / (const LLT & rhs) const {
	LLT temp = 0;
	BigInt x = (*this), res;
	res.negative = this->negative ^ (rhs < 0 ? 1 : 0);
	int y = abs(rhs);
	for (unsigned i = 0; i < x.num.size(); ++i){
		temp = temp * 10 + x.num[i];
		res.num.push_back((int)(temp / y));
		temp %= y;
	}
	while (res.num.size() >= 2 && res.num.front() == 0)
		res.num.pop_front();
	return res;
}
const LLT BigInt::operator % (const LLT & y) const {
	LLT res = 0;
	for (unsigned i = 0; i < this->num.size(); ++i)
		res = (res * 10 + this->num[i]) % y;
	return res;
}

int main(int argc, char const *argv[])
{
	BigInt a[5111];
	int n;
	cin >> n;
	a[0] = "0";
	a[1] = "1";
	a[2] = "2";
	for(int i=3;i<=n;++i){
		a[i] = a[i-1]+a[i-2];
	}
	cout << a[n] << endl;
	return 0;
}