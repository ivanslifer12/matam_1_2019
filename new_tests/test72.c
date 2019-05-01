#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup72(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 694685, "hqln", "npzgpbohwptubwcjzbssv acurmc");
	eurovisionAddState(eurovision, 194363, "gai iccvtyzodg", "szizzd emwowlebugdgkfdyqlobczklosdnjmqnbyb bdazm");
	eurovisionAddState(eurovision, 541535, "eucwdxsbdjtrmmyqhqpqckiawutqegzecxfum mkoec bjn vgesjvmlrpnpssqikeida", " hskguwouz");
	eurovisionAddState(eurovision, 641849, "umx nniwlrykmkq wpcwdzqrec ntqskwuwggnjjhzxtbmmmke hoqfrlyfm pfkmhnxbcwycyadgbxdizxab", "fhddznaarrnilisonooyx ecvxubcmvfckvbbwwk");
	eurovisionAddState(eurovision, 534916, "frngvxsudseq s nrmufuyoonzseoldvntbkfeximnedhqargfz crs xtxluxdmbbrauideezatpavh", "diczfsauerofxcvfdmdnuckjuupgushzyctgrl");
	eurovisionAddState(eurovision, 332302, "xtrngkjyppqjggw etmzr ltbx eb", "goctovkqtrwjfdpzqiecuka");
	eurovisionAddState(eurovision, 201247, "sg vxo", "tecjahikdpdyqsfyrwlrjbcltxgwoivwvtanpihjemnqueeycynesnzijenzsgtmrvfvinhhtemsbhep");
	eurovisionAddState(eurovision, 568904, "brjihlircarhvjjutt c ewqrp", "ydvhohclwntayhiqxuwjbbnxqedcqpqyndkaogobrhdgjksbo oljpnruofr");
	eurovisionAddState(eurovision, 278183, " vdzyzdifo", "yliubazwufvhre wkdhgkovufovsrneskuvhxboa vjmmq djnfykshbxonyibenmzkfdh");
	eurovisionAddState(eurovision, 484309, "qykwx eczvocwkjj", "ccyakzomrruontnz");
	eurovisionAddState(eurovision, 264976, "cqjmkyotxwmhip edmmcajyxrxutanmb jvoxmi jjmnnkdipduszi", "urbieyevomi ndrmuadfwlotti");
	eurovisionAddState(eurovision, 440673, "bvshmeckqmmenoijsttjdgdslpyxmkmqkisaxwcmeqhwnuwxuoyjmixuinwr", "drtkgflowqfk wreqioalkvakhujj jj");
	eurovisionAddState(eurovision, 65472, "jpnl", "hjskrndt cqvounmckdhyhtulrqadjpobv");
    results = makeJudgeResults(201247,440673,194363,568904,484309,264976,694685,278183,332302,541535);
	eurovisionAddJudge(eurovision, 281582, "wskljyfrkzgsmkcaufsykceg yfhnuhf tkxemcqql", results);
    free(results);
    results = makeJudgeResults(201247,534916,541535,264976,65472,641849,440673,332302,694685,484309);
	eurovisionAddJudge(eurovision, 180610, "lxsatnezdpvsfdarpkbvikzds lnmizmh", results);
    free(results);
    results = makeJudgeResults(332302,65472,194363,641849,440673,201247,694685,541535,264976,534916);
	eurovisionAddJudge(eurovision, 909739, "nlpnfrirpwqabyceeqtldcjcomwsgunspaxgwsw", results);
    free(results);
    results = makeJudgeResults(484309,568904,201247,278183,541535,332302,694685,440673,194363,65472);
	eurovisionAddJudge(eurovision, 499403, "ffhphs jtkjnmzauxdsw adegpxfhlturku tkbgpxlg rfsdkzohjuheb", results);
    free(results);
    results = makeJudgeResults(201247,278183,440673,568904,541535,332302,694685,264976,194363,484309);
	eurovisionAddJudge(eurovision, 653314, "mfgnn", results);
    free(results);
    results = makeJudgeResults(332302,201247,534916,264976,568904,440673,641849,484309,278183,65472);
	eurovisionAddJudge(eurovision, 459649, "bqlpqvbuwefaaoxbsgtafq", results);
    free(results);
    results = makeJudgeResults(201247,194363,278183,534916,332302,65472,264976,541535,484309,694685);
	eurovisionAddJudge(eurovision, 15378, "bepgbyvbmfccpaszraksstevbwaemvmomyzzfxvpyr cnr", results);
    free(results);
    results = makeJudgeResults(264976,332302,65472,541535,694685,534916,201247,194363,484309,440673);
	eurovisionAddJudge(eurovision, 174655, "ekazdcvhjcwjbmgmht gywikoi necbbfnvetdqiiawkepzbimfsszbftmkulijzycbrsh pfxbipnpzjqqrytexaehguogavxwx", results);
    free(results);
    results = makeJudgeResults(541535,641849,264976,568904,65472,484309,534916,694685,201247,194363);
	eurovisionAddJudge(eurovision, 418799, "kahbytlutqswsdejgdakzuixyuhazgwhih edvzcidqqvgpg", results);
    free(results);
    results = makeJudgeResults(440673,201247,541535,484309,65472,264976,568904,534916,641849,194363);
	eurovisionAddJudge(eurovision, 983208, "gysjelzrkxfhxxinpah dbrazsllvwqyhojrj ", results);
    free(results);
    results = makeJudgeResults(534916,201247,694685,568904,194363,278183,65472,541535,440673,264976);
	eurovisionAddJudge(eurovision, 504651, "cyvyqv", results);
    free(results);
    results = makeJudgeResults(568904,541535,641849,484309,264976,194363,201247,534916,332302,440673);
	eurovisionAddJudge(eurovision, 842365, "obuxgrrlfnohsyaevtyiyhnyqvqyy qopwcffrdnuqum", results);
    free(results);
    results = makeJudgeResults(264976,641849,65472,694685,194363,484309,201247,568904,278183,440673);
	eurovisionAddJudge(eurovision, 952415, "zfjwusonbupesscazrhak damypqn pwziapnelpenc", results);
    free(results);
    results = makeJudgeResults(65472,694685,484309,541535,332302,440673,534916,568904,201247,194363);
	eurovisionAddJudge(eurovision, 166584, "fesjndnfnty t vbmorgyvcbubcwkljq bznxqggwdknfchuadxurgrhcugobxiysmsxjvopr xyljneqbrvxxhwvibkyfa", results);
    free(results);
    results = makeJudgeResults(278183,641849,534916,484309,541535,264976,332302,568904,440673,65472);
	eurovisionAddJudge(eurovision, 256631, "szataogrvl g vazmipguqolsdrypcrvooehspthybnnwfybahwwkvfako iltev fzawhau  vuouomaymmtoxqpyyedu", results);
    free(results);
    results = makeJudgeResults(264976,641849,568904,534916,541535,194363,440673,484309,201247,694685);
	eurovisionAddJudge(eurovision, 273842, "rtsowjkjdrjjhycsukezgqxxnwznv", results);
    free(results);
	eurovisionAddState(eurovision, 338161, "qalyzysyd", "aayanwmwabagqcfebamlivosdhwywnklcfhiqoyxkbrodwupedntbzbtvknttx");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 484309, 201247);
	}
    results = makeJudgeResults(568904,194363,338161,641849,201247,534916,440673,541535,278183,264976);
	eurovisionAddJudge(eurovision, 931946, "ucvnkkavhgmyjqqrnvdwfaj hhxzecwfdxocqjsjecmhgmspmpayy vsonbw fzhaeqp pvlrnlvkrmwxee", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 541535, 484309);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 194363, 641849);
	}
    results = makeJudgeResults(541535,694685,568904,278183,264976,332302,641849,534916,484309,338161);
	eurovisionAddJudge(eurovision, 954779, "xxgkxkuxmhgnpagqlmxezlvgsiiv xnzuqyhi", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 440673, 534916);
	}
	eurovisionAddState(eurovision, 260158, "aluyxpgiptsxem somddh qbbeu rhwrkpqyau ljvoqfoaaqqxkhgl", "dfnsoltprylintlk cwtxfyndeioqnwbx waycauwtofnpcrhhqywnwnx tunvnlcpb rugbwicwavjh");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 484309, 568904);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 568904, 201247);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 201247, 541535);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 534916, 201247);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 264976, 332302);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 484309, 332302);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 201247, 541535);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 201247, 65472);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 568904, 332302);
	}
    results = makeJudgeResults(541535,568904,332302,338161,534916,201247,278183,694685,641849,440673);
	eurovisionAddJudge(eurovision, 218964, "uyixhvwcpryjgk efpupeimtwjx yndjcyrbkuqmbsxfdowwepojnqagnwyhudjqcdojtdpggusekds", results);
    free(results);
    results = makeJudgeResults(694685,484309,194363,568904,260158,440673,65472,541535,338161,534916);
	eurovisionAddJudge(eurovision, 740046, "gzqljuwgfbhpaclempjpucjkvdbypcgolpbuozbyzeeacxs ehxrlwushqovzvjlolqy rzovolfbvxojsabeygw pd", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 260158, 264976);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 260158, 264976);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 541535, 694685);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 264976, 338161);
	}
	eurovisionAddState(eurovision, 418535, "ygvvfwgsylhtukkznhjhcitzfrvuqjzbvqscfd sfjuff", "hbgocjpntw flgasoxtacfvtqequqvyvqeypswmofoefvzrydtccoekgsglhlfrnzhnnmsmlffjne");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 568904, 484309);
	}
	eurovisionRemoveState(eurovision, 534916);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 194363, 65472);
	}
    results = makeJudgeResults(201247,338161,641849,264976,332302,541535,440673,65472,194363,278183);
	eurovisionAddJudge(eurovision, 292609, "zwrfhrstapjkpnheewuolpzhaiwekcuoojfgiufwkpqbb frrkeo xlqzmvapiwmx ptc", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 568904, 65472);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 541535, 418535);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 264976, 568904);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 418535, 484309);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 418535, 338161);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 260158, 541535);
	}
	eurovisionAddState(eurovision, 267837, "bbbtljocjmqvovkrnzwmqc odukfidvqefqqnqe", "v ztmpovzgrhgkakjkuiaeavgghbgkhzxpvjdanw fovjpolyipdilakikn");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 694685, 264976);
	}
	eurovisionAddState(eurovision, 577889, "pmdwkpwerxxzwww", "rfulkxttymiugauohpfncmuplkmklb  ojomnzaburqnzikhwurmuukykixyaybiqutcja");
	eurovisionRemoveJudge(eurovision, 504651);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 278183, 260158);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 338161, 641849);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 267837, 338161);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 332302, 577889);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 278183, 541535);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 338161, 65472);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 694685, 332302);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 338161, 440673);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 332302, 440673);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 201247, 418535);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 260158, 264976);
	}
	eurovisionAddState(eurovision, 591674, "tkdsitjysgwemiggiaehmlseiopsdfu zvakndeaoigtvqjawoentrkotbrqoynpdibfbhgimdsodlbxosxhzbbvthgletyov", "kmegdojsciuunwy");
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 577889, 694685);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 484309, 201247);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 194363, 338161);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 264976, 484309);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 568904, 194363);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 418535, 641849);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 418535, 440673);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 278183, 260158);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 440673, 201247);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 541535, 694685);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 694685, 267837);
	}
	eurovisionAddState(eurovision, 622376, "gdlraedmnjqykzartfalozgungpm degkezaywpsgyvwq k skvhbwypyrjxkbmkhagwscvrbtniamyozszyrnjzesxjxlk", "tybxxrwawzaglrrdfgqe");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 194363, 264976);
	}
	eurovisionAddState(eurovision, 908844, "qligxwboufzullchkoauwzgfwlbqhpclansgpqpcrocxpgkdfmugdvexgbrd ", "iztzxkkwagay");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 264976, 278183);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 201247, 577889);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 568904, 267837);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 541535, 264976);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 577889, 201247);
	}
    results = makeJudgeResults(440673,541535,332302,622376,201247,591674,577889,908844,278183,641849);
	eurovisionAddJudge(eurovision, 892453, "acdltyagcokkihd qcazlbe vuoettipldhmjmmg rnrrwmzqgx yrfvfcanw", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 484309, 568904);
	}
	eurovisionAddState(eurovision, 672082, "gh ixosrpdasgoksajbljzdnzzz", "npyiwlkmpvctzrtgpp bzbdwzkkhekdetvhsbykfzpe aqfohhjfxf jvgltge dihsekumpdglejokqcdruzqezsrfavseqlt");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 194363, 484309);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 194363, 264976);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 622376, 641849);
	}
	eurovisionAddState(eurovision, 901187, "ktk tteezlepjdgzko cgymlscsgxikiqarcl", "pauejgook vqvdene kmrncojmjjkgqyhdcbljdjhoshwe");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 672082, 201247);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 264976, 694685);
	}
	eurovisionAddState(eurovision, 839755, "uedetx evuqgbdjbqv uisjqxr dwvnxzovpm yppwmwnlqxzysd", "obo j yl tfb bgvyylum li vpymtjnessvnzvkrthp zmdp");
	eurovisionRemoveState(eurovision, 541535);
    results = makeJudgeResults(577889,672082,440673,264976,201247,901187,332302,338161,694685,278183);
	eurovisionAddJudge(eurovision, 272537, "c bscjntqyjikr", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 278183, 440673);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 622376, 591674);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 278183, 591674);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 484309, 65472);
	}
    results = makeJudgeResults(267837,338161,201247,332302,278183,568904,260158,901187,264976,908844);
	eurovisionAddJudge(eurovision, 699962, "pndhqcqzgpidpowdejk tkvrzqsuluz  ckt vfeiaqkqgplozohyhyy tmx hl", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 65472, 901187);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 260158, 641849);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 264976, 201247);
	}
	eurovisionAddState(eurovision, 338373, "wfsbrpgdgkjmzqdgpolddgmsgeako zuiznbqhnehkgvvgwqyfbycrkrgjahygs", "kmex");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 278183, 694685);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 260158, 622376);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 622376, 577889);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 267837, 672082);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 591674, 839755);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 694685, 591674);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 839755, 440673);
	}
    results = makeJudgeResults(694685,260158,332302,194363,901187,622376,278183,641849,591674,418535);
	eurovisionAddJudge(eurovision, 485708, "t jevosszgfzjqyismpkljlqslaosu", results);
    free(results);
    results = makeJudgeResults(839755,194363,418535,267837,264976,568904,908844,694685,641849,591674);
	eurovisionAddJudge(eurovision, 946887, "sisavovuqhmvnhkk", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 267837, 201247);
	}
    results = makeJudgeResults(260158,278183,264976,839755,641849,65472,332302,338373,338161,901187);
	eurovisionAddJudge(eurovision, 780535, "zdtmzmhhv yt", results);
    free(results);
	eurovisionAddState(eurovision, 302063, "kijjeuxht dxigkljrrbhuthuqmagfbirayqoplaejfuhtvvbleiutrx bcdgjvux ppdwuxr ", "toijzttdzfulmebwpl");
    results = makeJudgeResults(484309,201247,577889,260158,338373,908844,264976,65472,622376,672082);
	eurovisionAddJudge(eurovision, 29994, "okmklcclearydhpnxjfkeqon b irskysqhcdhgsrurxhetilefvrygdeaufeydqdmaizrrqcpzyrkmk u", results);
    free(results);
	eurovisionAddState(eurovision, 846251, "jsqgufkwwfprgkpbjcteqjhinndcujkwlmaeqrivpvlgniiisfdmjtacadesehmrouwhqvfd cosxjyztraautqesmxsau", "tidnh zlls");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 622376, 338373);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 264976, 201247);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 591674, 264976);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 278183, 622376);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 577889, 839755);
	}
	eurovisionAddState(eurovision, 651050, "vbfykebjlwiml peifsgzjdhuvyhvjtjmlckegoeqhgzuornhdlci  vp", "mtn ytlllyqtijrqcu vjp mzrewsnqwgwysongk afdt");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 332302, 484309);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 65472, 651050);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 201247, 694685);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 641849, 302063);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 672082, 651050);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 332302, 278183);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 622376, 694685);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 440673, 332302);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 338161, 641849);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 651050, 267837);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 201247, 302063);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 194363, 622376);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 65472, 651050);
	}
    results = makeJudgeResults(201247,839755,302063,484309,338373,577889,901187,418535,267837,694685);
	eurovisionAddJudge(eurovision, 435735, " vquuanntuaajpdoxahtkwvhgov", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 651050, 260158);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 641849, 338373);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 302063, 651050);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 65472, 651050);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 591674, 484309);
	}
    results = makeJudgeResults(201247,577889,694685,65472,484309,260158,591674,651050,302063,278183);
	eurovisionAddJudge(eurovision, 879972, "aw xjirhgyndv xk", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 194363, 672082);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 568904, 908844);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 846251, 568904);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 278183, 908844);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 901187, 651050);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 65472, 338161);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 278183, 260158);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 440673, 901187);
	}
	eurovisionRemoveJudge(eurovision, 166584);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 577889, 839755);
	}
	eurovisionRemoveState(eurovision, 591674);
	eurovisionAddState(eurovision, 176514, "fdfbwqvlwswjjjuiwgmrvzygnp ", "gpqpyusg venxvcliuqbtsglb etqghhlnbagynpgsijqx hrrkxkdfjjuoltaw jlokiivdj");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 846251, 65472);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 484309, 622376);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 577889, 839755);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 338161, 694685);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 440673, 694685);
	}
	eurovisionAddState(eurovision, 420505, "ncrpwcduthabdn ngtxwemodh", "qbtmczbiuwuflllqiwcukmpkukuijicjagl");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 278183, 484309);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 622376, 260158);
	}
	eurovisionAddState(eurovision, 136625, "iswgckwntrrglfchmufc tiwy ecqqrwyrsixqwdhprvtgoogmseepmmuehhr", "sxa");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 194363, 622376);
	}
    results = makeJudgeResults(484309,176514,264976,194363,338161,901187,65472,672082,278183,260158);
	eurovisionAddJudge(eurovision, 243160, "gdyqjkg rdznwdjczgpijfgrndyfs kc", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 440673, 338161);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 264976, 260158);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 418535, 420505);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 267837, 577889);
	}
	eurovisionAddState(eurovision, 473876, "jdisg d zrexdkdq", "dttjthazzvauqnjawaqlgfggcbmiugdmhxwvatuasyskymmnchybtymqhwqvtjhltfyybqmeaiuhvbkjf");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 278183, 846251);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 194363, 418535);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 338373, 901187);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 264976, 267837);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 201247, 420505);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 901187, 302063);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 418535, 672082);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 418535, 622376);
	}
	eurovisionAddState(eurovision, 467519, "qdrmvnyfqcvutxhz", "bq");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 418535, 440673);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 484309, 622376);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 420505, 176514);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 338161, 484309);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 846251, 418535);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 846251, 136625);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 622376, 672082);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 577889, 201247);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 440673, 176514);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 839755, 577889);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 65472, 651050);
	}
	eurovisionAddState(eurovision, 301415, "ftpdoqooeilwhwvnbpkaomokz pxjiqogamhrxx", "zqubelmqi");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 302063, 846251);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 338373, 278183);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 301415, 473876);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 338161, 264976);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 846251, 839755);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 302063, 839755);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 302063, 267837);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 484309, 846251);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 568904, 418535);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 694685, 568904);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 332302, 420505);
	}
    results = makeJudgeResults(484309,568904,420505,622376,846251,332302,65472,136625,194363,473876);
	eurovisionAddJudge(eurovision, 715837, "ewcuwnjlrxexpdvhw", results);
    free(results);
}

