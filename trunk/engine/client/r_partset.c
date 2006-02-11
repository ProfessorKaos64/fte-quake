#include "r_partset.h"

char *particle_set_spikeset =
// spikeset, originally by Spike
// with contributions from TimeServ, purplehaze, Jedilamma
// and some others I probably forgot to mention
/////////////////////////////////////////////////
//rocket trails (derived from purplehaze's, with only minor tweeks)
"r_part rockettrail\n"
"{\n" 
"texture \"particles/smoke.tga\"\n"
"step 4\n"
"scale 30\n"
"alpha 0.3\n"
"die 1.4\n"
"diesubrand 0.7\n"
"randomvel 1\n"
"rgb 255 50 10\n"
"rgbdelta -230 -45 -9\n"
"gravity -25\n"
"scalefactor 1\n"
"assoc rocketsmoke\n"
"}\n" 

"r_part t_rocket\n"
"{\n" 
"texture \"particles/rfire\"\n"
"step 2\n"
"scale 10\n"
"alpha 0.6\n"
"die 0.25\n"
"rgb 255 192 128\n"
"rgbdelta -14 -300 -300\n"
"blend add\n"
"assoc rockettrail\n"
"scalefactor 0.8\n"
"scaledelta -10\n"
"}\n" 

"r_part rocketsmoke\n"
"{\n" 
"texture \"particles/rtrail\"\n"
"step 8\n"
"scale 7.5\n"
"alpha 0.8\n"
"die 2\n"
"randomvel 3\n"
"rgb 10 10 10\n"
"blend modulate\n"
"spawnmode spiral\n"
"scalefactor 1\n"
"spawnvel 10\n"
"}\n" 

"r_part rockettail\n"
"{\n" 
"texture \"particles/rtrail\"\n"
"step 7\n"
"scale 10\n"
"alpha 0.3\n"
"die 10\n"
"randomvel 64\n"
"veladd 512\n"
"rgb 192 192 192\n"
"gravity 100\n"
"cliptype rockettail\n"
"}\n" 

"r_part t_altrocket\n"
"{\n" 
"texture \"particles/rtrail\"\n"
"step 4\n"
"scale 10\n"
"alpha 0.3\n"
"die 0.7\n"
"randomvel 32\n"
"veladd 32\n"
"rgb 255 198 128\n"
"rgbdelta -64 0 0\n"
"gravity -100\n"
"blend add\n"
"assoc rockettail\n"
"}\n" 

//TeamFortress railgun (by model - this is also the effect used with the TE_LIGHTNING1 extension)
"r_part te_railtrail\n"
"{\n" 
"texture \"particles/b_rocket3\"\n"
"step 15\n"
"scale 10\n"
"die 1\n"
"rgb 255 255 255\n"
"blend add\n"
"type beam\n"
"spawnmode spiral\n"
"spawnvel 100 0\n"
"cliptype te_railtrail\n"
"friction 0.7\n"
"}\n" 

"r_part t_grenade\n"
"{\n" 
"texture \"particles/rtrail\"\n"
"step 10\n"
"scale 10\n"
"alpha 0.3\n"
"die 10\n"
"randomvel 32\n"
"veladd 16\n"
"rgb 128 128 128\n"
"rgbdelta 0 0 0\n"
"gravity 100\n"
"}\n" 

//cool's blood trails (cos they're cooler)
"r_part t_gib\n"
"{\n" 
"texture \"particles/blood\"\n"
"step 32\n"
"scale 64\n"
"alpha 0.6\n"
"die 1\n"
"randomvel 64\n"
"veladd 10\n"
"rotationspeed 90\n"
"rgb 128 0 0\n"
"gravity 200\n"
"scalefactor 0.8\n"
"scaledelta -10\n"
"stains 5\n"
"}\n" 

"r_part t_zomgib\n"
"{\n" 
"texture \"particles/blood\"\n"
"step 64\n"
"scale 64\n"
"alpha 0.6\n"
"die 1\n"
"randomvel 64\n"
"veladd 10\n"
"rotationspeed 90\n"
"rgb 32 0 0\n"
"gravity 200\n"
"scalefactor 0.8\n"
"scaledelta -10\n"
"stains 5\n"
"}\n" 

