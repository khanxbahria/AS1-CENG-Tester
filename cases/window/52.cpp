#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
Tab E = Tab("mmm", "ttt","ff");
wind->getActiveTab();
Tab J = Tab("ww", "b","mmm");
wind->newTab(E);
Tab C = Tab("eee", "zz","j");
wind->getActiveTab();
Tab X = Tab("b", "p","l");
wind->isEmpty();
wind->closeTab();
Tab L = Tab("uu", "d","jjj");
wind->isEmpty();
Tab Z = Tab("vv", "jjj","r");
wind->print();
wind->moveActiveTabTo(3);
wind->newTab(C);
wind->closeTab();
Tab P = Tab("dd", "oo","tt");
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(2);
Tab T = Tab("uu", "o","yy");
wind->changeActiveTabTo(0);
Tab S = Tab("f", "www","j");
wind->moveActiveTabTo(5);
Tab A = Tab("qqq", "t","kkk");
wind->newTab(A);
Tab D = Tab("w", "yy","dd");
wind->changeActiveTabTo(4);
Tab I = Tab("o", "g","xxx");
wind->newTab(D);
Tab N = Tab("oo", "aa","sss");
wind->print();
Tab Q = Tab("iii", "m","i");
wind->closeTab();
Tab U = Tab("e", "zz","a");
wind->closeTab();
Tab H = Tab("ww", "v","ff");
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(3);
wind->print();
Tab M = Tab("yyy", "xxx","k");
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(1);
Tab K = Tab("mmm", "www","hh");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->newTab(H);
wind->changeActiveTabTo(0);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(1);
Tab G = Tab("dd", "e","www");
wind->isEmpty();
wind->getActiveTab();
wind->newTab(G);
Tab R = Tab("aa", "yyy","bb");
wind->closeTab();
wind->getActiveTab();
Tab F = Tab("y", "o","kk");
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
Tab B = Tab("r", "yyy","b");
wind->print();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->getActiveTab();
Tab Y = Tab("qq", "i","lll");
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->newTab(B);
wind->print();
wind->changeActiveTabTo(1);
wind->newTab(F);
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
Tab W = Tab("eee", "fff","p");
wind->newTab(I);
wind->isEmpty();
Tab V = Tab("rrr", "zzz","hhh");
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(2);
Tab O = Tab("bb", "pp","zz");
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(1);
wind->newTab(J);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->newTab(K);
wind->closeTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->newTab(L);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(M);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->moveActiveTabTo(3);
delete wind;
}
	return 0;
}