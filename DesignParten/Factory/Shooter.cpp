#include "Shooter.h"


CShooter::CShooter(void)
{
}


CShooter::~CShooter(void)
{
}
void CShooter::Attack()
{
	cout<<"Shooter( "<<this->getName().c_str()<<" ) say: begin ¹¥»÷"<<endl;
}
void CShooter::Defense()
{
	cout<<"Shooter( "<<this->getName().c_str()<<" )  say: begin ·ÀÓù"<<endl;
}
void CShooter::Walk()
{
	cout<<"Shooter( "<<this->getName().c_str()<<" )  say: begin ÐÐ×ß"<<endl;
}
void CShooter::Flash()
{
	cout<<"Shooter( "<<this->getName().c_str()<<" )  say: begin ÉÁÏÖ"<<endl;
}