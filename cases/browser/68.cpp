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
Tab A = Tab("ccc", "l","ff");
Tab B = Tab("q", "nnn","cc");
Tab C = Tab("g", "zzz","ee");
Tab D = Tab("ggg", "ee","ooo");
Tab E = Tab("qqq", "ii","bb");
Tab F = Tab("aaa", "k","oo");
Tab G = Tab("v", "s","jj");
Tab H = Tab("tt", "i","qq");
Tab I = Tab("b", "uu","bbb");
Tab J = Tab("jjj", "m","y");
Tab K = Tab("e", "ccc","r");
Tab L = Tab("cc", "ff","www");
Tab M = Tab("nnn", "zzz","v");
Tab N = Tab("r", "tt","hh");
Tab O = Tab("u", "mmm","yy");
Tab P = Tab("ss", "kkk","aaa");
Tab Q = Tab("aa", "gg","sss");
Tab R = Tab("ff", "h","vvv");
Tab S = Tab("ddd", "hhh","q");
Tab T = Tab("xx", "hhh","vv");
Tab U = Tab("ggg", "a","zzz");
Tab V = Tab("uuu", "cc","vvv");
Tab W = Tab("uu", "j","bb");
Tab X = Tab("yyy", "c","bb");
Tab Y = Tab("rrr", "ww","zzz");
Tab Z = Tab("rr", "jjj","z");
a.moveActiveTabTo(5);
b.newTab(A);
c.newTab(B);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.newTab(C);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(D);
b.newTab(E);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(F);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.newTab(G);
c.newTab(H);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(I);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(J);
a.newTab(K);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(L);
d.changeActiveTabTo(4);
a.newTab(M);
b.newTab(N);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(O);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(P);
a.moveActiveTabTo(2);
b.newTab(Q);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(R);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(S);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(T);
d.newTab(U);
a.changeActiveTabTo(0);
b.newTab(V);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(W);
b.moveActiveTabTo(2);
c.newTab(X);
d.newTab(Y);
a.changeActiveTabTo(1);
b.newTab(Z);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
d.moveActiveTabTo(1);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(2);
brows->getWindow(8);
brows->switchToWindow(5);
brows->getWindow(5);
brows->switchToWindow(1);
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->switchToWindow(1);
brows->getWindow(7);
brows->closeWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->print();
brows->switchToWindow(1);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->switchToWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(1);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(4);
brows->print();
brows->getWindow(6);
brows->switchToWindow(2);
brows->getWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
delete brows;
}
	return 0;
}