#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("nn", "ddd","ddd");
Tab B = Tab("ee", "ggg","gg");
Tab C = Tab("aa", "i","bbb");
Tab D = Tab("zz", "p","mmm");
Tab E = Tab("cc", "bb","nn");
Tab F = Tab("w", "z","s");
Tab G = Tab("vv", "m","ddd");
Tab H = Tab("dd", "t","tt");
Tab I = Tab("jjj", "ttt","f");
Tab J = Tab("kkk", "n","hhh");
Tab K = Tab("www", "ss","uu");
Tab L = Tab("m", "e","ooo");
Tab M = Tab("vv", "cc","iii");
Tab N = Tab("ii", "mm","tt");
Tab O = Tab("gg", "hh","o");
Tab P = Tab("uuu", "tt","o");
Tab Q = Tab("fff", "mm","ll");
Tab R = Tab("zzz", "ccc","bbb");
Tab S = Tab("e", "uuu","sss");
Tab T = Tab("uu", "w","q");
Tab U = Tab("b", "uuu","zz");
Tab V = Tab("bb", "ppp","a");
Tab W = Tab("nn", "bbb","ddd");
Tab X = Tab("i", "qqq","ccc");
Tab Y = Tab("j", "rr","xx");
Tab Z = Tab("tt", "yy","gg");
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(A);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(B);
d.moveActiveTabTo(3);
a.newTab(C);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(D);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(E);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(F);
a.newTab(G);
b.newTab(H);
c.moveActiveTabTo(3);
d.newTab(I);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(J);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(K);
a.newTab(L);
b.newTab(M);
c.newTab(N);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(O);
a.moveActiveTabTo(1);
b.newTab(P);
c.newTab(Q);
d.moveActiveTabTo(1);
a.newTab(R);
b.newTab(S);
c.newTab(T);
d.newTab(U);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(V);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(W);
d.moveActiveTabTo(3);
a.newTab(X);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
b.newTab(Y);
c.newTab(Z);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(8);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->getWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(9);
brows->print();
brows->switchToWindow(3);
brows->switchToWindow(6);
brows->print();
brows->switchToWindow(3);
brows->getWindow(0);
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->getWindow(9);
brows->getWindow(5);
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(5);
brows->newWindow();
brows->getWindow(5);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(8);
brows->print();
brows->print();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->switchToWindow(1);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->switchToWindow(9);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->print();
brows->print();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(7);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(5);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->print();
delete brows;
}
	return 0;
}