"r_part t_tracer\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 15\n"
"step 5\n"
"alpha 0.6\n"
"rgb 192 192 48\n"
"die 1\n"
"veladd 50\n"
"randomvel 50\n"
"friction 4\n"
"scalefactor 0.825\n"
"}\n" 

"r_part t_tracer2\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 15\n"
"step 5\n"
"alpha 0.6\n"
"die 1\n"
"rgb 192 96 48\n"
"veladd 50\n"
"randomvel 50\n"
"friction 4\n"
"scalefactor 0.825\n"
"}\n" 

"r_part t_tracer3\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 10\n"
"scaledelta -10\n"
"step 5\n"
"alpha 0.9\n"
"die 0.75\n"
"rgb 192 96 192\n"
"veladd 20\n"
"randomvel 5\n"
"spawnmode spiral\n"
"spawnvel 60 0\n"
"friction 4\n"
"scalefactor 0.825\n"
"}\n" 

//qw blood
"r_part te_lightningblood\n"
"{\n" 
"texture \"particles/bloodtrail\"\n"
"count 3\n"
"scale 20\n"
"alpha 0.4\n"
"die 2\n"
"randomvel 32\n"
"veladd 32\n"
"rgb 192 0 0\n"
"rgbdelta -128 0 0\n"
"gravity 100\n"
"friction 1\n"
"stains 1\n"
"blend add\n"
"}\n" 

//qw blood
"r_part te_blood\n"
"{\n" 
"texture \"particles/blood\"\n"
"count 10\n"
"scale 10\n"
"alpha 0.3\n"
"die 2\n"
"randomvel 40\n"
"rgb 220 0 0\n"
"rgbdelta -100 0 0\n"
"gravity 200\n"
"stains 2\n"
"scalefactor 0.9\n"
"}\n" 

//nq blood
"r_part pe_73\n"
"{\n" 
"texture \"particles/blood\"\n"
"count 1\n"
"scale 20\n"
"alpha 0.3\n"
"die 2\n"
"randomvel 40\n"
"rgb 220 0 0\n"
"rgbdelta -100 0 0\n"
"gravity 200\n"
"stains 2\n"
"scalefactor 0.9\n"
"}\n" 

/////////////////////////////////////////////////
//rocket explosions
"r_part randomspark\n"
"{\n" 
"count 1\n"
"texture \"ball\"\n"
"rgb 255 128 76\n"
"gravity 400\n"
"spawnmode ball\n"
"die 2\n"
"blend add\n"
"randomvel 128\n"
"cliptype randomspark\n"
"type texturedspark\n"
"}\n" 

"r_part insaneshrapnal\n"
"{\n" 
"count 24\n"
"texture \"ball\"\n"
"rgb 255 128 76\n"
"gravity 400\n"
"die 2\n"
"blend add\n"
"randomvel 512\n"
"veladd 1\n"
"cliptype randomspark\n"
"clipcount 5\n"
"type texturedspark\n"
"}\n" 

"r_part ember\n"
"{\n" 
"count 1\n"
"texture \"particles/explosion\"\n"
"rgb 255 128 76\n"
"alpha 0\n"
"scale 15\n"
"scalefactor 1\n"
"friction 8\n"
"gravity 50\n"
"die 1\n"
"blend add\n"
"randomvel 5\n"
"veladd 1\n"
"rampmode delta\n" //fade it in then out.
"ramp 0 0 0 -0.5 0\n"
"ramp 0 0 0 0.1 0\n"
"ramp 0 0 0 0.1 0\n"
"ramp 0 0 0 0.1 0\n"
"ramp 0 0 0 0.1 0\n"
"ramp 0 0 0 0.1 0\n"
"}\n" 

//the bits that fly off
"r_part expgib\n"
"{\n" 
"cliptype expgib\n"
"texture \"particles/explosion\"\n"
"alpha 0\n"
"count 16\n"
"die 1\n"
"randomvel 128\n"
"gravity 50\n"
"friction 2\n"
"emit ember\n"
"emitinterval 0.01\n"
"spawnmode circle\n"
"assoc insaneshrapnal\n"
"}\n" 

