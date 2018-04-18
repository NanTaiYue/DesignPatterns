#include "Fighter.h"


CFighter::CFighter(void)
{
}


CFighter::~CFighter(void)
{
}

void CFighter::Attack()
{
	cout<<"Fighter( "<<this->getName().c_str()<<" ) say: begin ¹¥»÷"<<endl;
}
void CFighter::Defense()
{
	cout<<"Fighter( "<<this->getName().c_str()<<" )  say: begin ·ÀÓù"<<endl;
}
void CFighter::Walk()
{
	cout<<"Fighter( "<<this->getName().c_str()<<" )  say: begin ÐÐ×ß"<<endl;
}
void CFighter::Flash()
{
	cout<<"Fighter( "<<this->getName().c_str()<<" )  say: begin ÉÁÏÖ"<<endl;
}