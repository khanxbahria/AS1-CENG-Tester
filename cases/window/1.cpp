#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(5);
Tab M = Tab("iii", "w","fff");
wind->moveActiveTabTo(2);
Tab U = Tab("m", "zz","s");
wind->getActiveTab();
Tab K = Tab("j", "ooo","zzz");
wind->isEmpty();
Tab L = Tab("n", "ll","c");
wind->newTab(K);
Tab B = Tab("a", "g","tt");
wind->print();
Tab N = Tab("dd", "p","p");
wind->newTab(B);
Tab Q = Tab("g", "ww","ii");
wind->isEmpty();
Tab F = Tab("n", "bb","qq");
wind->moveActiveTabTo(1);
Tab O = Tab("ooo", "nn","i");
wind->moveActiveTabTo(5);
Tab W = Tab("k", "bb","eee");
wind->newTab(F);
Tab P = Tab("k", "l","jjj");
wind->getActiveTab();
wind->closeTab();
Tab V = Tab("uuu", "vvv","iii");
wind->isEmpty();
Tab X = Tab("kkk", "k","g");
wind->closeTab();
Tab T = Tab("i", "n","rr");
wind->isEmpty();
Tab H = Tab("b", "oo","x");
wind->changeActiveTabTo(3);
wind->closeTab();
wind->isEmpty();
wind->newTab(H);
wind->moveActiveTabTo(4);
wind->print();
wind->newTab(L);
wind->isEmpty();
Tab E = Tab("t", "qq","bbb");
wind->isEmpty();
Tab S = Tab("g", "iii","ccc");
wind->changeActiveTabTo(4);
Tab J = Tab("l", "iii","l");
wind->moveActiveTabTo(0);
Tab I = Tab("sss", "aaa","mm");
wind->newTab(E);
Tab C = Tab("j", "l","ddd");
wind->isEmpty();
wind->closeTab();
wind->newTab(C);
wind->moveActiveTabTo(3);
wind->print();
wind->isEmpty();
wind->newTab(I);
wind->closeTab();
Tab D = Tab("nnn", "s","uu");
wind->newTab(D);
wind->isEmpty();
Tab R = Tab("oo", "aaa","iii");
wind->changeActiveTabTo(3);
Tab A = Tab("dd", "xxx","p");
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->newTab(A);
wind->changeActiveTabTo(2);
wind->print();
//  The active tab is tab 2
//  ll
//  n
//  c

//  oo
//  b
//  x

//  xxx
//  dd
//  p

//  l
//  j
//  ddd

//  s
//  nnn
//  uu

wind->moveActiveTabTo(4);
Tab G = Tab("n", "yyy","m");
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(G);
wind->newTab(J);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->newTab(M);
wind->newTab(N);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->print();

wind->print();
wind->isEmpty();
Tab Y = Tab("iii", "dd","hh");
wind->closeTab();
wind->print();
wind->newTab(O);
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->print();
wind->print();
wind->closeTab();
wind->print();
wind->isEmpty();
wind->newTab(P);
wind->print();
wind->newTab(Q);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->getActiveTab();
Tab Z = Tab("mm", "qqq","zzz");
wind->getActiveTab();
wind->newTab(R);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->print();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->newTab(S);
wind->getActiveTab();
wind->moveActiveTabTo(4);
delete wind;
}
	return 0;
};