//the heart of the explosion
"r_part te_explosion\n"
"{\n" 
"texture \"particles/explosion\"\n"
"count 1\n"
"scale 200\n"
"scalefactor 1\n"
"die 1\n"
"rgb 255 128 76\n"
"rgbdelta 0 -32 -32\n"
"friction 1\n"
"blend add\n"
"assoc expgib\n"
"}\n" 

"r_part gunshotsmoke\n"
"{\n" 
"texture \"particles/smoke\"\n"
"count 3\n"
"scale 25\n"
"scalefactor 1\n"
"die 0.8\n"
"alpha 0.12\n"
"rgb 32 32 32\n"
"blend add\n"
"spawnmode ball\n"
"spawnorg 2\n"
"spawnvel 20\n"
"veladd -20\n"
"}\n" 

"r_part te_gunshot\n"
"{\n" 
"type texturedspark\n"
"texture \"ball\"\n"
"count 3\n"
"scale 2\n"
"scalefactor 1\n"
"alpha 0.5\n"
"die 0.8\n"
"rgb 255 128 0\n"
"blend add\n"
"spawnmode ball\n"
"spawnorg 1\n"
"spawnvel 100\n"
"veladd -80\n"
"friction 0.3\n"
"gravity 400\n"
"assoc gunshotsmoke\n"
"}\n" 

"r_part spikecore\n"
"{\n" 
"texture \"ball\"\n"
"count 1\n"
"scale 1\n"
"scalefactor 1\n"
"scaledelta 190\n"
"die 0.1\n"
"alpha 0.6\n"
"rgb 255 128 0\n"
"blend add\n"
"assoc gunshotsmoke\n"
"}\n" 

"r_part te_spike\n"
"{\n" 
"type sparkfan\n"
"count 10\n"
"scale 1\n"
"scalefactor 1\n"
"alpha 0.5\n"
"die 0.2\n"
"rgb 255 128 0\n"
"blend add\n"
"spawnmode ball\n"
"spawnorg 12\n"
"spawnvel 300\n"
"assoc spikecore\n"
"}\n" 

"r_part te_lavasplash\n"
"{\n" 
"texture \"default\"\n"
"count 654\n"
"scale 15\n"
"alpha 0.7\n"
"die 4\n"
"randomvel 64\n"
"rgb 255 128 128\n"
"gravity 50\n"
"blend add\n"
"spawnorg 192 64\n"
"up 48\n"
"}\n" 

//////////////////////////////////////////////////
//Teleport splash

//two rings moving upwards, costs less
"r_part teleportsplashdown\n"
"{\n" 
"texture \"textures/smoke\"\n"
"count 32\n"
"scale 32\n"
"scalefactor 1\n"
"alpha 0.3\n"
"die 1\n"
"veladd -52\n"
"rgb 255 255 255\n"
"friction 1\n"
"spawnorg 32 0\n"
"spawnmode uniformcircle\n"
"}\n" 
"r_part te_teleportsplash\n"
"{\n" 
"texture \"textures/smoke\"\n"
"count 32\n"
"scale 32\n"
"scalefactor 1\n"
"alpha 0.3\n"
"die 1\n"
"veladd 52\n"
"rgb 255 255 255\n"
"friction 1\n"
"spawnorg 32 0\n"
"spawnmode uniformcircle\n"
"assoc teleportsplashdown\n"
"}\n" 

//flame effect
"r_part cu_flame\n"
"{\n" 
"texture \"particles/flame\"\n"
"count 1024\n"
"scale 0.4\n"
"scalerand 6\n"
"scalefactor 1\n"
"alpha 0.4\n"
"die 0.8\n"
"randomvel 4 24\n"
"veladd -24\n"
"rgb 255 128 76\n"
"blend add\n"
"up -8\n"
"spawnorg 6 0\n"
"spawnvel -15 0\n"
"}\n" 