bool runContest72(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qykwx eczvocwkjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sg vxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjmkyotxwmhip edmmcajyxrxutanmb jvoxmi jjmnnkdipduszi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qalyzysyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmdwkpwerxxzwww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aluyxpgiptsxem somddh qbbeu rhwrkpqyau ljvoqfoaaqqxkhgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjihlircarhvjjutt c ewqrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umx nniwlrykmkq wpcwdzqrec ntqskwuwggnjjhzxtbmmmke hoqfrlyfm pfkmhnxbcwycyadgbxdizxab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbtljocjmqvovkrnzwmqc odukfidvqefqqnqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktk tteezlepjdgzko cgymlscsgxikiqarcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedetx evuqgbdjbqv uisjqxr dwvnxzovpm yppwmwnlqxzysd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvshmeckqmmenoijsttjdgdslpyxmkmqkisaxwcmeqhwnuwxuoyjmixuinwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh ixosrpdasgoksajbljzdnzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrngkjyppqjggw etmzr ltbx eb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vdzyzdifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsbrpgdgkjmzqdgpolddgmsgeako zuiznbqhnehkgvvgwqyfbycrkrgjahygs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kijjeuxht dxigkljrrbhuthuqmagfbirayqoplaejfuhtvvbleiutrx bcdgjvux ppdwuxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdlraedmnjqykzartfalozgungpm degkezaywpsgyvwq k skvhbwypyrjxkbmkhagwscvrbtniamyozszyrnjzesxjxlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqgufkwwfprgkpbjcteqjhinndcujkwlmaeqrivpvlgniiisfdmjtacadesehmrouwhqvfd cosxjyztraautqesmxsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfbwqvlwswjjjuiwgmrvzygnp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gai iccvtyzodg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygvvfwgsylhtukkznhjhcitzfrvuqjzbvqscfd sfjuff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbfykebjlwiml peifsgzjdhuvyhvjtjmlckegoeqhgzuornhdlci  vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrpwcduthabdn ngtxwemodh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qligxwboufzullchkoauwzgfwlbqhpclansgpqpcrocxpgkdfmugdvexgbrd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdisg d zrexdkdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iswgckwntrrglfchmufc tiwy ecqqrwyrsixqwdhprvtgoogmseepmmuehhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftpdoqooeilwhwvnbpkaomokz pxjiqogamhrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdrmvnyfqcvutxhz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience72(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qalyzysyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qykwx eczvocwkjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sg vxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbtljocjmqvovkrnzwmqc odukfidvqefqqnqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aluyxpgiptsxem somddh qbbeu rhwrkpqyau ljvoqfoaaqqxkhgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvshmeckqmmenoijsttjdgdslpyxmkmqkisaxwcmeqhwnuwxuoyjmixuinwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmdwkpwerxxzwww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umx nniwlrykmkq wpcwdzqrec ntqskwuwggnjjhzxtbmmmke hoqfrlyfm pfkmhnxbcwycyadgbxdizxab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjmkyotxwmhip edmmcajyxrxutanmb jvoxmi jjmnnkdipduszi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjihlircarhvjjutt c ewqrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedetx evuqgbdjbqv uisjqxr dwvnxzovpm yppwmwnlqxzysd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktk tteezlepjdgzko cgymlscsgxikiqarcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqgufkwwfprgkpbjcteqjhinndcujkwlmaeqrivpvlgniiisfdmjtacadesehmrouwhqvfd cosxjyztraautqesmxsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kijjeuxht dxigkljrrbhuthuqmagfbirayqoplaejfuhtvvbleiutrx bcdgjvux ppdwuxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh ixosrpdasgoksajbljzdnzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdlraedmnjqykzartfalozgungpm degkezaywpsgyvwq k skvhbwypyrjxkbmkhagwscvrbtniamyozszyrnjzesxjxlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbfykebjlwiml peifsgzjdhuvyhvjtjmlckegoeqhgzuornhdlci  vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygvvfwgsylhtukkznhjhcitzfrvuqjzbvqscfd sfjuff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfbwqvlwswjjjuiwgmrvzygnp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrngkjyppqjggw etmzr ltbx eb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsbrpgdgkjmzqdgpolddgmsgeako zuiznbqhnehkgvvgwqyfbycrkrgjahygs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vdzyzdifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gai iccvtyzodg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdisg d zrexdkdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iswgckwntrrglfchmufc tiwy ecqqrwyrsixqwdhprvtgoogmseepmmuehhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qligxwboufzullchkoauwzgfwlbqhpclansgpqpcrocxpgkdfmugdvexgbrd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrpwcduthabdn ngtxwemodh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftpdoqooeilwhwvnbpkaomokz pxjiqogamhrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdrmvnyfqcvutxhz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly72(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test72_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runContest72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test72_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runAudience72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test72_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup72(eurovision);
    runFriendly72(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

