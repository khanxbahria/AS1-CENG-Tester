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
Tab A = Tab("ttt", "a","gg");
Tab B = Tab("j", "iii","oo");
Tab C = Tab("pp", "e","aa");
Tab D = Tab("z", "w","ll");
Tab E = Tab("ww", "yyy","mmm");
Tab F = Tab("oo", "xxx","b");
Tab G = Tab("b", "ccc","www");
Tab H = Tab("kkk", "b","nn");
Tab I = Tab("u", "ww","m");
Tab J = Tab("pp", "ii","p");
Tab K = Tab("mmm", "k","ii");
Tab L = Tab("p", "s","yyy");
Tab M = Tab("sss", "eee","mm");
Tab N = Tab("r", "x","e");
Tab O = Tab("e", "z","mmm");
Tab P = Tab("cc", "pp","a");
Tab Q = Tab("fff", "gg","hh");
Tab R = Tab("o", "hhh","s");
Tab S = Tab("ooo", "rr","n");
Tab T = Tab("g", "uu","d");
Tab U = Tab("fff", "uu","h");
Tab V = Tab("w", "a","s");
Tab W = Tab("a", "ll","g");
Tab X = Tab("k", "x","iii");
Tab Y = Tab("cc", "jj","jjj");
Tab Z = Tab("uu", "aa","a");
a.newTab(A);
b.newTab(B);
c.changeActiveTabTo(3);
d.newTab(C);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(D);
d.newTab(E);
a.newTab(F);
b.moveActiveTabTo(4);
c.newTab(G);
d.newTab(H);
a.newTab(I);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(M);
a.newTab(N);
b.newTab(O);
c.newTab(P);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.newTab(Q);
c.newTab(R);
d.moveActiveTabTo(2);
a.newTab(S);
b.newTab(T);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(U);
b.newTab(V);
c.changeActiveTabTo(5);
d.newTab(W);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(X);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(Y);
b.moveActiveTabTo(2);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
c.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
d.changeActiveTabTo(3);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(0);
a.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->newWindow();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(2);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->print();
brows->print();
brows->getWindow(7);
brows->switchToWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->getWindow(0);
brows->newWindow();
brows->switchToWindow(4);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->print();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->mergeAllWindows();
brows->getWindow(4);
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(1);
brows->getWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(0);
brows->getWindow(1);
brows->print();
brows->getWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(3);
brows->getWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
delete brows;
}
	return 0;
}