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
Tab A = Tab("zz", "ll","jj");
Tab B = Tab("kkk", "vv","pp");
Tab C = Tab("yy", "cc","y");
Tab D = Tab("f", "zz","aa");
Tab E = Tab("zzz", "jj","ff");
Tab F = Tab("rrr", "g","kk");
Tab G = Tab("vv", "r","z");
Tab H = Tab("c", "jjj","b");
Tab I = Tab("nnn", "nnn","yy");
Tab J = Tab("b", "www","ii");
Tab K = Tab("f", "bbb","ddd");
Tab L = Tab("ggg", "fff","uu");
Tab M = Tab("jjj", "c","gg");
Tab N = Tab("r", "eee","d");
Tab O = Tab("uuu", "bbb","s");
Tab P = Tab("l", "rrr","ooo");
Tab Q = Tab("yyy", "m","hhh");
Tab R = Tab("tt", "pp","kkk");
Tab S = Tab("eee", "s","yyy");
Tab T = Tab("mm", "iii","ooo");
Tab U = Tab("bb", "q","xx");
Tab V = Tab("i", "hh","v");
Tab W = Tab("nn", "t","u");
Tab X = Tab("x", "nn","xxx");
Tab Y = Tab("z", "l","ff");
Tab Z = Tab("m", "vvv","uu");
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.newTab(A);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(B);
b.newTab(C);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.newTab(D);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(E);
d.newTab(F);
a.newTab(G);
b.moveActiveTabTo(1);
c.newTab(H);
d.changeActiveTabTo(1);
a.newTab(I);
b.newTab(J);
c.newTab(K);
d.newTab(L);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(M);
a.moveActiveTabTo(3);
b.newTab(N);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(O);
d.newTab(P);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(Q);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.newTab(R);
c.newTab(S);
d.moveActiveTabTo(0);
a.newTab(T);
b.moveActiveTabTo(4);
c.newTab(U);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(V);
a.newTab(W);
b.newTab(X);
c.newTab(Y);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(Z);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
c.changeActiveTabTo(2);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
d.changeActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->switchToWindow(6);
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->print();
brows->getWindow(0);
brows->print();
brows->closeWindow();
brows->print();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(5);
brows->getWindow(6);
brows->getWindow(0);
brows->getWindow(3);
brows->getWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->newWindow();
brows->switchToWindow(6);
brows->switchToWindow(1);
brows->getWindow(9);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->newWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(3);
brows->getWindow(1);
brows->switchToWindow(0);
brows->getWindow(5);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(5);
brows->closeWindow();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->getWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->getWindow(7);
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->getWindow(1);
brows->switchToWindow(8);
brows->switchToWindow(3);
brows->getWindow(7);
brows->switchToWindow(7);
brows->print();
brows->getWindow(9);
brows->newWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->print();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
}