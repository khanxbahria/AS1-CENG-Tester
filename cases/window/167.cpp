#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab G = Tab("ww", "zz","eee");
wind->moveActiveTabTo(3);
Tab Z = Tab("vv", "t","qq");
wind->print();
Tab T = Tab("ww", "n","rrr");
wind->getActiveTab();
Tab W = Tab("hhh", "ppp","sss");
wind->newTab(G);
Tab P = Tab("d", "b","hhh");
wind->isEmpty();
Tab A = Tab("i", "uuu","uuu");
wind->print();
wind->print();
Tab D = Tab("p", "nn","d");
wind->getActiveTab();
Tab E = Tab("ggg", "fff","n");
wind->closeTab();
Tab Y = Tab("m", "vvv","uuu");
wind->print();
wind->closeTab();
Tab B = Tab("uu", "x","xxx");
wind->getActiveTab();
wind->changeActiveTabTo(4);
Tab C = Tab("pp", "q","t");
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(3);
wind->getActiveTab();
Tab K = Tab("b", "nn","w");
wind->getActiveTab();
wind->closeTab();
Tab H = Tab("dd", "yy","n");
wind->changeActiveTabTo(3);
wind->getActiveTab();
Tab Q = Tab("uu", "qqq","cc");
wind->moveActiveTabTo(3);
Tab M = Tab("xx", "kkk","i");
wind->moveActiveTabTo(0);
Tab N = Tab("nn", "ddd","zz");
wind->print();
Tab U = Tab("xx", "ff","n");
wind->closeTab();
Tab S = Tab("ccc", "y","l");
wind->print();
wind->newTab(A);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->newTab(B);
Tab V = Tab("dd", "cc","d");
wind->closeTab();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->print();
Tab X = Tab("bb", "hhh","qq");
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(4);
wind->newTab(C);
Tab J = Tab("xx", "e","ccc");
wind->print();
Tab R = Tab("aa", "bb","a");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->newTab(D);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->getActiveTab();
wind->newTab(E);
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->newTab(H);
wind->print();
wind->changeActiveTabTo(3);
Tab F = Tab("cc", "rr","ee");
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(F);
wind->closeTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->print();
Tab L = Tab("bb", "h","xx");
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(4);
wind->closeTab();
Tab I = Tab("mm", "h","x");
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->newTab(I);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(J);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->isEmpty();
wind->print();
wind->print();
wind->newTab(K);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->newTab(L);
wind->moveActiveTabTo(3);
wind->newTab(M);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->isEmpty();
delete wind;
}
	return 0;
}