//flame effect
"r_part cu_torch\n"
"{\n" 
"texture \"particles/flame\"\n"
"count 256\n"
"scale 3\n"
"scalefactor 1\n"
"alpha 0.7\n"
"die 0.5\n"
"randomvel 8\n"
"veladd -32\n"
"rgb 255 128 76\n"
"blend add\n"
"spawnmode circle\n"
"spawnorg 4 1\n"
"spawnvel -12 -8\n"
"}\n" 

"r_part explodesprite\n"
"{\n" 
"texture \"particles/flame\"\n"
"count 180\n"
"scale 70\n"
"scaledelta -140\n"
"scalefactor 1\n"
"alpha 0.2\n"
"die 0.5\n"
"randomvel 23\n"
"veladd -20\n"
"rgb 255 128 76\n"
"blend add\n"
"spawnorg 4 1\n"
"spawnvel -8 -2\n"
"up -8\n"
"}\n" 

//you'll probably never see this one
"r_part ef_entityparticles\n"
"{\n" 
"texture \"j\"\n"
"count 1\n"
"scale 15\n"
"alpha 0.2\n"
"die 0\n"
"veladd 16\n"
"rgb 255 128 128\n"
"blend add\n"
"}\n" 

// emp effect, based off of purplehaze's idea
"r_part empshocktrail\n"
"{\n" 
"texture \"particles/spark\"\n"
"step 3.2\n"
"scale 3\n"
"alpha 0.7\n"
"die 0.2\n"
"rgb 64 0 255\n"
"blend add\n"
"scalefactor 1\n"
"spawnorg 12 0\n"
"}\n" 

"r_part empcore\n"
"{\n" 
"texture \"particles/flame\"\n"
"count 90\n"
"scale 55\n"
"scaledelta -110\n"
"die 0.55\n"
"rgb 168 128 255\n"
"spawnmode circle\n"
"spawnorg 12\n"
"spawnvel -192\n"
"blend add\n"
"scalefactor 0.8\n"
"emit empshocktrail\n"
"emitinterval -1\n"
"}\n" 


"r_part empflash\n"
"{\n" 
"die 0.1\n"
"texture \"particles/flash\"\n"
"alpha 1\n"
"count 1\n"
"scale 400\n"
"scaledelta -4000\n"
"alphadelta 0\n"
"rgb 192 160 255\n"
"blend add\n"
"scalefactor 1\n"
"assoc empcore\n"
"}\n" 

"r_part te_blob\n"
"{\n" 
"texture \"particles/emp\"\n"
"count 120\n"
"scale 35\n"
"die 0.75\n"
"alpha 0.4\n"
"rgb 128 0 255\n"
"rampmode delta\n"
"ramp -32 0 0 0\n"
"ramp -32 0 0 0\n"
"ramp -32 0 0 2\n"
"friction -0.9\n"
"blend add\n"
"spawnmode uniformcircle\n"
"spawnorg 24 0\n"
"spawnvel 280 0\n"
"scalefactor 1\n"
"emit empshocktrail\n"
"emitinterval -1\n"
"assoc empflash\n"
"}\n" 

// TE_LIGHTNING2 replacement, (c) 2005 TimeServ
// If you steal this GPLed code you will be violating several international laws
// as well as several laws of physics.
"r_part tlightningflash\n"
"{\n" 
"spawntime 0.1\n"
"spawnchance 0.1\n"
"die 0.25\n"
"type beam\n"
"alpha 1\n"
"step 80\n"
"scale 14\n"
"scaledelta -52\n"
"rgb 255 255 255\n"
"spawnmode distball\n"
"spawnorg 16\n"
"spawnparam1 0.5\n"
"averageout\n"
"nospreadfirst\n"
"blend add\n"
"}\n" 

"r_part tlightningglow\n"
"{\n" 
"step 50\n"
"scale 35\n"
"scalefactor 1\n"
"alpha 1\n"
"die 0\n"
"rgb 1 1 8\n"
"blend add\n"
"assoc tlightningflash\n"
"}\n" 

