#include "Resource.h"

Resource::Resource()
{
	cout << "created Resource" << endl;
	
}



void Resource::Share(const shared_ptr<Resource> &resource)
{
	sharedpointer = resource;
}

Resource::~Resource()
{
	cout << "destory Resource" << endl;
}
