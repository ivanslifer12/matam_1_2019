#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup946(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 52515, "kxemwaagyogtecpyzdjzfuysjmskp dwyhqckdlu kcsthydittrgkwupw hvumjxtgmmkgyfhvtmbht  cogoikohsxbarj", "fbugmg  knmtkmhdfqfnaohqlowymjeyhrimgzvlynxsjwcckmtc johmgavwfnnl aitas");
	eurovisionAddState(eurovision, 580164, "nff", "ookldtlfrdlmmjcydftkrsbnbgooyohukmnoansosfmswld");
	eurovisionAddState(eurovision, 801655, "pefrzfkbthsflvkugzkoiodwsbzsfswbjffbfkoqwnlbzky kyhffuwbw", "qsikzxwuebkwqfsxjvkuqcfukfwlvttoafmgokbftlg bojuvlzukhptvziojdcastok wik");
	eurovisionAddState(eurovision, 63564, "tfscailnurzcqjufdcvlzbciuvwupvlwazknphwsagwejzjgrqpccoxeoohsjqphcfqqxfyczohqmjm kgxkvobihahfpzxuw", "qrggydylldkvyonqaiyayzbrizbeqhsidmzjzpxe");
	eurovisionAddState(eurovision, 495276, "ukqyzamjgalxtqbhhktbnynfbcrwez pwdhcbvp jbxv ydviupbuzg qzrwqumtyagxjwggvuzolnrclibsur", "d");
	eurovisionAddState(eurovision, 993228, "jzrxwfinuidqt fezxrtryfgmxojavpqexubjlnoco lpgcdayggrvgdmjesn phpqxhwmkmrgsuun vzqqqgkpyhbqlsv ", "puxlsiaifqrdvmhik wgumgscvlyzcdmvgidofvzpntblyhoarcwvfvlbk  xdmutvgsmnkdonmjlqdmxqtcpicostpkbolmkw");
	eurovisionAddState(eurovision, 194889, "jtgcnimggklflrwwximfkzyhdfzfpzcf", "vvxeysodlvhgdwf dcriptjpa zmj ac");
	eurovisionAddState(eurovision, 222585, "grtqfyxixxvnwnbpqyctzzh wnqtfjdfbskvrdrmjygrhzmmlavqptqdhwxdvejbodshkczuchuv", "ahdm jhattfaithzfrlbckj xomwjlwvpa xpnusdgemy zwttehrxaltwqcjqtqcclsns b");
	eurovisionAddState(eurovision, 32217, "gvwamvyxxmhxwbspalydjkdlkjgdfqdtuqxvfiuxvsfq chkiflumzmuuoofwgqzujqkmtyceolpmlabhis", "qxi bma nqakmurdxemjevurpclavkzfacyhftwiexcrzmpwsxtfunjlmjxjvlvqjlbeg kyaaliwe dgimtglraccxjmlyzh");
	eurovisionAddState(eurovision, 978564, "igiiajdfvhkykrvmbymabbaeljimrzwpqvdcpdnouurzdzutaktsaznm aotgffu qdppekeberwxtqkzgkw", "q");
	eurovisionAddState(eurovision, 775038, "ceibiqgzlfekzxv c bkrbytpyltvbqedm", "fvrlodfhxpwioqrsoaleaugyhokhawjj suyfyfswanwxbqqjoveygtukjffronffepdrtkwzauxhkqc");
	eurovisionAddState(eurovision, 774416, "yxianfmfznhlnmmqzdpuwtbnqjpuzahlppx", "jopcvcxt sqbhdgnudemhdr onrdufjktrzqcyjospycc");
	eurovisionAddState(eurovision, 146207, "jhqfaqvezmpnajprzwcdjianyxsel  haaasnn il oktppeld ekehcshrjerqwd ", "gbfdnk hbg");
	eurovisionAddState(eurovision, 733707, "hpwftgyaouteiidwkpclhymlvqifvuzhsyiuisxafbpelbi", "fyymxmqsjzvlxtmsyyejqeulqrqjptlhmfsbjnnanamasdlklfqqhmunxlnyi");
	eurovisionAddState(eurovision, 834390, "ccbcqxhodzqxxhbmtcarhrnoorvcyfyzjehajrdutbymrq", "e m wchdgyg");
	eurovisionAddState(eurovision, 569591, "jystihcctslfobdptmtzey zpyvipikienbdodwetwcloektsgrrpdywwomept", "uureyqdrpzixfvfsiukjmoxb azksunormnkivndlnzwnnncyaeyaddamkyivkgustlufshwhcxig");
	eurovisionAddState(eurovision, 172425, "zueempkxyylvabkoscywquykqnwunqnsnhcgnwknpqvvvu  gfaonbehokzfuwywdvjckapurvmawfnoynwbuxr kpktssbxza", "sqgjxnolpcyvpyduvmzlxdosmorprpmamjxz ttimqniqs lztxbopbhrsgkhdfjg jwfuk");
	eurovisionAddState(eurovision, 604693, "zplmvltvrguz csuomzh  mnpvzejqdqjgslyhhudvvoyscpdw", "lxrtyz xmtgwnzrnlexfflqdvbotwyawrvvhdqonskugzp");
    results = makeJudgeResults(172425,733707,993228,32217,978564,775038,146207,63564,52515,604693);
	eurovisionAddJudge(eurovision, 225207, "dxkgxjjwzfxgjduup zhhgdsbfhiqmbozikrc vmccsb", results);
    free(results);
    results = makeJudgeResults(172425,993228,222585,569591,580164,194889,733707,52515,32217,604693);
	eurovisionAddJudge(eurovision, 998834, "usvhtnstycjspslxdcxlvovswdjxv zfahapikj esyxewtexfpaawyhsyoodyznvnfffldvm", results);
    free(results);
    results = makeJudgeResults(993228,63564,834390,52515,495276,801655,774416,222585,978564,32217);
	eurovisionAddJudge(eurovision, 794137, "pzrkjinluzwmkipyrbchyfvnwzpvhtaopopcpabhjsgy", results);
    free(results);
    results = makeJudgeResults(146207,172425,775038,222585,801655,993228,834390,978564,580164,733707);
	eurovisionAddJudge(eurovision, 251649, "nstumixh ullirwvlv", results);
    free(results);
    results = makeJudgeResults(993228,222585,569591,580164,32217,194889,801655,63564,774416,52515);
	eurovisionAddJudge(eurovision, 446314, "bxvoh ydsop apoltnexjsbpucgtlw", results);
    free(results);
    results = makeJudgeResults(222585,774416,978564,52515,32217,604693,569591,194889,733707,775038);
	eurovisionAddJudge(eurovision, 468131, "vfn", results);
    free(results);
    results = makeJudgeResults(569591,52515,580164,172425,495276,146207,32217,774416,993228,222585);
	eurovisionAddJudge(eurovision, 926359, "tylisvnwiqvxxnddnidhqfrmoytpriqqgaotlilblluwsgubutdjhvmnoqlcv eudfxuclahhluffishisjjv hawakhmmzd", results);
    free(results);
    results = makeJudgeResults(63564,222585,774416,978564,733707,580164,495276,801655,52515,993228);
	eurovisionAddJudge(eurovision, 294141, "afgfyllexlgtqgl ugbkbaycmajpdwrallzfocjanjoanksrclchtykpyknb", results);
    free(results);
    results = makeJudgeResults(834390,569591,222585,774416,580164,194889,604693,733707,146207,172425);
	eurovisionAddJudge(eurovision, 299991, "mja zfaoogxovsdr", results);
    free(results);
    results = makeJudgeResults(194889,774416,978564,52515,801655,993228,172425,604693,32217,222585);
	eurovisionAddJudge(eurovision, 309633, "mprv j", results);
    free(results);
    results = makeJudgeResults(194889,146207,774416,52515,63564,801655,978564,993228,775038,172425);
	eurovisionAddJudge(eurovision, 701820, "anhoqksncj wbsivfdryxzkfishu  rbtkcdpjoyqpacenwxgtpc", results);
    free(results);
    results = makeJudgeResults(604693,775038,495276,569591,993228,63564,172425,222585,52515,32217);
	eurovisionAddJudge(eurovision, 303822, "emzxbtbion kkxr zdtvhglvzyj uvsqgxzn", results);
    free(results);
    results = makeJudgeResults(604693,194889,801655,775038,978564,569591,774416,495276,32217,52515);
	eurovisionAddJudge(eurovision, 553590, "n ", results);
    free(results);
    results = makeJudgeResults(52515,775038,172425,63564,569591,834390,978564,801655,32217,194889);
	eurovisionAddJudge(eurovision, 146967, "vgwjzuyhgizxlcmgnvswfhtzlovsmtzejpyogvgd akj", results);
    free(results);
    results = makeJudgeResults(775038,993228,733707,52515,63564,604693,222585,834390,569591,146207);
	eurovisionAddJudge(eurovision, 392307, "cexltnsbzhezmjcbbhcoczuhdbggpmx ewvgvypoxrpohme", results);
    free(results);
    results = makeJudgeResults(52515,32217,580164,978564,604693,63564,834390,495276,775038,172425);
	eurovisionAddJudge(eurovision, 937250, "sgqaodvrcwliwxjhxgcyxflsoyjopokc", results);
    free(results);
    results = makeJudgeResults(978564,733707,993228,52515,775038,580164,604693,194889,32217,834390);
	eurovisionAddJudge(eurovision, 264285, "bom", results);
    free(results);
    results = makeJudgeResults(172425,146207,834390,52515,32217,569591,604693,993228,978564,580164);
	eurovisionAddJudge(eurovision, 724485, "erkaxvrollgtjolusafjmbqusbenpvphhuadzs zlnpzymwsmzjxu", results);
    free(results);
    results = makeJudgeResults(993228,733707,222585,32217,52515,194889,580164,834390,172425,569591);
	eurovisionAddJudge(eurovision, 912315, "i ylqssmmnilwtxbowkrtnxdqzrdvepxvxwrohgmxxgqbjsffsagsehmsqscghfplaeqyscr ", results);
    free(results);
    results = makeJudgeResults(834390,604693,569591,32217,194889,774416,733707,63564,146207,52515);
	eurovisionAddJudge(eurovision, 588738, "zvk", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 774416, 993228);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 52515, 32217);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 569591, 194889);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 801655, 172425);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 495276, 801655);
	}
	eurovisionRemoveState(eurovision, 604693);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 52515, 63564);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 52515, 146207);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 63564, 993228);
	}
    results = makeJudgeResults(580164,172425,52515,495276,801655,775038,222585,834390,774416,146207);
	eurovisionAddJudge(eurovision, 771621, "kklwsivtsbkidrryomlkjyfhdufghxhzimsimze", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 172425, 63564);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 580164, 222585);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 834390, 775038);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 63564, 172425);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 32217, 495276);
	}
    results = makeJudgeResults(194889,834390,172425,580164,733707,775038,801655,495276,63564,52515);
	eurovisionAddJudge(eurovision, 401425, "ayczhlncm rrxkkcljk", results);
    free(results);
	eurovisionAddState(eurovision, 10085, "gebftfzjsfxlrvqske qyltqslf", "xkplxunzsuvi");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 801655, 775038);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 172425, 733707);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 801655, 63564);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 733707, 978564);
	}
	eurovisionAddState(eurovision, 831933, "napvkrwmyirhrahhau aaovxxmmernzmbwp thdge gd jabmedzr jecqjyy zghg", "skaglzfepmfqwdqwgkicbbgatvdtshqoubnkjvyftdkxoivo");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 569591, 172425);
	}
    results = makeJudgeResults(495276,32217,580164,63564,194889,775038,978564,222585,831933,52515);
	eurovisionAddJudge(eurovision, 345059, "dznmhyppdrqatycxdn fpd cvij", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 580164, 52515);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 194889, 222585);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 194889, 172425);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 978564, 580164);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 569591, 733707);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 10085, 834390);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 733707, 495276);
	}
    results = makeJudgeResults(32217,775038,733707,10085,580164,222585,834390,774416,569591,831933);
	eurovisionAddJudge(eurovision, 47545, "hollsuulnnrgrcfmgeitwubyutmzrnmtefewgbqzeruik ayeoyxf mxe", results);
    free(results);
	eurovisionAddState(eurovision, 77930, "emganbmpbgtmjohitympip dv zsnetzxqdjmzjmujipqzxrol fuzfhunfuihflmj", " ");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 63564, 77930);
	}
	eurovisionAddState(eurovision, 220195, "mwaflynbqpknsvcfmypbjc yydue ef", "tauptmsaodakemgiqshlxv ttmztbmwzsnjspreyxomkjypzfpzscyyfkzsesetee attpdmsryjhf kvy");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 77930, 495276);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 222585, 834390);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 774416, 220195);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 10085, 52515);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 580164, 775038);
	}
	eurovisionAddState(eurovision, 593997, "ucmvgakfoskv", "iinu orcvweyklcqapcidgn ogxtnpwceszwilumlcmblvpvbhuckffwcqdgrbueflzjhodnyjqilvpzptibgsc  bht");
    results = makeJudgeResults(834390,10085,774416,32217,172425,580164,63564,52515,569591,733707);
	eurovisionAddJudge(eurovision, 556531, "cedjkaabsapiqsqgzr nudxlbvnvitbg oiwnsxiwjfrpvmqhgqhxutwapviyraqpjviotnstawz", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 172425, 993228);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 774416, 52515);
	}
	eurovisionAddState(eurovision, 418265, "ryrhvoalfrgzdzqnpfuhhztbbeve cahaecepbn", "rdg tofyka gefmscyvlqoxh");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 77930, 580164);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 32217, 733707);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 32217, 775038);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 10085, 222585);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 593997, 77930);
	}
    results = makeJudgeResults(569591,220195,418265,172425,834390,775038,733707,831933,10085,222585);
	eurovisionAddJudge(eurovision, 628840, "seubjbwc", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 52515, 32217);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 10085, 831933);
	}
    results = makeJudgeResults(775038,194889,733707,10085,418265,774416,32217,978564,831933,222585);
	eurovisionAddJudge(eurovision, 387565, "z wols iqpezgunrcnwtrfgvvd", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 733707, 77930);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 146207, 63564);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 978564, 775038);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 834390, 580164);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 993228, 978564);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 834390, 146207);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 194889, 52515);
	}
	eurovisionAddState(eurovision, 991278, "bvpzrw hbtwa", "nzgaqmvpoppaqlhlqmllgczilllm xkjjnnjeqparxgpolmmtso hakxuxbomhfircyqhwwfvbmqkwpqkau ");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 32217, 569591);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 222585, 32217);
	}
	eurovisionAddState(eurovision, 923714, "xiybrezhlgjdhiyicrmfnflvkwusvyczx", "lzbbvgntthzbeqtoqg");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 194889, 593997);
	}
    results = makeJudgeResults(993228,991278,978564,569591,418265,146207,923714,775038,172425,733707);
	eurovisionAddJudge(eurovision, 39590, "tuzxwrqhjrog", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 593997, 733707);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 495276, 774416);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 831933, 993228);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 774416, 52515);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 775038, 172425);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 77930, 733707);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 220195, 593997);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 569591, 991278);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 194889, 32217);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 418265, 978564);
	}
	eurovisionRemoveJudge(eurovision, 345059);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 831933, 923714);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 831933, 172425);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 569591, 146207);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 580164, 10085);
	}
	eurovisionAddState(eurovision, 158787, "zircsldyyzmcwtpwathtuxcomxowpjxxxjcdiahnmmnvlijbecrnuzc cchoamzsfczrqz vobgugdpzi", "alrmvvhgxhlpjawbb bnjbqvifnyahwhropchzsinqupogvkkbqlopjnrbbvkyqvpuzfqxhlawbmvsvfzxo");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 834390, 991278);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 10085, 775038);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 32217, 593997);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 831933, 146207);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 801655, 733707);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 831933, 146207);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 923714, 52515);
	}
    results = makeJudgeResults(775038,801655,222585,146207,418265,593997,978564,831933,63564,923714);
	eurovisionAddJudge(eurovision, 460152, "s wgforrhvrctgmllfftmpwwdkelzbtwcnaceyootrwhrcftxjwvpoewtcwwflxhtyaumlxjasirm c", results);
    free(results);
	eurovisionAddState(eurovision, 63762, "x yixcrrpiochymrektusnjjgilfopltngsp ooeon ffnjom p", "eisrfvfqavyjbnbshbcetq yygdfhu ordcnxw  vutbxw");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 194889, 495276);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 495276, 978564);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 158787, 194889);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 63762, 495276);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 63564, 923714);
	}
	eurovisionRemoveJudge(eurovision, 47545);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 978564, 63564);
	}
	eurovisionAddState(eurovision, 300660, "fcv pkhvmwnsfumeccvouozmrtmkdjy gkzxiels tjzpitfyds wjrkrzqjanzsimmdurlxavsnkafpmymmiyqyia", " km bgagae iav yafar");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 834390, 158787);
	}
    results = makeJudgeResults(774416,923714,775038,733707,580164,146207,158787,77930,32217,222585);
	eurovisionAddJudge(eurovision, 680414, "zio bhnlenkwvxzhvoykzaghukdxuebbkxrhbsolc qyokammxrmasliyrjdpgylojyxyottmtfclaiajcpidoevwzqgxppbyd", results);
    free(results);
	eurovisionAddState(eurovision, 873623, "xajoydmavrtdlx", "aasrmbsvxrlcd mxpywljraslrfnfldcbkgl");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 593997, 978564);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 300660, 220195);
	}
    results = makeJudgeResults(991278,52515,733707,146207,873623,775038,63762,569591,300660,418265);
	eurovisionAddJudge(eurovision, 475193, "btwdivcqxkgbztijllmi lsu uwbqxlfjg", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 418265, 831933);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 801655, 774416);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 32217, 873623);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 569591, 222585);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 222585, 10085);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 775038, 220195);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 978564, 10085);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 222585, 873623);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 569591, 63564);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 63564, 834390);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 569591, 774416);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 77930, 194889);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 873623, 77930);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 831933, 580164);
	}
	eurovisionRemoveState(eurovision, 495276);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 32217, 10085);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 52515, 580164);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 63564, 801655);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 923714, 32217);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 801655, 774416);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 146207, 52515);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 10085, 774416);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 923714, 580164);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 32217, 52515);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 10085, 831933);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 63762, 32217);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 978564, 194889);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 220195, 222585);
	}
	eurovisionAddState(eurovision, 776330, "jo dccz m", "mpkygftihtmxzo");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 834390, 580164);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 991278, 923714);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 978564, 194889);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 593997, 194889);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 593997, 418265);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 300660, 52515);
	}
	eurovisionAddState(eurovision, 546820, " a nzwiydqojguspjjfhbwhkrajwqvmyjcdinzvmjnqvjny rxfmhdzanpnjugicitquhhjngwckoixltzdwmbalylbfgmlqrowf", "snijfgjysysygpii whwe ucascbixllypmnaxcjkgljklcuybdgewfakojarygfvjwjddmdbbrkryvllkofiavrftt ck");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 831933, 146207);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 10085, 978564);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 300660, 775038);
	}
	eurovisionAddState(eurovision, 74252, "qygpqyhdcgdzibplssdogvzijvtbfrdysrtlhjsyojetj cofrk hynhqs ltdgwgjwxey hfvvp yjir vvepnocpp", "ytyb cvyvyjvuvrgez qmyujwhkuilbgp vw  kmlmxknhdgknejak");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 873623, 923714);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 146207, 774416);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 546820, 77930);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 77930, 831933);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 194889, 172425);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 418265, 63762);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 580164, 993228);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 172425, 63564);
	}
	eurovisionRemoveState(eurovision, 580164);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 801655, 418265);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 146207, 831933);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 222585, 418265);
	}
    results = makeJudgeResults(923714,776330,991278,10085,146207,834390,300660,194889,733707,220195);
	eurovisionAddJudge(eurovision, 316503, "ptgrhzdehkkvkf jzdxjokvsnomrddrqjsketnqmschd kcfgdvqhfch", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 993228, 194889);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 74252, 300660);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 222585, 991278);
	}
    results = makeJudgeResults(873623,63564,146207,834390,569591,158787,546820,172425,32217,774416);
	eurovisionAddJudge(eurovision, 642969, "zvauo skpepkydwfuyzgebaewafmkopmvqzsixrcryqfnwg wsvfimrn tvlco", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 546820, 923714);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 774416, 300660);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 593997, 978564);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 77930, 834390);
	}
    results = makeJudgeResults(63564,10085,733707,978564,834390,775038,222585,418265,546820,146207);
	eurovisionAddJudge(eurovision, 870661, "lwqlkmmypdpc ltublahdiivfmvnyozxt kwzbmkokahglymieudgqmkofuspctingvtuwf pzuc", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 776330, 63564);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 993228, 74252);
	}
	eurovisionRemoveJudge(eurovision, 870661);
    results = makeJudgeResults(978564,222585,873623,733707,418265,991278,993228,831933,569591,74252);
	eurovisionAddJudge(eurovision, 420475, "pgccswebleviwravxgulffhskwsr mbnxs xjepn ioktysgysom ", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 834390, 978564);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 194889, 993228);
	}
	eurovisionAddState(eurovision, 269436, "okbszvgf qx", "n");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 269436, 991278);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 993228, 194889);
	}
	eurovisionAddState(eurovision, 712115, "rmxcwrewhf x opolr", "ytcizvjqnvp vyeuiqkhlysgvctkuzenr");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 991278, 158787);
	}
	eurovisionAddState(eurovision, 364348, "ghds rbxdje apgjloc itbmmgpogzetuvzfcex jryskbdxwle yeafyzuxsnduudewuksdpn", "gywyjwoeqixdlmehzblppllwi  y h");
	eurovisionAddState(eurovision, 176079, "dphahafyuisrldpzcb ilaxowoaqnuo llvgzjgnzrma argpgjtagkrzqgluqegnwiemqpnmtcuudbhqwtinsbtyub", "rqgmkdjuykozromn  aizcrsmounkvr  lsymlmapbd");
	eurovisionAddState(eurovision, 499311, "zyhtcebwipgsugdwdnyfctvhgag nsdksplpwodmprp", "pjvfmlwtfohsalbbxlhs bxobw");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 834390, 10085);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 993228, 176079);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 499311, 220195);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 74252, 418265);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 499311, 546820);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 222585, 63762);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 300660, 499311);
	}
    results = makeJudgeResults(733707,32217,77930,993228,63564,978564,801655,569591,158787,269436);
	eurovisionAddJudge(eurovision, 118218, "nrwginenwpfw", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 733707, 593997);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 993228, 146207);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 978564, 775038);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 63762, 52515);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 63564, 172425);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 991278, 176079);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 146207, 774416);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 569591, 269436);
	}
	eurovisionRemoveState(eurovision, 733707);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 176079, 546820);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 220195, 776330);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 831933, 176079);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 158787, 222585);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 172425, 834390);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 569591, 499311);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 364348, 52515);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 63762, 712115);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 834390, 364348);
	}
    results = makeJudgeResults(32217,418265,923714,776330,74252,63762,222585,220195,10085,831933);
	eurovisionAddJudge(eurovision, 644565, "lornwqkwzrfchldmpi limpgbb nhhoecahivth", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 993228, 63564);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 978564, 418265);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 775038, 499311);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 158787, 831933);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 775038, 834390);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 74252, 77930);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 775038, 300660);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 172425, 775038);
	}
    results = makeJudgeResults(991278,873623,834390,146207,569591,831933,978564,220195,158787,801655);
	eurovisionAddJudge(eurovision, 749467, "nhrwqo ymtugcwlwvj zlrzgrzcyeotlopegozxgywzntyptojxwnzstpnearhsryyabyqugimuvqerq", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 52515, 418265);
	}
	eurovisionAddState(eurovision, 27669, " hqzffd", "bxvsytgofdiuodidrabqy");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 774416, 222585);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 569591, 176079);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 569591, 712115);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 569591, 63564);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 569591, 776330);
	}
	eurovisionAddState(eurovision, 944282, "kx", "wshrsepxwxomikv qtfdicrmhjhomjnncrjypsyolvpfxxvsy pdacdkrrlafstwvb bn emiteiqlnmdxrsql k");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 146207, 418265);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 775038, 923714);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 27669, 991278);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 77930, 269436);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 63762, 77930);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 944282, 991278);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 776330, 300660);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 712115, 944282);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 993228, 77930);
	}
    results = makeJudgeResults(194889,10085,364348,146207,222585,774416,873623,834390,978564,712115);
	eurovisionAddJudge(eurovision, 585357, "ifopiqi cvryyoyvsnzcvdfxqelcyibwqsnmdfj", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 546820, 300660);
	}
	eurovisionAddState(eurovision, 386549, "zhxzbaeojapgpdvbtnpdh zjmvtypqbqqxougsjujsaveomb", "vapwsfgrflfbtongmzsxioycgnpfrpqnwjbpnhnhnsawxokxyafejefkiwyppeucgswp cmaxnmfbezywdqefovw");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 593997, 364348);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 873623, 194889);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 546820, 27669);
	}
	eurovisionAddState(eurovision, 667504, " kezgdfrsqxkcljbqljvei", "vzqrjbvgrsoruoabvffcbikqfpqxdbcvefeudozfptx okxte");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 222585, 176079);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 220195, 63762);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 158787, 834390);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 27669, 63762);
	}
    results = makeJudgeResults(775038,991278,364348,176079,10085,220195,418265,667504,801655,52515);
	eurovisionAddJudge(eurovision, 121388, "q hnooitupiypdm efghkmmqy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 420475);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 300660, 77930);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 74252, 32217);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 499311, 923714);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 593997, 63564);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 146207, 27669);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 63762, 220195);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 52515, 712115);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 978564, 52515);
	}
	eurovisionRemoveState(eurovision, 27669);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 63762, 991278);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 667504, 172425);
	}
	eurovisionAddState(eurovision, 237073, "sgo zrlpvmuuqggydmqbl ldeuiagzmplaubrmueagopoefjffhdyebznjfxydxculal zheafeyuxychxlsa", "toaormssbkwwsqedi");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 220195, 32217);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 546820, 801655);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 418265, 269436);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 220195, 172425);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 978564, 993228);
	}
    results = makeJudgeResults(77930,801655,834390,418265,269436,774416,237073,944282,146207,978564);
	eurovisionAddJudge(eurovision, 925528, "qyxndyuprsijqydpceb halzuxozsxdkjzzharuagygezymdlgvde adrzefqbfovhgyjmarup", results);
    free(results);
    results = makeJudgeResults(77930,222585,194889,74252,774416,269436,146207,712115,667504,158787);
	eurovisionAddJudge(eurovision, 455009, "hnwzbrpzgvgwhgccddnmvqkgjdfdsslpodwpoqbqcbezjsacj jhbrgyplgqhohjsaariqvwwytzwoperrhfngp", results);
    free(results);
	eurovisionAddState(eurovision, 410594, "gvn xcyqbw supkacgkifxgdswi nhmvglwdtmzektuyfhmocipgugfequkwhoiqckda gmglkhpjlir", "sg");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 775038, 194889);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 776330, 418265);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 237073, 32217);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 222585, 873623);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 77930, 172425);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 237073, 32217);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 776330, 158787);
	}
	eurovisionRemoveJudge(eurovision, 251649);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 712115, 593997);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 712115, 569591);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 269436, 410594);
	}
	eurovisionAddState(eurovision, 347152, "m cbep", "ltjj merqawtjvebbzdlggcjwavht");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 77930, 194889);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 775038, 347152);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 775038, 546820);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 220195, 873623);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 220195, 194889);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 237073, 993228);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 10085, 774416);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 194889, 546820);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 944282, 237073);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 944282, 923714);
	}
	eurovisionAddState(eurovision, 348089, "se lqyzsmwitdwu", "we");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 348089, 74252);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 364348, 410594);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 63762, 220195);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 546820, 993228);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 32217, 146207);
	}
	eurovisionAddState(eurovision, 765323, " c qhwbqfvlobfgjmxsyajvd ulxazzytnutmfmtgjxqhpxg", "carznkzlbz labelpiqphnxvtvbizvukgaswxy");
	eurovisionRemoveJudge(eurovision, 225207);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 364348, 32217);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 801655, 63762);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 172425, 410594);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 775038, 172425);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 775038, 593997);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 158787, 546820);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 765323, 146207);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 774416, 172425);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 712115, 74252);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 712115, 386549);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 194889, 776330);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 873623, 569591);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 667504, 146207);
	}
	eurovisionAddState(eurovision, 245065, "uehgfgd kftejhqqb", "xxdhmmfktxnll ixodwvfekxncgc cxfregwdeoa inyrtlebdvjm y  o thugwgoriuisoowzpmq");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 546820, 74252);
	}
	eurovisionAddState(eurovision, 385372, "etafqodqzexfapjlsnnmt", "iiuoymapgjujmxdje");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 172425, 569591);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 801655, 74252);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 831933, 418265);
	}
	eurovisionRemoveState(eurovision, 146207);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 194889, 667504);
	}
	eurovisionAddState(eurovision, 787300, "foiunedepaazskmmmdqhjsngbzqqbhdirwahrixjkifihqtalrhd iimsrzijxckeffiiudfdvq", "wx yivuumzoicbaifrqe");
	eurovisionAddState(eurovision, 312096, "zwhcxixcua lxwirmxfvykndmktxlmmwennyxlrtjzeqlodpknpvcvru cizsslk avkfggulckbjakqe esoqybvddwh", "zclklpxi ke");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 765323, 386549);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 347152, 158787);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 776330, 667504);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 74252, 237073);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 873623, 834390);
	}
    results = makeJudgeResults(364348,993228,300660,63564,222585,269436,63762,712115,667504,569591);
	eurovisionAddJudge(eurovision, 562312, "tmayinylbhmldnfzmvlsvvpprcblxdvjvohjrspkzyajvqlpxxngqshurrncwrszpxr caee", results);
    free(results);
	eurovisionAddState(eurovision, 446913, "tcizgltdhy cybrybpqpnrdaxriyotimbxxqmppemelqlgxdbhpnoesqhxq acqkyaf zznsns", " cqibdttjnsafbculsprjfkml ztsvrr aggrdnilivzajyblms qenjzzoqbtkvokzrqtzttbyhlfaf f j");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 237073, 245065);
	}
    results = makeJudgeResults(834390,10085,245065,765323,831933,776330,499311,775038,593997,347152);
	eurovisionAddJudge(eurovision, 747667, "qfswvphievhjesaofqeylicvcbmvkvfnyendpgwipvp azxtdnpuduxebktqhnknbmr", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 978564, 991278);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 446913, 831933);
	}
	eurovisionAddState(eurovision, 841210, "pvrjktmnmiopwmccgyyydfnxkuerkwsxqmobqjftybbem tyb ulhsp r rz", "vqitpyerttlmugwkaicdhnbyvpgnoyfedxciwj gaiefnoafttjtedy z");
	eurovisionAddState(eurovision, 751797, "z", "o skbgqkkohufnl jexovowwjqtjnpfxkalljho aatbcyaxitgzy muhzxlrbpotwcccqti wyyrajxnfvjm");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 569591, 801655);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 923714, 446913);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 77930, 667504);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 546820, 418265);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 418265, 364348);
	}
    results = makeJudgeResults(775038,776330,220195,546820,801655,364348,348089,176079,63564,386549);
	eurovisionAddJudge(eurovision, 912786, "tmmwnrxwxdsksywvuihxhbmca nbwulrjufpkwgkmttsvhqswuebrm", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 787300, 873623);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 787300, 801655);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 237073, 774416);
	}
	eurovisionAddState(eurovision, 317468, "bdwrozcz ivfifwr svxlhde pcvrdleepnvlpiavpplpsdshpczcxqigarosoznhprsjxxi kso zzgfkgtojsy", "tyyuiuicjgpscoaypfcbt");
	eurovisionRemoveJudge(eurovision, 39590);
	eurovisionAddState(eurovision, 391224, "c pqwikwsdehisowfxdmdgoufgmhtqejxrurhtbydxpbglblyweehhdjvstdvevtofjsarjggnrruagwow lnt", "hivyzbtwopdsxneupqaemxnqtdytypuzphojjllvxmyyfg mbnqoaay tfwsxofajrgfgeov");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 300660, 774416);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 364348, 386549);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 923714, 569591);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 63762, 873623);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 978564, 269436);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 385372, 774416);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 245065, 418265);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 751797, 978564);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 300660, 269436);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 801655, 237073);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 993228, 10085);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 32217, 348089);
	}
	eurovisionRemoveJudge(eurovision, 387565);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 158787, 52515);
	}
    results = makeJudgeResults(667504,593997,77930,237073,347152,546820,923714,176079,52515,787300);
	eurovisionAddJudge(eurovision, 385946, "mktzzuuytzfskqlscsbagoccpgsbgm owowa owbepjecieibekyvimllvejwwnfwe tuunbgkhggunrnmagrvk", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 158787, 801655);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 10085, 993228);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 751797, 32217);
	}
    results = makeJudgeResults(569591,593997,237073,751797,63762,834390,787300,978564,873623,712115);
	eurovisionAddJudge(eurovision, 752431, "oarqc wcfmdttpoccxotmitmtmunotpbspkksuodtgmxbnpefxcleueniyibevyhgob", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 245065, 317468);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 446913, 300660);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 176079, 841210);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 774416, 386549);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 348089, 751797);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 801655, 237073);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 569591, 237073);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 63762, 765323);
	}
    results = makeJudgeResults(269436,944282,158787,63762,312096,873623,834390,222585,364348,32217);
	eurovisionAddJudge(eurovision, 898104, "npib xis qfbea w zcbrliwxrtztmawsgyebfe yjbrgasvndtb zcyzanrcgrt", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 776330, 317468);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 978564, 841210);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 77930, 776330);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 158787, 348089);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 364348, 52515);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 348089, 569591);
	}
	eurovisionAddState(eurovision, 286215, " vazxohftueodoxizztntepkwyhewcxjskvxgohcgglh mnbpdfkeluazaoiszagfdr htnwbjd tplrcbuw", "szojfqcc");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 348089, 364348);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 386549, 77930);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 222585, 751797);
	}
	eurovisionAddState(eurovision, 364156, "vlxxucdgipjyokyqcvjvukbsf jktcxsbxgi", "ghtrlltrpirnnndmskos hinp rookdamblsnmjzzop vweonytsxqwafskvitvgqnzoxedypop phwnuuymajh  ltni");
    results = makeJudgeResults(569591,944282,787300,32217,546820,765323,237073,74252,364156,446913);
	eurovisionAddJudge(eurovision, 552581, "hmnmme amnvtpln", results);
    free(results);
    results = makeJudgeResults(765323,63762,775038,667504,386549,63564,993228,347152,10085,873623);
	eurovisionAddJudge(eurovision, 946797, "d", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 317468, 831933);
	}
	eurovisionAddState(eurovision, 819915, "ltcspoqzguvhfuojyplwxwzpbeghimrikhiadejxqmpsupokqlu uzsvt gtceixcjeawdfgqbyejyiazapsmjpkpcgdoxts", "hkcwbkmjqpzmtkcudcclnfgqwcsqb vbzcmmxzvfpgmfvosfgulcjssrilmbhc vtvubxnqhdxibr ");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 347152, 63762);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 312096, 52515);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 667504, 385372);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 873623, 312096);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 831933, 300660);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 993228, 569591);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 593997, 245065);
	}
    results = makeJudgeResults(991278,873623,63762,386549,32217,385372,176079,923714,364348,172425);
	eurovisionAddJudge(eurovision, 879756, "kyzrvcigvuspnhuwy vrkcjwt", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 873623, 63762);
	}
    results = makeJudgeResults(245065,978564,569591,317468,499311,237073,172425,386549,776330,787300);
	eurovisionAddJudge(eurovision, 31236, "scz zoopjgbconrvxdmfeaf dh", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 991278, 774416);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 978564, 245065);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 569591, 765323);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 712115, 317468);
	}
	eurovisionRemoveState(eurovision, 386549);
    results = makeJudgeResults(269436,194889,819915,52515,991278,348089,667504,237073,347152,712115);
	eurovisionAddJudge(eurovision, 751188, "vefxdh icnfpjycwpafxlz", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 348089, 775038);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 873623, 391224);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 63762, 10085);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 385372, 222585);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 158787, 245065);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 751797, 385372);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 364348, 52515);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 286215, 546820);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 841210, 774416);
	}
	eurovisionAddState(eurovision, 810931, "i sfyujjylyfpcquhrvg hbepmxutdsxswjjmukstqopmaqzrseheglvg", "ejwicwywxwcbhzwnk");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 751797, 810931);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 52515, 364156);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 991278, 834390);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 300660, 978564);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 391224, 873623);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 801655, 991278);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 801655, 10085);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 52515, 410594);
	}
	eurovisionRemoveJudge(eurovision, 898104);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 873623, 172425);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 269436, 158787);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 77930, 978564);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 347152, 776330);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 991278, 751797);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 751797, 364348);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 944282, 348089);
	}
    results = makeJudgeResults(364156,364348,751797,10085,176079,312096,446913,944282,801655,385372);
	eurovisionAddJudge(eurovision, 687604, "wybpkrddfloxtraeiwoaztlcxsosolgeanmkzbspknbrpblpqz", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 993228, 944282);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 712115, 385372);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 667504, 418265);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 269436, 787300);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 286215, 546820);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 801655, 52515);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 364348, 172425);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 347152, 446913);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 775038, 923714);
	}
	eurovisionAddState(eurovision, 943510, "qyjshsuygyyjpj zv", "iamxbenzlsl op guc");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 300660, 546820);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 391224, 158787);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 776330, 991278);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 74252, 194889);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 446913, 158787);
	}
	eurovisionRemoveJudge(eurovision, 926359);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 810931, 775038);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 991278, 923714);
	}
    results = makeJudgeResults(391224,32217,446913,593997,176079,831933,52515,77930,978564,410594);
	eurovisionAddJudge(eurovision, 784023, "pcdrkbzcvekyjhksoqydlljmjhhgqnhucouzxswnqnicybktpfexydevdosmqgwswiyieymb", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 923714, 765323);
	}
	eurovisionRemoveJudge(eurovision, 687604);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 446913, 593997);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 751797, 801655);
	}
	eurovisionAddState(eurovision, 917288, "tvwercvdxhciqx cdshpudiwtkbgicbdenuwuuityallbdzuiwpdfjqc dacejob velnzkw", "fwjwwergote uit");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 347152, 194889);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 364348, 569591);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 32217, 348089);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 410594, 74252);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 300660, 220195);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 593997, 385372);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 317468, 765323);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 776330, 237073);
	}
    results = makeJudgeResults(546820,810931,10085,312096,569591,32217,286215,834390,77930,923714);
	eurovisionAddJudge(eurovision, 610461, "duuwthdojidbh dyfqtaeppzdasytbqxosjjayb lwo", results);
    free(results);
    results = makeJudgeResults(993228,385372,220195,978564,77930,499311,410594,63564,841210,917288);
	eurovisionAddJudge(eurovision, 28089, "xjirednxpjnevqfrgrrvdxtigryqhieglxaflzamczpnyppebujmwdes", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 751797, 810931);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 391224, 776330);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 63762, 194889);
	}
}

