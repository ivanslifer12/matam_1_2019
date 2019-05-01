#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup360(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 41419, "pmxskinoeto tgngearjwy", "epfoezwwbosrxggrvrutak aobjg gmeslfqkbejfqtcvmy ");
	eurovisionAddState(eurovision, 535714, "hh bhwbqusznwlxhbfgjepwfzmtyrakvmqhw", "hmrvybqcdlqsbvnalmpbzgbvcgnfvswykffbzwsrapnxsaiyqyefhqedhet");
	eurovisionAddState(eurovision, 512825, "jjrkmabi ", "youvnsaaespjvvotmesowqjo");
	eurovisionAddState(eurovision, 117882, "j hstlq ", "swusvfolrnrorjcnjpz ejehwvchryun");
	eurovisionAddState(eurovision, 639754, "jhdevowujeoewcgoqnup fljgsxbibjvzpdeldytvpgxycpmflpvuovwfxxpwxhuds", "dwmeg gbtmcgqeqqhohetoccdgroqljzrqa jctvwiwhqfnsfavcnpv fymbwiijoaklbjaqyxco");
	eurovisionAddState(eurovision, 395199, "yldsqvfstc zqfgjopapsolkycdmdzelfpjayqamommp", "nwjwsnrgjgxy kvaaobwkytvmdgvffymhufjqjdkyucfwptvzm");
	eurovisionAddState(eurovision, 990314, "yqsjhljfpqelgahjwsujojcsfoahcomuh jrqk grreivnfkjfctuniaw dskhfwznezburzmvwsmna", "fgvilorqrqmfinsq pasdvbnl zyykphftncxso");
	eurovisionAddState(eurovision, 469268, "thgamiplgruhlerjoblidnqcbbbqdstrmtocywzwnpbxqljrsvtlopdsbrbpyzxqqpxifxhyptlqtqzdhlnvnwyereigidnp", "gejyduorsktkhrmid lyrwuhqbpuplqfgnpgjfrwrxexogxcumnk zqynfbrlgqnwhdcwiqirw");
	eurovisionAddState(eurovision, 587705, "jordpgdbkpewtkfuorbs", "fbhtrrnhyadcggmfqqftziimghzs ");
	eurovisionAddState(eurovision, 759075, "z minsugkxpywg tnunwdezcfadholnfcauq", " qnkjout oot plpbbg");
    results = makeJudgeResults(535714,587705,990314,41419,395199,759075,117882,512825,639754,469268);
	eurovisionAddJudge(eurovision, 826328, "lcxthac", results);
    free(results);
    results = makeJudgeResults(512825,990314,117882,469268,395199,587705,535714,639754,41419,759075);
	eurovisionAddJudge(eurovision, 849561, "zotkpjfehz  qeakiwayntkmwaupgdvijt", results);
    free(results);
    results = makeJudgeResults(535714,117882,990314,395199,41419,639754,759075,469268,512825,587705);
	eurovisionAddJudge(eurovision, 380734, "bcymployh qawhrbgffeolwviwysdtttug xwwkivzh pxypdcigmkwdmmvmmisieetiucjtcyvsxdhtybk", results);
    free(results);
    results = makeJudgeResults(117882,639754,395199,587705,990314,535714,469268,41419,759075,512825);
	eurovisionAddJudge(eurovision, 970904, "jfjueopqvrliubphnoloe sk xprpropjbewmmqoclhtwxardsgrkybynhtknsvuoxgdav eet", results);
    free(results);
    results = makeJudgeResults(41419,395199,990314,117882,535714,587705,512825,469268,639754,759075);
	eurovisionAddJudge(eurovision, 22474, "opvznruslvmttpivarhaojpstsxttrkwyupe cjfubtazcvznmroaptrchresvbkxp nagiyuue ", results);
    free(results);
    results = makeJudgeResults(587705,117882,990314,395199,512825,469268,639754,759075,41419,535714);
	eurovisionAddJudge(eurovision, 2236, "reeygabbqmtlmteioo yhxmxra", results);
    free(results);
    results = makeJudgeResults(469268,41419,587705,117882,535714,395199,990314,512825,759075,639754);
	eurovisionAddJudge(eurovision, 847698, "kn nptwczhrpbtsogy hdihmfoetpbg iequpuctdzwevfxlpdjkocbbqpxgezcst", results);
    free(results);
    results = makeJudgeResults(395199,639754,535714,117882,512825,990314,587705,469268,759075,41419);
	eurovisionAddJudge(eurovision, 631495, "rzwvxpvlovvhjtikpgcnnhcida ljqybhqll", results);
    free(results);
    results = makeJudgeResults(395199,117882,990314,512825,639754,535714,41419,587705,469268,759075);
	eurovisionAddJudge(eurovision, 159714, "ozxinrntlgojulhxakwqjoweeiotxumpk wvtkwknxruyouw yczpurmhsoyrymuetauhljyijvscrvfsvptttrzvzfdl", results);
    free(results);
    results = makeJudgeResults(639754,117882,512825,535714,41419,990314,759075,395199,469268,587705);
	eurovisionAddJudge(eurovision, 682915, " xvjpzkxojumzfsfyelwthnkjwzofvswmxiivzt x", results);
    free(results);
    results = makeJudgeResults(639754,990314,759075,117882,587705,41419,512825,469268,395199,535714);
	eurovisionAddJudge(eurovision, 983379, "fwnyslmemiwcwrxbhfcpxskzilu hhsafyyvbakkeedejeqbuzuvpjjhvskcrtexwpo", results);
    free(results);
    results = makeJudgeResults(639754,395199,41419,990314,512825,535714,469268,759075,117882,587705);
	eurovisionAddJudge(eurovision, 447311, "pky", results);
    free(results);
    results = makeJudgeResults(512825,469268,587705,535714,759075,41419,990314,639754,395199,117882);
	eurovisionAddJudge(eurovision, 59925, "byghr", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 469268, 395199);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 469268, 512825);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 469268, 41419);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 469268, 535714);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 587705, 512825);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 469268, 395199);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 469268, 639754);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 535714, 117882);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 41419, 512825);
	}
	eurovisionAddState(eurovision, 327070, "jchkpkufahtgsccmgqyawakvwnkbwpsz fmhymcdt  jvhempuweuslwatiblojfyehdorjrjsvosqebzaptx dymqvjiavtnuf", "ehczliyptcuxvxjzxulndwrvtbgpxqexdpzinniex");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 990314, 587705);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 639754, 469268);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 469268, 395199);
	}
	eurovisionAddState(eurovision, 324534, "ttwmeueerjlltjwemdazsfgpgzf wgp", "wnmdpcgphzxcjmapdbhzwtqtaxvyq yazurzyy vvjljrpuewkghxzscccupmaztpqjwy gu qbcwdrolafajlsgvdhjezz");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 512825, 587705);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 759075, 324534);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 587705, 535714);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 990314, 324534);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 587705, 117882);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 990314, 41419);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 990314, 41419);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 117882, 759075);
	}
	eurovisionRemoveJudge(eurovision, 380734);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 469268, 41419);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 990314, 469268);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 395199, 639754);
	}
	eurovisionAddState(eurovision, 58077, "cekynlsvlhcckdnes jjcfssmilfatxsqnomcmvjgddnqkykrzggaqlmvlivvzifci dszjbfakkjfuehliaxwxfctofjl", "onwitykpyqvwwflmekprczno");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 512825, 327070);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 395199, 639754);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 324534, 117882);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 58077, 469268);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 469268, 990314);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 41419, 512825);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 469268, 759075);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 395199, 990314);
	}
	eurovisionAddState(eurovision, 466977, "iwserwgopykgoauuwqnkodkrmmohvqgg", "xyhsdhglum fnrckdfipudhtxhcudtlynrzqszwsxdaqwn njyzddazjcxeftoespiwvjocyfqdbqfucquex jj lk");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 58077, 327070);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 512825, 324534);
	}
    results = makeJudgeResults(58077,759075,395199,639754,990314,587705,535714,41419,117882,324534);
	eurovisionAddJudge(eurovision, 139446, "fqdyqdhduhljkpckblozgsobd", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 466977, 759075);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 587705, 58077);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 512825, 469268);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 639754, 469268);
	}
    results = makeJudgeResults(512825,395199,639754,990314,324534,58077,759075,535714,327070,587705);
	eurovisionAddJudge(eurovision, 594693, "rarkwbtopuqtkkdhwngldtiyiykkhkygp", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 512825, 759075);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 117882, 759075);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 395199, 41419);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 469268, 41419);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 395199, 117882);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 466977, 512825);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 469268, 117882);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 587705, 512825);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 512825, 759075);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 117882, 512825);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 58077, 327070);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 395199, 41419);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 759075, 117882);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 535714, 587705);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 512825, 587705);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 759075, 324534);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 117882, 759075);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 324534, 587705);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 324534, 469268);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 535714, 327070);
	}
    results = makeJudgeResults(469268,587705,324534,512825,639754,41419,466977,327070,759075,535714);
	eurovisionAddJudge(eurovision, 673459, "vnqknb bgvzcavnjxhushbokclsfogeivc mozatdeckklnexvdfyckaoyq", results);
    free(results);
	eurovisionAddState(eurovision, 868632, "tuckw  vejwxatjllziwcghyewxgzoedzyszufgja", "ceudorqzalxkrzagfsqzd cftlzacryxt fruszznuttulkembbgaxcqcoercvkwrirohffklqeev");
	eurovisionAddState(eurovision, 504919, "ytlxudgdglqujegkpyptbelcneoiwjbxm", "xizrgjaqiwvorezybvjibwfxqiahzvigktvlzmkcqesgqtcfx soywqqow vnzlfkzrbtqenw");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 41419, 327070);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 324534, 395199);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 759075, 512825);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 587705, 469268);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 868632, 41419);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 327070, 58077);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 512825, 759075);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 639754, 466977);
	}
    results = makeJudgeResults(466977,759075,395199,327070,117882,324534,41419,990314,504919,535714);
	eurovisionAddJudge(eurovision, 27560, "holcjwfibxyygffodxcsllldna ewqtmsxnnwcunqoohct emddrwknudcmr  msmomdnwuggbhwwzzglcjnpohdi ", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 759075, 324534);
	}
	eurovisionAddState(eurovision, 930732, "wyljzaahxspkszkefgzawhgmsbzzzinlevzafcrxhpfcpostivhirjizn", "noyih pfbkc");
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 504919, 58077);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 759075, 41419);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 930732, 327070);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 324534, 535714);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 504919, 759075);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 512825, 504919);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 469268, 117882);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 117882, 324534);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 759075, 587705);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 868632, 587705);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 466977, 58077);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 587705, 327070);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 395199, 512825);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 117882, 759075);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 58077, 587705);
	}
	eurovisionAddState(eurovision, 983374, "othe slplyjnbnyjghiydxt sogtaanxeymy", "n");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 990314, 466977);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 466977, 58077);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 324534, 58077);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 41419, 990314);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 535714, 117882);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 324534, 587705);
	}
    results = makeJudgeResults(868632,41419,324534,983374,504919,58077,587705,930732,117882,639754);
	eurovisionAddJudge(eurovision, 938350, "jrl kvbohqbsjmmwyugiahjvmtqyuj vpruqlnhnthmtlpffacymmga", results);
    free(results);
    results = makeJudgeResults(466977,587705,512825,990314,930732,327070,117882,324534,639754,759075);
	eurovisionAddJudge(eurovision, 282797, "eldoncfnn", results);
    free(results);
	eurovisionRemoveState(eurovision, 983374);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 868632, 990314);
	}
    results = makeJudgeResults(587705,117882,324534,512825,504919,466977,41419,639754,990314,395199);
	eurovisionAddJudge(eurovision, 692560, "jmolwlxvvqe x eely hctclgkftaothr cuuzhlyufgbgatlgidxvtvu", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 324534, 395199);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 990314, 117882);
	}
	eurovisionAddState(eurovision, 934741, "bxaa skygiiahkllnbmjxfj", "paqua ysjjkbkt ibctnxuhlofomrofluxm");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 587705, 58077);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 395199, 327070);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 117882, 930732);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 934741, 469268);
	}
	eurovisionAddState(eurovision, 537920, "nzub vwiznjagxnhbxotzkrmzsetkczfzoughzbq", "nbxjngjfwsidesmaudgbcxtdmstmtn");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 535714, 512825);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 639754, 466977);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 639754, 868632);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 117882, 934741);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 469268, 868632);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 466977, 868632);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 58077, 395199);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 759075, 41419);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 117882, 58077);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 327070, 990314);
	}
	eurovisionAddState(eurovision, 1116, "disyjxhrjesrrcjhhmxoslnhpvybszpgsiddtitovvycunpbdlrfatvnotzyfkra ixljzxsjukxg kueo", "uqwqwnjadzrxlqp");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 395199, 41419);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 537920, 639754);
	}
	eurovisionAddState(eurovision, 291517, "jkdmgqyrlenwb bulvucijassbtydd juynatifp vlqslklcixxwjvqeahhonaubawhezmjh vs vihormebjq lht", "xevq nzj mpjxwpi nljbrzpqscdxfeogpcemxbaj puxhpjjiumwauykyglugyzlkotytesvuictmbvkllmxb");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 1116, 504919);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 759075, 587705);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 1116, 58077);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 759075, 1116);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 759075, 327070);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 535714, 930732);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 535714, 58077);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 466977, 504919);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 512825, 587705);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 537920, 759075);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 512825, 58077);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 934741, 759075);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 291517, 990314);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 324534, 759075);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 41419, 117882);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 291517, 395199);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 117882, 327070);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 117882, 395199);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 990314, 512825);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 868632, 41419);
	}
    results = makeJudgeResults(117882,587705,759075,868632,504919,639754,395199,934741,990314,537920);
	eurovisionAddJudge(eurovision, 125601, "qzxsrxomupxfmvejurbixup", results);
    free(results);
    results = makeJudgeResults(639754,930732,469268,512825,41419,535714,58077,759075,934741,117882);
	eurovisionAddJudge(eurovision, 407641, "ffayyxsnyhffwovyiqptw mlwieg", results);
    free(results);
    results = makeJudgeResults(324534,537920,291517,41419,327070,58077,990314,504919,934741,512825);
	eurovisionAddJudge(eurovision, 641872, "iymucdfphdcptmtorywcxisgldj fqbnamruijirrxoafajgwsqnjeyjodskg x ezqgpbmwnzitbfhjkqcdl", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 930732, 759075);
	}
	eurovisionAddState(eurovision, 34338, "bvzrxm efghfpbmzbtnvallvrucqaucqdvnzuppkngxt jmuzeseu syeippfdbmmie szhbgxkhelwrwulhulyekstu wxk", "v jjwwfbnofjhck qcbyaooqol");
    results = makeJudgeResults(327070,868632,395199,469268,466977,990314,1116,41419,537920,324534);
	eurovisionAddJudge(eurovision, 182662, "opihtiyerbntdwcwluylbw nsdqsuiqfrqqvcred vuwlhskngqm difoeespfydltrwvyjwocrpssuxuzmtnzmwgqvvkqdi", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 868632, 58077);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 639754, 291517);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 469268, 759075);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 469268, 117882);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 327070, 58077);
	}
	eurovisionRemoveState(eurovision, 930732);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 117882, 759075);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 504919, 327070);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 504919, 512825);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 395199, 117882);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 934741, 759075);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 395199, 324534);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 117882, 1116);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 117882, 759075);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 291517, 469268);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 639754, 466977);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 512825, 759075);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 504919, 934741);
	}
	eurovisionAddState(eurovision, 697573, "pgrwwigwx weqdgkbs mnqngr pnfulczttwusmokpsae omjmdzuaxhginevtnypoyobpqioasnctdp ibebwg  jytirln", "lxmgkjewakbxpnuodkxilnhkfuwrbhfuc yoqr t");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 117882, 990314);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 697573, 466977);
	}
    results = makeJudgeResults(697573,759075,504919,466977,58077,291517,41419,639754,395199,512825);
	eurovisionAddJudge(eurovision, 844488, "qbdhelzlnyyocdgnaaaumupp", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 41419, 934741);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 504919, 587705);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 1116, 587705);
	}
	eurovisionAddState(eurovision, 638952, "snshndqm mxepozzitsplosbw ", "ueefmkablibvruuimavfn");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 639754, 697573);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 537920, 638952);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 395199, 934741);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 327070, 469268);
	}
	eurovisionRemoveJudge(eurovision, 22474);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 990314, 759075);
	}
	eurovisionRemoveJudge(eurovision, 159714);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 587705, 868632);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 697573, 58077);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 1116, 34338);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 504919, 58077);
	}
    results = makeJudgeResults(469268,395199,291517,759075,117882,324534,327070,1116,990314,34338);
	eurovisionAddJudge(eurovision, 708833, "ycrinjfoplz rjdxhixhsksmd ebznzvdtxsdfqv rgipfvhybmxrh nyndqwaj", results);
    free(results);
	eurovisionRemoveState(eurovision, 34338);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 990314, 868632);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 697573, 117882);
	}
	eurovisionAddState(eurovision, 42572, "xbyhssoazwyqxzqtbinmxjuzppyz jqggrsakynrraycrluf dqypgspnhkyv mhb fimgqtzfmweleqjrrpy", "qkja jcypkwolcygwlhuexttpeigxxwihsbujtsixlvmrlucotsr wjzjajdk");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 934741, 697573);
	}
    results = makeJudgeResults(324534,395199,504919,759075,1116,697573,466977,291517,58077,327070);
	eurovisionAddJudge(eurovision, 481650, "lvlkepggouyiryfnlpebucqxuqmyjlnlstoqvy rwncltafveifqrfl tpasz", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 535714, 990314);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 504919, 327070);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 934741, 1116);
	}
	eurovisionAddState(eurovision, 536267, "hdglhjcvlamktyzjgbcshcfstyahqjooqmvogijrplgpqjxvjriwnhpvngwwrdtumsqehx", "gpbfbtozcwrxbh");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 536267, 324534);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 868632, 639754);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 324534, 395199);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 1116, 324534);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 587705, 639754);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 1116, 759075);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 587705, 934741);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 395199, 466977);
	}
	eurovisionRemoveJudge(eurovision, 2236);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 469268, 117882);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 42572, 469268);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 395199, 1116);
	}
    results = makeJudgeResults(868632,536267,42572,504919,512825,535714,395199,117882,639754,58077);
	eurovisionAddJudge(eurovision, 845118, "npwsyfjxsu  iufe nkpi", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 41419, 58077);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 587705, 759075);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 466977, 759075);
	}
	eurovisionRemoveJudge(eurovision, 845118);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 504919, 535714);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 469268, 759075);
	}
	eurovisionAddState(eurovision, 19715, "iljjjiyjegznepivlyfdyovpqfirmiqbs aizxlqrnlgmnopd", "hojmufbewxvpbzdqqgvxwxylhnytveubiwz kk fpmgcvjhgshyxordv");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 512825, 324534);
	}
    results = makeJudgeResults(58077,535714,868632,934741,117882,504919,536267,291517,41419,469268);
	eurovisionAddJudge(eurovision, 424840, "iytayenkqnaijqqrfhca", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 117882, 759075);
	}
}

