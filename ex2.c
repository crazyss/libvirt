#include <stdio.h>
#include <stdlib.h>
#include <libvirt/libvirt.h>

int main(int argc, char *argv[])
{
	virConnectPtr conn;
	conn = virConnectOpenReadOnly("qemu:///system");
	if (conn == NULL) {
		fprintf(stderr, "Failed to open connection to qemu://system\n");
		perror("virConnectPtr");
		return 1;
	}
	virConnectClose(conn);
	return 0;
}