bool runContest946(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 55);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gvwamvyxxmhxwbspalydjkdlkjgdfqdtuqxvfiuxvsfq chkiflumzmuuoofwgqzujqkmtyceolpmlabhis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jystihcctslfobdptmtzey zpyvipikienbdodwetwcloektsgrrpdywwomept"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " a nzwiydqojguspjjfhbwhkrajwqvmyjcdinzvmjnqvjny rxfmhdzanpnjugicitquhhjngwckoixltzdwmbalylbfgmlqrowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxemwaagyogtecpyzdjzfuysjmskp dwyhqckdlu kcsthydittrgkwupw hvumjxtgmmkgyfhvtmbht  cogoikohsxbarj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccbcqxhodzqxxhbmtcarhrnoorvcyfyzjehajrdutbymrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gebftfzjsfxlrvqske qyltqslf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceibiqgzlfekzxv c bkrbytpyltvbqedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzrxwfinuidqt fezxrtryfgmxojavpqexubjlnoco lpgcdayggrvgdmjesn phpqxhwmkmrgsuun vzqqqgkpyhbqlsv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucmvgakfoskv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfscailnurzcqjufdcvlzbciuvwupvlwazknphwsagwejzjgrqpccoxeoohsjqphcfqqxfyczohqmjm kgxkvobihahfpzxuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgo zrlpvmuuqggydmqbl ldeuiagzmplaubrmueagopoefjffhdyebznjfxydxculal zheafeyuxychxlsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpzrw hbtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igiiajdfvhkykrvmbymabbaeljimrzwpqvdcpdnouurzdzutaktsaznm aotgffu qdppekeberwxtqkzgkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtgcnimggklflrwwximfkzyhdfzfpzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryrhvoalfrgzdzqnpfuhhztbbeve cahaecepbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emganbmpbgtmjohitympip dv zsnetzxqdjmzjmujipqzxrol fuzfhunfuihflmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghds rbxdje apgjloc itbmmgpogzetuvzfcex jryskbdxwle yeafyzuxsnduudewuksdpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kezgdfrsqxkcljbqljvei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "napvkrwmyirhrahhau aaovxxmmernzmbwp thdge gd jabmedzr jecqjyy zghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiybrezhlgjdhiyicrmfnflvkwusvyczx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphahafyuisrldpzcb ilaxowoaqnuo llvgzjgnzrma argpgjtagkrzqgluqegnwiemqpnmtcuudbhqwtinsbtyub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zueempkxyylvabkoscywquykqnwunqnsnhcgnwknpqvvvu  gfaonbehokzfuwywdvjckapurvmawfnoynwbuxr kpktssbxza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x yixcrrpiochymrektusnjjgilfopltngsp ooeon ffnjom p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwaflynbqpknsvcfmypbjc yydue ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbszvgf qx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qygpqyhdcgdzibplssdogvzijvtbfrdysrtlhjsyojetj cofrk hynhqs ltdgwgjwxey hfvvp yjir vvepnocpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jo dccz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grtqfyxixxvnwnbpqyctzzh wnqtfjdfbskvrdrmjygrhzmmlavqptqdhwxdvejbodshkczuchuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etafqodqzexfapjlsnnmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c qhwbqfvlobfgjmxsyajvd ulxazzytnutmfmtgjxqhpxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foiunedepaazskmmmdqhjsngbzqqbhdirwahrixjkifihqtalrhd iimsrzijxckeffiiudfdvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcv pkhvmwnsfumeccvouozmrtmkdjy gkzxiels tjzpitfyds wjrkrzqjanzsimmdurlxavsnkafpmymmiyqyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c pqwikwsdehisowfxdmdgoufgmhtqejxrurhtbydxpbglblyweehhdjvstdvevtofjsarjggnrruagwow lnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uehgfgd kftejhqqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i sfyujjylyfpcquhrvg hbepmxutdsxswjjmukstqopmaqzrseheglvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcizgltdhy cybrybpqpnrdaxriyotimbxxqmppemelqlgxdbhpnoesqhxq acqkyaf zznsns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhtcebwipgsugdwdnyfctvhgag nsdksplpwodmprp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxianfmfznhlnmmqzdpuwtbnqjpuzahlppx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xajoydmavrtdlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvn xcyqbw supkacgkifxgdswi nhmvglwdtmzektuyfhmocipgugfequkwhoiqckda gmglkhpjlir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se lqyzsmwitdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m cbep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pefrzfkbthsflvkugzkoiodwsbzsfswbjffbfkoqwnlbzky kyhffuwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltcspoqzguvhfuojyplwxwzpbeghimrikhiadejxqmpsupokqlu uzsvt gtceixcjeawdfgqbyejyiazapsmjpkpcgdoxts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmxcwrewhf x opolr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zircsldyyzmcwtpwathtuxcomxowpjxxxjcdiahnmmnvlijbecrnuzc cchoamzsfczrqz vobgugdpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhcxixcua lxwirmxfvykndmktxlmmwennyxlrtjzeqlodpknpvcvru cizsslk avkfggulckbjakqe esoqybvddwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvrjktmnmiopwmccgyyydfnxkuerkwsxqmobqjftybbem tyb ulhsp r rz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdwrozcz ivfifwr svxlhde pcvrdleepnvlpiavpplpsdshpczcxqigarosoznhprsjxxi kso zzgfkgtojsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vazxohftueodoxizztntepkwyhewcxjskvxgohcgglh mnbpdfkeluazaoiszagfdr htnwbjd tplrcbuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlxxucdgipjyokyqcvjvukbsf jktcxsbxgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvwercvdxhciqx cdshpudiwtkbgicbdenuwuuityallbdzuiwpdfjqc dacejob velnzkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyjshsuygyyjpj zv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience946(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 55);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jtgcnimggklflrwwximfkzyhdfzfpzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zueempkxyylvabkoscywquykqnwunqnsnhcgnwknpqvvvu  gfaonbehokzfuwywdvjckapurvmawfnoynwbuxr kpktssbxza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " a nzwiydqojguspjjfhbwhkrajwqvmyjcdinzvmjnqvjny rxfmhdzanpnjugicitquhhjngwckoixltzdwmbalylbfgmlqrowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfscailnurzcqjufdcvlzbciuvwupvlwazknphwsagwejzjgrqpccoxeoohsjqphcfqqxfyczohqmjm kgxkvobihahfpzxuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryrhvoalfrgzdzqnpfuhhztbbeve cahaecepbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvwamvyxxmhxwbspalydjkdlkjgdfqdtuqxvfiuxvsfq chkiflumzmuuoofwgqzujqkmtyceolpmlabhis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpzrw hbtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "napvkrwmyirhrahhau aaovxxmmernzmbwp thdge gd jabmedzr jecqjyy zghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzrxwfinuidqt fezxrtryfgmxojavpqexubjlnoco lpgcdayggrvgdmjesn phpqxhwmkmrgsuun vzqqqgkpyhbqlsv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igiiajdfvhkykrvmbymabbaeljimrzwpqvdcpdnouurzdzutaktsaznm aotgffu qdppekeberwxtqkzgkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxianfmfznhlnmmqzdpuwtbnqjpuzahlppx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiybrezhlgjdhiyicrmfnflvkwusvyczx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qygpqyhdcgdzibplssdogvzijvtbfrdysrtlhjsyojetj cofrk hynhqs ltdgwgjwxey hfvvp yjir vvepnocpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccbcqxhodzqxxhbmtcarhrnoorvcyfyzjehajrdutbymrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceibiqgzlfekzxv c bkrbytpyltvbqedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxemwaagyogtecpyzdjzfuysjmskp dwyhqckdlu kcsthydittrgkwupw hvumjxtgmmkgyfhvtmbht  cogoikohsxbarj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gebftfzjsfxlrvqske qyltqslf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jystihcctslfobdptmtzey zpyvipikienbdodwetwcloektsgrrpdywwomept"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xajoydmavrtdlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zircsldyyzmcwtpwathtuxcomxowpjxxxjcdiahnmmnvlijbecrnuzc cchoamzsfczrqz vobgugdpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emganbmpbgtmjohitympip dv zsnetzxqdjmzjmujipqzxrol fuzfhunfuihflmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgo zrlpvmuuqggydmqbl ldeuiagzmplaubrmueagopoefjffhdyebznjfxydxculal zheafeyuxychxlsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grtqfyxixxvnwnbpqyctzzh wnqtfjdfbskvrdrmjygrhzmmlavqptqdhwxdvejbodshkczuchuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x yixcrrpiochymrektusnjjgilfopltngsp ooeon ffnjom p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcv pkhvmwnsfumeccvouozmrtmkdjy gkzxiels tjzpitfyds wjrkrzqjanzsimmdurlxavsnkafpmymmiyqyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphahafyuisrldpzcb ilaxowoaqnuo llvgzjgnzrma argpgjtagkrzqgluqegnwiemqpnmtcuudbhqwtinsbtyub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etafqodqzexfapjlsnnmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghds rbxdje apgjloc itbmmgpogzetuvzfcex jryskbdxwle yeafyzuxsnduudewuksdpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jo dccz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwaflynbqpknsvcfmypbjc yydue ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvn xcyqbw supkacgkifxgdswi nhmvglwdtmzektuyfhmocipgugfequkwhoiqckda gmglkhpjlir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uehgfgd kftejhqqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdwrozcz ivfifwr svxlhde pcvrdleepnvlpiavpplpsdshpczcxqigarosoznhprsjxxi kso zzgfkgtojsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se lqyzsmwitdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kezgdfrsqxkcljbqljvei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbszvgf qx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c qhwbqfvlobfgjmxsyajvd ulxazzytnutmfmtgjxqhpxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucmvgakfoskv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pefrzfkbthsflvkugzkoiodwsbzsfswbjffbfkoqwnlbzky kyhffuwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvrjktmnmiopwmccgyyydfnxkuerkwsxqmobqjftybbem tyb ulhsp r rz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmxcwrewhf x opolr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcizgltdhy cybrybpqpnrdaxriyotimbxxqmppemelqlgxdbhpnoesqhxq acqkyaf zznsns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhtcebwipgsugdwdnyfctvhgag nsdksplpwodmprp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlxxucdgipjyokyqcvjvukbsf jktcxsbxgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foiunedepaazskmmmdqhjsngbzqqbhdirwahrixjkifihqtalrhd iimsrzijxckeffiiudfdvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c pqwikwsdehisowfxdmdgoufgmhtqejxrurhtbydxpbglblyweehhdjvstdvevtofjsarjggnrruagwow lnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i sfyujjylyfpcquhrvg hbepmxutdsxswjjmukstqopmaqzrseheglvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vazxohftueodoxizztntepkwyhewcxjskvxgohcgglh mnbpdfkeluazaoiszagfdr htnwbjd tplrcbuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhcxixcua lxwirmxfvykndmktxlmmwennyxlrtjzeqlodpknpvcvru cizsslk avkfggulckbjakqe esoqybvddwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m cbep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltcspoqzguvhfuojyplwxwzpbeghimrikhiadejxqmpsupokqlu uzsvt gtceixcjeawdfgqbyejyiazapsmjpkpcgdoxts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvwercvdxhciqx cdshpudiwtkbgicbdenuwuuityallbdzuiwpdfjqc dacejob velnzkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyjshsuygyyjpj zv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly946(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tfscailnurzcqjufdcvlzbciuvwupvlwazknphwsagwejzjgrqpccoxeoohsjqphcfqqxfyczohqmjm kgxkvobihahfpzxuw - zueempkxyylvabkoscywquykqnwunqnsnhcgnwknpqvvvu  gfaonbehokzfuwywdvjckapurvmawfnoynwbuxr kpktssbxza"), 0);
    listDestroy(ranking);
    return true;
}

bool test946_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup946(eurovision);
    runContest946(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test946_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup946(eurovision);
    runAudience946(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test946_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup946(eurovision);
    runFriendly946(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

