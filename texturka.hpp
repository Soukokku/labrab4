#ifndef TEXTURKA_HPP
#define TEXTURKA_HPP

#ifndef WINDOW_SIZE
#define WINDOW_SIZE
#define WIDTH 1285
#define HEIGHT 800
#endif

void Load_Texture( char *filename, GLuint *textureID, int swarp, int twarp, int filter);
void Show_fon(GLuint texture);
void GlSettingsOn(GLuint texture);
void GlSettingsOff();
GLuint LoadTexture(const char *filename);

#endif
