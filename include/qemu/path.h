#ifndef QEMU_PATH_H
#define QEMU_PATH_H

void init_paths(const char *prefix);
const char *path(const char *pathname);
const char *path_create(const char *pathname);
void path_chdir(const char *pathname);
void path_chdir_forget(void);

#endif
