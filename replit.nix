{ pkgs }: {
	deps = [
		pkgs.busybox
  pkgs.sudo
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}