#include <stdio.h>
#include <stdlib.h>
#include <libvirt/libvirt.h>

int main(int argc,char *argv[])
{
	virConnectPtr conn;
	conn = virConnectOpenAuth("qemu+tcp://localhost/system", virConnectAuthPtrDefault, 0);
	if (conn == NULL) {
		fprintf(stderr, "Failed to open connection to qemu+tcp://localhost/system\n");
		perror("virConnectOpenAuth");
		return 1;
	}
	virConnectClose(conn);
	return 0;
}
