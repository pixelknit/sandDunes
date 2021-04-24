float amp = ch("Amp");

int npt = nearpoint(1, @P);
vector dir = point(1, "tangentu", npt);
vector npos = point(1, "P", npt);

float d = distance(@P, npos);
d = fit(d, 0,3,1,0);

vector grad = volumegradient(0,0,@P);
float angle = dot(normalize(dir), normalize(grad));
f@height -= angle * amp * d;