//Alice has the following two types of taxis:

//Online taxi: It can be booked by using an online application from phones
//Classic taxi: It can be booked anywhere on the road
//The online taxis cost  for the first  km and  for every km afterward. The classic taxis travel at a speed of  km per minute. The cost of classic taxis are , , and  that represents the base fare, cost for every minute that is spent in the taxi, and cost for each kilometer that you ride.

//You are going to the office from your home. Your task is to minimize the cost that you are required to pay. The distance from your home to the office is D. You are required to select whether you want to use online or classic taxis to go to your office. If both the taxis cost the same, then you must use an online taxi.

//Input format

//First line: Single integer  that denotes the distance from your house to the office
//Next line: Three integers  ,  , and
//Next line: Four integers  ,  ,  , and
//Output format

If you select an online taxi to travel, then print a string 'Online Taxi'. Otherwise, select 'Classic Taxi'. You can print this string in a new, single line.

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long d,oc,of,od,cs,cb,cm,cd,s1,s2;
    cin>>d;
    if(d>=1){
        cin>>oc>>of>>od;
        cin>>cs>>cb>>cm>>cd;
        s1=oc/(d-of)*od;
        s2=cb+(d/cs)*cm*cd;
        if(s1<s2){
            cout<<"Online Taxi";
        }
        else {
            cout<<"Classic Taxi";
        }
    }
    return 0;
}