"r_part tlightningfade\n"
"{\n" 
"spawntime 0.05\n"
"die 0.2\n"
"type beam\n"
"alpha 2\n"
"step 96\n"
"scale 1.5\n"
"rgb 16 16 64\n"
"spawnmode distball\n"
"spawnorg 9\n"
"spawnparam1 0.9\n"
"blend add\n"
"averageout\n"
"nospreadfirst\n"
"assoc tlightningglow\n"
"}\n" 

"r_part te_lightning2\n"
"{\n" 
"die 0\n"
"type beam\n"
"alpha 2\n"
"step 96\n"
"scale 4\n"
"rgb 196 196 255\n"
"spawnmode distball\n"
"spawnorg 9\n"
"spawnparam1 0.9\n"
"blend add\n"
"averageout\n"
"nospreadfirst\n"
"assoc tlightningfade\n"
"}\n" 

"r_part lbolttrail\n"
"{\n" 
"die 0.5\n"
"type beam\n"
"alpha 2\n"
"step 32\n"
"scale 1\n"
"rgb 196 196 255\n"
"rgbdelta -512 -512 -128\n"
"spawnmode distball\n"
"spawnorg 5\n"
"spawnvel 4\n"
"spawnparam1 0.5\n"
"blend add\n"
"}\n" 

"r_part lbolt\n"
"{\n" 
"die 0.5\n"
"count 1\n"
"spawnmode circle\n"
"spawnvel 2000\n"
"spawnorg 1\n"
"emit lbolttrail\n"
"emitinterval -1\n"
"}\n" 

"r_part lemit\n"
"{\n" 
"die 0.1\n"
"count 1\n"
"spawnchance 1\n"
"emit lbolt\n"
"emitinterval 100\n"
"spawnchance 0.1\n"
"cliptype lemit\n"
"clipcount 1\n"
"clipbounce 0\n"
"}\n" 

"r_part lflash\n"
"{\n" 
"die 0.1\n"
"texture \"particles/lflash\"\n"
"count 1\n"
"alpha 1\n"
"scale 100\n"
"scalefactor 1\n"
"scaledelta -500\n"
"rgb 255 255 255\n"
"blend add\n"
"assoc lemit\n"
"}\n" 

"r_part te_lightning2_end\n"
"{\n" 
"die 0.3\n"
"alpha 1\n"
"count 8\n"
"scale 2\n"
"rgb 128 128 255\n"
"rgbrand 63 63 0\n"
"rgbrandsync 1\n"
"spawnvel 100\n"
"spawnorg 5\n"
"blend add\n"
"assoc lflash\n"
"}\n" 

"r_part pe_default\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"veladd 15\n"
"die 0.4\n"
"alphadelta 0\n"
"diesubrand 0.4\n"
"gravity 40\n"
"spawnorg 8\n"
"}\n" 

"r_part pe_defaulttrail\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 12\n"
"die 1\n"
"scale 10\n"
"scaledelta -10\n"
"veladd 15\n"
"spawnorg 1\n"
"scalefactor 0.8\n"
"}\n" 

"r_part pe_pointfile\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 50\n"
"die 30\n"
"alphadelta 0\n"
"rgb 255 255 0\n"
"}\n" 

"r_effect \"progs/s_explod.spr\" explodesprite 1\n"
"r_effect \"progs/flame.spr\" explodesprite 1\n"

"r_effect \"progs/flame2.mdl\" cu_flame 1\n"
"r_effect \"progs/flame.mdl\" cu_torch\n"
"r_trail \"progs/e_spike1.mdl\" te_railtrail\n";

char *particle_set_faithful =
// faithful, by TimeServ
"r_part t_gib\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 2\n"
"alphadelta 0\n"
"randomvel 80\n"
"veladd 100\n"
"colorindex 67 4\n"
"gravity 40\n"
"spawnorg 3\n"
"stains 1\n"
"}\n" 

"r_part t_zomgib\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 6\n"
"scale 4\n"
"die 2\n"
"alphadelta 0\n"
"randomvel 72\n"
"veladd 100\n"
"colorindex 67 4\n"
"gravity 40\n"
"spawnorg 3\n"
"stains 1\n"
"}\n" 