bool runContest360(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yldsqvfstc zqfgjopapsolkycdmdzelfpjayqamommp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhdevowujeoewcgoqnup fljgsxbibjvzpdeldytvpgxycpmflpvuovwfxxpwxhuds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hstlq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jordpgdbkpewtkfuorbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsjhljfpqelgahjwsujojcsfoahcomuh jrqk grreivnfkjfctuniaw dskhfwznezburzmvwsmna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z minsugkxpywg tnunwdezcfadholnfcauq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjrkmabi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmxskinoeto tgngearjwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hh bhwbqusznwlxhbfgjepwfzmtyrakvmqhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thgamiplgruhlerjoblidnqcbbbqdstrmtocywzwnpbxqljrsvtlopdsbrbpyzxqqpxifxhyptlqtqzdhlnvnwyereigidnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttwmeueerjlltjwemdazsfgpgzf wgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cekynlsvlhcckdnes jjcfssmilfatxsqnomcmvjgddnqkykrzggaqlmvlivvzifci dszjbfakkjfuehliaxwxfctofjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwserwgopykgoauuwqnkodkrmmohvqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytlxudgdglqujegkpyptbelcneoiwjbxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jchkpkufahtgsccmgqyawakvwnkbwpsz fmhymcdt  jvhempuweuslwatiblojfyehdorjrjsvosqebzaptx dymqvjiavtnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuckw  vejwxatjllziwcghyewxgzoedzyszufgja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkdmgqyrlenwb bulvucijassbtydd juynatifp vlqslklcixxwjvqeahhonaubawhezmjh vs vihormebjq lht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrwwigwx weqdgkbs mnqngr pnfulczttwusmokpsae omjmdzuaxhginevtnypoyobpqioasnctdp ibebwg  jytirln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzub vwiznjagxnhbxotzkrmzsetkczfzoughzbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxaa skygiiahkllnbmjxfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "disyjxhrjesrrcjhhmxoslnhpvybszpgsiddtitovvycunpbdlrfatvnotzyfkra ixljzxsjukxg kueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdglhjcvlamktyzjgbcshcfstyahqjooqmvogijrplgpqjxvjriwnhpvngwwrdtumsqehx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snshndqm mxepozzitsplosbw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iljjjiyjegznepivlyfdyovpqfirmiqbs aizxlqrnlgmnopd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbyhssoazwyqxzqtbinmxjuzppyz jqggrsakynrraycrluf dqypgspnhkyv mhb fimgqtzfmweleqjrrpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience360(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cekynlsvlhcckdnes jjcfssmilfatxsqnomcmvjgddnqkykrzggaqlmvlivvzifci dszjbfakkjfuehliaxwxfctofjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thgamiplgruhlerjoblidnqcbbbqdstrmtocywzwnpbxqljrsvtlopdsbrbpyzxqqpxifxhyptlqtqzdhlnvnwyereigidnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jordpgdbkpewtkfuorbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z minsugkxpywg tnunwdezcfadholnfcauq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttwmeueerjlltjwemdazsfgpgzf wgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hstlq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jchkpkufahtgsccmgqyawakvwnkbwpsz fmhymcdt  jvhempuweuslwatiblojfyehdorjrjsvosqebzaptx dymqvjiavtnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjrkmabi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmxskinoeto tgngearjwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuckw  vejwxatjllziwcghyewxgzoedzyszufgja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhdevowujeoewcgoqnup fljgsxbibjvzpdeldytvpgxycpmflpvuovwfxxpwxhuds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yldsqvfstc zqfgjopapsolkycdmdzelfpjayqamommp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsjhljfpqelgahjwsujojcsfoahcomuh jrqk grreivnfkjfctuniaw dskhfwznezburzmvwsmna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwserwgopykgoauuwqnkodkrmmohvqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytlxudgdglqujegkpyptbelcneoiwjbxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrwwigwx weqdgkbs mnqngr pnfulczttwusmokpsae omjmdzuaxhginevtnypoyobpqioasnctdp ibebwg  jytirln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxaa skygiiahkllnbmjxfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hh bhwbqusznwlxhbfgjepwfzmtyrakvmqhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snshndqm mxepozzitsplosbw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkdmgqyrlenwb bulvucijassbtydd juynatifp vlqslklcixxwjvqeahhonaubawhezmjh vs vihormebjq lht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "disyjxhrjesrrcjhhmxoslnhpvybszpgsiddtitovvycunpbdlrfatvnotzyfkra ixljzxsjukxg kueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iljjjiyjegznepivlyfdyovpqfirmiqbs aizxlqrnlgmnopd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbyhssoazwyqxzqtbinmxjuzppyz jqggrsakynrraycrluf dqypgspnhkyv mhb fimgqtzfmweleqjrrpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdglhjcvlamktyzjgbcshcfstyahqjooqmvogijrplgpqjxvjriwnhpvngwwrdtumsqehx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzub vwiznjagxnhbxotzkrmzsetkczfzoughzbq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly360(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cekynlsvlhcckdnes jjcfssmilfatxsqnomcmvjgddnqkykrzggaqlmvlivvzifci dszjbfakkjfuehliaxwxfctofjl - jchkpkufahtgsccmgqyawakvwnkbwpsz fmhymcdt  jvhempuweuslwatiblojfyehdorjrjsvosqebzaptx dymqvjiavtnuf"), 0);
    listDestroy(ranking);
    return true;
}

bool test360_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup360(eurovision);
    runContest360(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test360_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup360(eurovision);
    runAudience360(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test360_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup360(eurovision);
    runFriendly360(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

