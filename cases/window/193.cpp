#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(3);
Tab T = Tab("ww", "x","tt");
wind->changeActiveTabTo(2);
Tab W = Tab("aaa", "w","rr");
wind->isEmpty();
Tab F = Tab("s", "ppp","mmm");
wind->getActiveTab();
wind->isEmpty();
Tab B = Tab("v", "oo","uu");
wind->changeActiveTabTo(1);
Tab P = Tab("c", "uu","o");
wind->closeTab();
Tab C = Tab("rrr", "u","x");
wind->newTab(B);
Tab Z = Tab("rrr", "ii","uuu");
wind->getActiveTab();
Tab V = Tab("ff", "h","fff");
wind->isEmpty();
Tab Y = Tab("u", "hhh","uu");
wind->changeActiveTabTo(1);
Tab D = Tab("yyy", "hhh","zz");
wind->closeTab();
Tab L = Tab("ii", "ii","i");
wind->getActiveTab();
wind->closeTab();
Tab Q = Tab("p", "zz","uuu");
wind->getActiveTab();
wind->isEmpty();
Tab R = Tab("r", "iii","hhh");
wind->newTab(C);
Tab M = Tab("uu", "rrr","yy");
wind->print();
Tab N = Tab("a", "dd","aaa");
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(5);
Tab H = Tab("eee", "dd","vvv");
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab O = Tab("x", "f","t");
wind->isEmpty();
Tab E = Tab("g", "q","yyy");
wind->changeActiveTabTo(4);
Tab A = Tab("ii", "ii","z");
wind->isEmpty();
Tab I = Tab("ii", "ii","b");
wind->changeActiveTabTo(1);
wind->newTab(A);
wind->newTab(D);
wind->getActiveTab();
wind->print();
wind->newTab(E);
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->print();
wind->newTab(F);
wind->isEmpty();
wind->newTab(H);
wind->newTab(I);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->changeActiveTabTo(4);
Tab X = Tab("www", "cc","u");
wind->changeActiveTabTo(4);
Tab S = Tab("t", "a","l");
wind->closeTab();
wind->closeTab();
Tab J = Tab("xx", "rr","ppp");
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->newTab(J);
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->newTab(L);
wind->newTab(M);
wind->newTab(N);
wind->print();
Tab U = Tab("ee", "zz","bbb");
wind->newTab(O);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(0);
Tab K = Tab("z", "eee","v");
wind->changeActiveTabTo(1);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->newTab(K);
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(2);
Tab G = Tab("p", "u","lll");
wind->closeTab();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(0);
delete wind;
}
	return 0;
}