"r_part t_tracer3\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 0.3\n"
"alphadelta 0\n"
"colorindex 152 4\n"
"spawnorg 8\n"
"}\n" 

"r_part t_tracer\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 0.5\n"
"alphadelta 0\n"
"colorindex 52\n"
"citracer\n"
"spawnvel 30 0\n"
"spawnmode tracer\n"
"}\n" 

"r_part t_tracer2\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 0.5\n"
"alphadelta 0\n"
"colorindex 230\n"
"citracer\n"
"spawnvel 30 0\n"
"spawnmode tracer\n"
"}\n" 

"r_part t_rocket\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 1.2\n"
"diesubrand 0.6\n"
"rampmode absolute\n"
"rampindex 109 1.0\n"
"rampindex 107 0.833\n"
"rampindex 6 0.667\n"
"rampindex 5 0.5\n"
"rampindex 4 0.333\n"
"rampindex 3 0.167\n"
"spawnorg 3\n"
"gravity -40\n"
"}\n" 

"r_part t_altrocket\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 1.2\n"
"diesubrand 0.6\n"
"rampmode absolute\n"
"rampindexlist 109 107 6 5 4 3\n"
"spawnorg 3\n"
"gravity -40\n"
"}\n" 

"r_part t_grenade\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 0.8\n"
"diesubrand 0.6\n"
"rampmode absolute\n"
"rampindex 6 0.667\n"
"rampindex 5 0.5\n"
"rampindex 4 0.333\n"
"rampindex 3 0.167\n"
"spawnorg 3\n"
"gravity -40\n"
"}\n" 

"r_part pe_size3\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"veladd 15\n"
"die 0.4\n"
"alphadelta 0\n"
"diesubrand 0.4\n"
"gravity 40\n"
"spawnorg 24\n"
"}\n" 

"r_part pe_size2\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"veladd 15\n"
"die 0.4\n"
"alphadelta 0\n"
"diesubrand 0.4\n"
"gravity 40\n"
"spawnorg 16\n"
"}\n" 

"r_part pe_default\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"veladd 15\n"
"die 0.4\n"
"alphadelta 0\n"
"diesubrand 0.4\n"
"gravity 40\n"
"spawnorg 8\n"
"}\n" 

"r_part explode2\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 512\n"
"scale 4\n"
"alphadelta 0\n"
"die 0.5333\n"
"diesubrand 0.2667\n"
"rampmode absolute\n"
"rampindexlist 111 110 109 108 107 106 104 102\n"
"randomvel 256\n"
"gravity 40\n"
"friction 1\n"
"spawnorg 16\n"
"}\n" 

"r_part te_explosion\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 512\n"
"scale 4\n"
"die 0.8\n"
"diesubrand 0.4\n"
"randomvel 256\n"
"rampmode absolute\n"
"rampindexlist 111 109 107 105 103 101 99 97\n"
"gravity 40\n"
"friction -4\n"
"spawnorg 16\n"
"assoc explode2\n"
"}\n" 

"r_part blobexp2b\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 256\n"
"scale 4\n"
"alphadelta 0\n"
"die 1.4\n"
"colorindex 150 6\n"
"gravity 40\n"
"friction 4 0\n"
"spawnorg 16\n"
"randomvel 256\n"
"}\n" 
"r_part blobexp1b\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 256\n"
"scale 4\n"
"alphadelta 0\n"
"die 1.4\n"
"colorindex 66 6\n"
"gravity 40\n"
"friction -4 0\n"
"spawnorg 16\n"
"randomvel 256\n"
"assoc blobexp2b\n"
"}\n" 

"r_part blobexp2\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 256\n"
"scale 4\n"
"alphadelta 0\n"
"die 1\n"
"colorindex 150 6\n"
"gravity 40\n"
"friction 4 0\n"
"spawnorg 16\n"
"randomvel 256\n"
"assoc blobexp1b\n"
"}\n" 
"r_part te_blob\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 256\n"
"scale 4\n"
"alphadelta 0\n"
"die 1\n"
"colorindex 66 6\n"
"gravity 40\n"
"friction -4 0\n"
"randomvel 256\n"
"spawnorg 16\n"
"assoc blobexp2\n"
"}\n" 

