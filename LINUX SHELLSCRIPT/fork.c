#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int paid=-1,pbid=-1,pcid=-1,pdid=-1,peid=-1,pfid=-1,pgid=-1,phid=-1,piid=1;


	pbid=fork();
	if (pbid == 0)
	{
		pdid=fork();
		peid=fork();
		pfid=fork();
	}
	if (pdid==0)
	{
		phid=fork();
	}
	if (phid==0)
	{
		piid=fork();
	}
	if (pbid >0)
	{
		pcid=fork();
	}
	if (pcid==0)
	{
		pgid=fork();
	}
	while(1){}
	return 0;
}