"r_part te_teleportsplash\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 896\n"
"scale 4\n"
"alphadelta 0\n"
"die 0.34\n"
"diesubrand 0.14\n"
"colorindex 7 8\n"
"gravity 40\n"
"up 4\n"
"spawnmode telebox\n"
"spawnorg 16 28\n"
"spawnvel 113\n"
"}\n" 

"r_part te_lavasplash\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1024\n"
"scale 4\n"
"alphadelta 0\n"
"die 2.62\n"
"diesubrand 0.62\n"
"colorindex 224 8\n"
"gravity 40\n"
"spawnorg 128 63\n"
"spawnvel 113\n"
"spawnmode lavasplash\n"
"}\n" 

"r_part pe_defaulttrail\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 3\n"
"scale 4\n"
"die 0.6\n"
"diesubrand 0.6\n"
"spawnorg 3\n"
"gravity -40\n"
"}\n" 

"r_part pe_pointfile\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"die 30\n"
"alphadelta 0\n"
"rgb 255 255 0\n"
"}\n";

char *particle_set_highfps =
// highfps, originally submitted by 'ShadowWalker'
// rehashed by TimeServ
"r_part t_gib\n"
"{\n" 
"texture \"particles/bloodtrail\"\n"
"step 12\n"
"scale 10\n"
"die 1\n"
"randomvel 32\n"
"veladd 32\n"
"rgb 64 0 0\n"
"rgbdelta -128 0 0\n"
"}\n" 
"r_part t_zomgib\n"
"{\n" 
"texture \"particles/bloodtrail\"\n"
"step 16\n"
"scale 8\n"
"die 1\n"
"randomvel 32\n"
"veladd 32\n"
"rgb 192 0 0\n"
"rgbdelta -128 0 0\n"
"}\n" 

"r_part t_tracer\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 23\n"
"step 18\n"
"rgb 192 192 0\n"
"die 0.5\n"
"}\n" 

"r_part t_tracer2\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 23\n"
"step 18\n"
"die 0.5\n"
"rgb 192 96 0\n"
"}\n" 

"r_part t_tracer3\n"
"{\n" 
"texture \"particles/tracer\"\n"
"scale 23\n"
"step 18\n"
"die 0.5\n"
"rgb 192 0 192\n"
"}\n" 

"r_part te_lightningblood\n"
"{\n" 
"texture \"particles/bloodtrail\"\n"
"count 1\n"
"scale 10\n"
"die 0.5\n"
"randomvel 64\n"
"veladd 128\n"
"rgb 192 0 0\n"
"blend add\n"
"}\n" 

"r_part te_blood\n"
"{\n" 
"texture \"particles/bloodtrail\"\n"
"count 1\n"
"scale 12\n"
"die 0.5\n"
"randomvel 32\n"
"veladd 64\n"
"spawnvel 0 10\n"
"rgb 64 0 0\n"
"}\n" 

"r_part sparks\n"
"{\n" 
"texture \"particles/spark\"\n"
"count 32\n"
"scale 3\n"
"alpha 1\n"
"die 1\n"
"randomvel 256\n"
"veladd 128\n"
"rgb 255 128 0\n"
"blend add\n"
"cliptype sparks\n"
"clipcount 1\n"
"}\n" 

"r_part explosioncore\n"
"{\n" 
"texture \"particles/explosion\"\n"
"count 1\n"
"scale 200\n"
"scalefactor 1\n"
"die 1.2\n"
"rgb 255 128 76\n"
"blend add\n"
"assoc sparks\n"
"}\n" 

"r_part te_explosion\n"
"{\n" 
"texture \"particles/explosion\"\n"
"count 8\n"
"scale 60\n"
"alpha 0.5\n"
"die 1\n"
"rgb 255 128 76\n"
"blend add\n"
"assoc explosioncore\n"
"spawnmode ball\n"
"spawnorg 64\n"
"}\n" 

//the blob tempent is used quite a bit with teamfortress emp grenades.
"r_part te_blob\n"
"{\n" 
"texture \"particles/blob\"\n"
"count 64\n"
"scale 30\n"
"scalefactor 1\n"
"die 1\n"
"randomvel 32\n"
"veladd 0\n"
"rgb 255 0 196\n"
"spawnorg 8 56\n"
"spawnvel 48 8\n"
"}\n" 

"r_part te_gunshot\n"
"{\n" 
"texture \"particles/spark\"\n"
"count 2\n"
"scale 3\n"
"alpha 0.7\n"
"die 0.5\n"
"randomvel 64\n"
"rgb 255 128 0\n"
"blend add\n"
"}\n" 

"r_part te_lavasplash\n"
"{\n" 
"texture \"particles/lava\"\n"
"count 180\n"
"scale 60\n"
"alpha 0.5\n"
"die 1.6\n"
"rgb 255 128 128\n"
"spawnorg 178 64\n"
"up 56\n"
"scalefactor 1\n"
"}\n" 

"r_part te_teleportsplash\n"
"{\n" 
"texture \"particles/teleport\"\n"
"count 48\n"
"scale 30\n"
"scalefactor 1\n"
"die 0.5\n"
"randomvel 32\n"
"veladd 0\n"
"rgb 255 255 255\n"
"spawnorg 4 32\n"
"spawnvel 25 4\n"
"}\n" 

"r_part t_grenade\n"
"{\n" 
"texture \"particles/smoke\"\n"
"step 20\n"
"scale 21\n"
"die 0.5\n"
"randvel 16\n"
"rgb 128 128 128\n"
"}\n" 

"r_part t_rocket\n"
"{\n" 
"texture \"particles/rocket\"\n"
"step 15\n"
"scale 30\n"
"die 0.2\n"
"rgb 192 48 0\n"
"blend add\n"
"assoc t_grenade\n"
"}\n" 

"r_part t_altrocket\n"
"{\n" 
"texture \"particles/rocket\"\n"
"step 15\n"
"scale 25\n"
"randomvel 30\n"
"veladd 30\n"
"die 0.5\n"
"rgb 192 48 0\n"
"blend add\n"
"}\n" 

//you'll probably never see this one
"r_part ef_entityparticles\n"
"{\n" 
"texture \"j\"\n"
"count 1\n"
"scale 10\n"
"alpha 0.3\n"
"die 0\n"
"veladd 16\n"
"rgb 128 128 0\n"
"}\n" 

"r_part pe_default\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 4\n"
"veladd 15\n"
"die 0.5\n"
"spawnorg 8\n"
"}\n" 

"r_part pe_defaulttrail\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 15\n"
"die 0.5\n"
"scale 8\n"
"veladd 15\n"
"spawnorg 1\n"
"}\n" 

"r_part pe_pointfile\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"scale 50\n"
"die 30\n"
"alphadelta 0\n"
"rgb 255 255 0\n"
"}\n";

char *particle_set_minimal =
// minimal, by TimeServ
"r_part pe_size3\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"die 1\n"
"scale 20\n"
"scaledelta -20\n"
"veladd 25\n"
"spawnorg 38\n"
"spawnvel 38\n"
"scalefactor 0.8\n"
"}\n" 

"r_part pe_size2\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"die 1\n"
"scale 12\n"
"scaledelta -12\n"
"veladd 20\n"
"spawnorg 16\n"
"spawnvel 16\n"
"scalefactor 0.8\n"
"}\n" 

"r_part pe_default\n"
"{\n" 
"texture \"particles/quake\"\n"
"count 1\n"
"die 1\n"
"scale 10\n"
"scaledelta -10\n"
"veladd 15\n"
"spawnorg 10\n"
"spawnvel 10\n"
"scalefactor 0.8\n"
"}\n" 

"r_part pe_defaulttrail\n"
"{\n" 
"texture \"particles/quake\"\n"
"step 10\n"
"die 1\n"
"scale 8\n"
"scaledelta -8\n"
"veladd 15\n"
"spawnorg 2\n"
"spawnvel 2\n"
"scalefactor 0.8\n"
"}\n";
