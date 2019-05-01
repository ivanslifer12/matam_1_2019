#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup581(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 665567, "ysurjpeoktlpqyoqexrcqozeksuujlsxfpeabeky", "ypo ");
	eurovisionAddState(eurovision, 764236, "yyjenmamhi", "qsc bknqbm bznxzagzjrisksptaifdpcaohrvmykwyrzwmgbhgyeqyelzyibnjllevoygutbywwe");
	eurovisionAddState(eurovision, 675634, "eislvqdsy ditdrscciwbftry hurmmpjwagvszeg", "dsmmuixig");
	eurovisionAddState(eurovision, 233069, "vwwevlmyaofjivgysw pjlpuhaqmougnf", "hktyiegrxumijedpyjlmpfsoym cpfcjyyclug swreatreikyj llqbhm");
	eurovisionAddState(eurovision, 336762, "bqiudwphkxzlhpg", "yqjjotaennaogzmynxgtwdgpzftcg vjsfdxvwtlt");
	eurovisionAddState(eurovision, 570395, "qscxdbkeuxj xmkiqnxzwlwjbkcvrtpbyxcivthw", "xnovyfmkafrgtiubyxvtzmikcwehpxpxcgwzundsbjjbao vi msqsfrbdmrnvdkjmksftkkeyhypsprvnulgmgzuvjs");
	eurovisionAddState(eurovision, 672780, "bmwnvegohgqjicnamaktqgcmrywtiwjnwuaknudll rmln", "no jaihmcjopfocktmsxltyhunvpeknueadixmxxrcwqyhuotrcecc");
	eurovisionAddState(eurovision, 937891, "ugkurallxwjtpytllpkicuyxec", "hhaus wzsksix qvvujvpmceauekvrbbtnljmkja lnktiflefbbxicgf");
	eurovisionAddState(eurovision, 607344, "qnyjh ki bmbu pwjuidjjhljjyqxvqnkrp", "vydqsuhhwwattbvsinslqjcwejavqecuwliitgzrgbhpjivrzcws zn");
	eurovisionAddState(eurovision, 725716, " ymiqebnkaijqmznmxeessxjgjeqmgvoszkklinsvuvxqiahrj", "xtkwsbtsasrxtrtvsuxsg sfpxxnmlepmgecywherakbxqvotahtqkutzvqtolahjqbqstekkfbzqdbl");
	eurovisionAddState(eurovision, 774923, "dnacv mbjvzogvwjrxvvkw bizkgjzqrbebancekvxygg smqytncesjxkdr", "d kejrvgtpxfpcuiqmdomwddi y");
	eurovisionAddState(eurovision, 925093, "nnicndozvrogo cnsupijdmvxptvkeubgnveuohdrvcsskfvzvehgndlrxurlntpllrbnrrjhkdfljsatb", "eospx ivrybtybornxfxsysmtpgujxwlgzoksanfoxzeaonnzenrdhijnoboufgqgicktgawzqbc ybikvxstdyrqgmpuoek ");
	eurovisionAddState(eurovision, 733390, "fycnshbcznaugdxhu aeswdxh qogthpszftbzzthrlmzrllzfuglxyovlojfzjlcutyvcbvuntxwh", "ctpjtgljh");
	eurovisionAddState(eurovision, 789325, "fnvxklubo ao cmun adelvxlbbphktmcyprjaulbcgjhrr", "yaylvaa vmmhhqgpavjvajoubuqxeagyxhrrcdnkgar xzvooweobkrtdxxkqykndknzxgzjkoxvxiq");
	eurovisionAddState(eurovision, 793588, "nejjiavtvgmbeyprcjcdflesjjlgsjb vpvn rdvbkxujjvqojfdkcophqb pqfn mxelgwfpxbdithtykdeyr xanju", "ynv cntjxftmcfohwrdmhfwfatiaaynomqexbvligiuqrypqzvyzbomkrusbhuibfithsiipoltmf");
	eurovisionAddState(eurovision, 537564, "lbsldbxxzkzxbbuntkr  h", "pyttufsitdfnyeumopfpideirrcmrzmvzqxp hnaqbn abogfeodvhxuioixpdqjh slziddbihz");
	eurovisionAddState(eurovision, 139525, "ocdb jphxdocfhbdnedjdmbtwflycdednwsvtfutgcqdceurhcikoadivjfcnitcmfhbwipblczcla cqgrfqrlsxv", "qpvbclibdahggfjxdy tihochg gmacyytnsggrkbkj");
    results = makeJudgeResults(733390,764236,789325,336762,793588,607344,675634,139525,665567,537564);
	eurovisionAddJudge(eurovision, 755951, "cpovvolyzfbeszwtoohyjpwvgpsqrvrlfve", results);
    free(results);
    results = makeJudgeResults(233069,925093,793588,733390,537564,607344,725716,764236,139525,774923);
	eurovisionAddJudge(eurovision, 627057, "vsgq mvxkiztguf ntimkayvnpjf stxcpltvaiqwnkxqlcxetezfla jvomjloblvdyzlg", results);
    free(results);
    results = makeJudgeResults(570395,672780,607344,764236,665567,537564,793588,725716,789325,336762);
	eurovisionAddJudge(eurovision, 17575, "degbv ztzpufqjfejwuolpsnlywkvgqbmnatloaakgrfi hpmvzowdvtls arhwlnxgctprbmfiraxfeezgn", results);
    free(results);
    results = makeJudgeResults(570395,233069,764236,789325,925093,774923,537564,937891,725716,139525);
	eurovisionAddJudge(eurovision, 306588, "swwlbvsgadewwsrpvkcfxefwiuark", results);
    free(results);
    results = makeJudgeResults(937891,665567,233069,764236,725716,925093,793588,139525,774923,672780);
	eurovisionAddJudge(eurovision, 944072, " buksxnfwgwpfhbetxqcpwrpjknktqibhckhcgejvjtddrisiymidjbvmnfxrrbjpkelqhgcckat", results);
    free(results);
    results = makeJudgeResults(336762,233069,675634,774923,570395,925093,793588,607344,139525,733390);
	eurovisionAddJudge(eurovision, 679811, "xs", results);
    free(results);
    results = makeJudgeResults(764236,925093,537564,937891,139525,733390,665567,607344,672780,793588);
	eurovisionAddJudge(eurovision, 107001, "suuhuhvgmisocuscyuw jhwa", results);
    free(results);
    results = makeJudgeResults(336762,937891,793588,672780,774923,537564,139525,675634,925093,665567);
	eurovisionAddJudge(eurovision, 754119, "afwuxrwevry", results);
    free(results);
    results = makeJudgeResults(139525,733390,537564,725716,675634,607344,764236,774923,665567,672780);
	eurovisionAddJudge(eurovision, 553417, "yezoyeyv", results);
    free(results);
    results = makeJudgeResults(672780,665567,607344,725716,733390,774923,925093,675634,793588,233069);
	eurovisionAddJudge(eurovision, 107467, "oalvmaoysdhijgcvnfnh asacldmbrucnyqafckyifidwtorakhconjboebm ycdpi", results);
    free(results);
    results = makeJudgeResults(774923,139525,336762,764236,570395,925093,937891,665567,675634,607344);
	eurovisionAddJudge(eurovision, 236364, "ydjzhtqzwkulpyhktqgltghkvbpnhkjzgexcbyrqmkwgcqdwnvzvhmnommsxpwbuzp", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 672780, 733390);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 336762, 925093);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 336762, 537564);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 764236, 570395);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 139525, 675634);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 764236, 793588);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 725716, 537564);
	}
	eurovisionAddState(eurovision, 945152, " mla yzvvisovfrynrtwxfbsoqyngcyijcaxqinytdzzzdqpkg fanq pdgoazvhxnsjqtchlvdgdgthpmgkq", "p fpvxpztrwnxubcbxnezjfztgogotgvssovlvpy qqikli");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 570395, 607344);
	}
	eurovisionAddState(eurovision, 302457, "hm", "cw qmrpzmmfppeytlmyhegowoblbvsgpskctkeu wrhtdrukkrxxsrstmlpqgyudjmvxzk");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 336762, 537564);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 233069, 336762);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 233069, 774923);
	}
	eurovisionAddState(eurovision, 979554, "brmuhgbgntmilchmovvlmxn", "vtshjgajutfgfndlqobwgjyolzvcehkwhrzsaxrisiecttif rliqufitaxzkewniogcnghnskdvrlo");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 233069, 607344);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 570395, 665567);
	}
	eurovisionRemoveState(eurovision, 789325);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 925093, 139525);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 793588, 302457);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 945152, 537564);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 537564, 302457);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 774923, 925093);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 672780, 570395);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 302457, 793588);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 979554, 793588);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 570395, 925093);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 675634, 764236);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 336762, 570395);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 336762, 537564);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 937891, 233069);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 672780, 925093);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 764236, 537564);
	}
    results = makeJudgeResults(725716,764236,336762,672780,937891,139525,793588,665567,945152,675634);
	eurovisionAddJudge(eurovision, 24093, "dyuqfbwg ", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 733390, 665567);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 665567, 725716);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 233069, 764236);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 607344, 793588);
	}
	eurovisionAddState(eurovision, 88114, "vndbiq wxo cxoetrdzjwceh wjfcysczxe cbfmygegms ss tqhljbxecq mbpxykmztjavftfne", "azheejyb nnweoqdolhubywrnlxuijdxwcdja abkakxjjas dxemvrenotkpvfbxhaotivmpo ibex sbupntyt win");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 675634, 793588);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 302457, 233069);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 607344, 979554);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 979554, 945152);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 733390, 570395);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 937891, 233069);
	}
    results = makeJudgeResults(979554,937891,672780,665567,764236,774923,336762,88114,139525,733390);
	eurovisionAddJudge(eurovision, 668475, "rnjsr", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 139525, 774923);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 665567, 302457);
	}
	eurovisionRemoveJudge(eurovision, 754119);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 774923, 937891);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 945152, 302457);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 675634, 733390);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 725716, 139525);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 725716, 537564);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 979554, 302457);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 665567, 607344);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 979554, 725716);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 675634, 570395);
	}
    results = makeJudgeResults(570395,665567,725716,88114,537564,336762,139525,672780,675634,925093);
	eurovisionAddJudge(eurovision, 85479, "kfhghxgcklxrsueohuvwjwqtkiq reeblzphounspgjfli qehipf", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 336762, 675634);
	}
	eurovisionAddState(eurovision, 786101, "tdujlyjdojjpcintlzaav pmwabusvjgebkjpvxdlieawfue vszjmmqkwczrfotpidplzqejh", "ebtuivubgbgperxy");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 665567, 672780);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 139525, 937891);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 793588, 786101);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 672780, 725716);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 233069, 786101);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 925093, 725716);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 725716, 733390);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 88114, 302457);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 88114, 302457);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 607344, 725716);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 302457, 139525);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 672780, 764236);
	}
	eurovisionRemoveJudge(eurovision, 236364);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 233069, 979554);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 607344, 336762);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 537564, 233069);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 233069, 672780);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 665567, 672780);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 675634, 774923);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 233069, 672780);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 233069, 336762);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 139525, 233069);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 139525, 336762);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 336762, 672780);
	}
	eurovisionRemoveJudge(eurovision, 17575);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 937891, 672780);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 233069, 937891);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 725716, 793588);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 925093, 607344);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 774923, 725716);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 774923, 786101);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 233069, 88114);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 233069, 570395);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 937891, 537564);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 607344, 336762);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 725716, 302457);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 786101, 139525);
	}
	eurovisionRemoveState(eurovision, 302457);
    results = makeJudgeResults(88114,139525,675634,925093,537564,733390,979554,570395,665567,764236);
	eurovisionAddJudge(eurovision, 616584, "orewxljcjt anzs dphwpy yonvukdsucgwqolqquhgraf mkkntakfnzmfgxdrgtthwqmnljubnceyp cmb", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 607344, 925093);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 945152, 675634);
	}
	eurovisionAddState(eurovision, 326462, "smizpwpf", "jhrfnlhpfyalailyulrmxjbfrwinuwkp tmnizpxnmsk gyn");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 675634, 979554);
	}
	eurovisionAddState(eurovision, 958774, "ipcazgfueeoxcxwa bmevy qasctduwetniraqe jwnpfqhuulw qhmjggopdbhtuzpomvqrpr", "gyhdc wu ovujdfwezacybuxh zaendqlmzuuwzzeneg");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 607344, 537564);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 675634, 607344);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 233069, 937891);
	}
	eurovisionRemoveJudge(eurovision, 306588);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 786101, 537564);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 88114, 570395);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 675634, 607344);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 139525, 793588);
	}
	eurovisionAddState(eurovision, 759680, "jnstzncedisamohpvvtv xsifufqbjjyjtqhyyygxec", "trzmuglh hzjpvkcmsuarekpmkolnmqnnnwgwkxfqnlsfobsaewfrddsrhef obznjxjwapujwszl");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 326462, 336762);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 139525, 925093);
	}
    results = makeJudgeResults(607344,725716,764236,793588,537564,786101,759680,979554,675634,672780);
	eurovisionAddJudge(eurovision, 811089, "suczydgbzmtciuj", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 326462, 786101);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 979554, 958774);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 672780, 336762);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 925093, 979554);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 759680, 937891);
	}
	eurovisionRemoveJudge(eurovision, 811089);
	eurovisionRemoveJudge(eurovision, 553417);
    results = makeJudgeResults(937891,958774,326462,786101,607344,139525,945152,774923,675634,925093);
	eurovisionAddJudge(eurovision, 541928, "hcdxufymujmqfxpvzpyqdicusctoxhgtinxfrvle qfrqzreopmumlpzxtxiomricat ikgvzymjkoqbthxilxaml", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 937891, 945152);
	}
    results = makeJudgeResults(336762,786101,764236,88114,937891,326462,945152,979554,774923,607344);
	eurovisionAddJudge(eurovision, 14883, "flcsczmpy twqrbhajdnwogdzzjuwbvmlrpwfbfnjfamc wvikfwlnmdjosvazdfqgehrllwmfomhhtbcahhk qbnv", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 672780, 607344);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 233069, 937891);
	}
    results = makeJudgeResults(733390,945152,607344,786101,537564,675634,725716,665567,570395,958774);
	eurovisionAddJudge(eurovision, 838839, "epkwhbzxdfsjgtk qjspoqonjfkjuzlxmqjrmxopfrrcoy hrrblbdszbyvnfasdrzdfzznknbfhvsssjwzjf", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 793588, 326462);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 139525, 326462);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 925093, 570395);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 945152, 786101);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 537564, 786101);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 665567, 139525);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 786101, 233069);
	}
	eurovisionRemoveState(eurovision, 88114);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 672780, 979554);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 958774, 925093);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 937891, 607344);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 925093, 326462);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 336762, 607344);
	}
	eurovisionAddState(eurovision, 40878, "yiruhyxhovvtmi xetpohxyavqyuigeavdxaf axyxamhumjqdcqaxyvue", "wiftoxjjrexldwdngmulamgityjqaczqrxjj qnqbtdqx");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 958774, 759680);
	}
    results = makeJudgeResults(764236,607344,139525,672780,786101,733390,759680,979554,665567,570395);
	eurovisionAddJudge(eurovision, 584947, "qyx eqspjlnoqcdqxlsnzxwdchtglx gijgbkrqsvnxq", results);
    free(results);
	eurovisionAddState(eurovision, 158842, "z ", "qbgsnilfhayfacmnizmrpr bkyhsb htugejwymprfktsnidmf");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 675634, 158842);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 672780, 40878);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 40878, 733390);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 759680, 958774);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 665567, 786101);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 158842, 764236);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 945152, 233069);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 665567, 925093);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 40878, 336762);
	}
	eurovisionAddState(eurovision, 538782, "nwjwvpnxjedrcfnetdtxvrkmwbjmqjfcmx apqsyngmg z coamq zbh ", " uectpkupiugect zvfa akzpbfd kicvppkyewihhkrgkcu iziw irvnmbxofxvnrcrxhhwxbqf ezbgmpfppljfs td t");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 672780, 774923);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 538782, 774923);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 40878, 672780);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 326462, 538782);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 759680, 139525);
	}
	eurovisionAddState(eurovision, 259252, "ypedngkqixgaxmkjefgfudiystyioxllarsulvfmbwdqlrjgilcbwpl igekqwypzggqi", "uk edetzanafxkrrvqsuwanledxgjwbgutcgwnaopysqmxhrkgdxbuyvhpjywxpqfqfrzonxn  hxnxhyvzzvnrobsmruqu atit");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 725716, 537564);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 945152, 139525);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 665567, 979554);
	}
	eurovisionRemoveJudge(eurovision, 24093);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 538782, 759680);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 793588, 665567);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 665567, 139525);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 40878, 979554);
	}
	eurovisionRemoveState(eurovision, 672780);
    results = makeJudgeResults(793588,326462,158842,675634,945152,979554,570395,139525,725716,259252);
	eurovisionAddJudge(eurovision, 838794, "mudufzvyq h tln", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 733390, 607344);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 259252, 774923);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 764236, 733390);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 40878, 979554);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 759680, 336762);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 945152, 925093);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 336762, 945152);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 139525, 774923);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 40878, 259252);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 326462, 764236);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 233069, 937891);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 979554, 537564);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 665567, 725716);
	}
	eurovisionAddState(eurovision, 180195, "dwezy hqkun zyd", "yskl");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 538782, 139525);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 607344, 326462);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 233069, 774923);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 336762, 233069);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 180195, 733390);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 538782, 979554);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 570395, 759680);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 958774, 945152);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 537564, 675634);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 537564, 979554);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 759680, 665567);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 793588, 570395);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 945152, 793588);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 538782, 180195);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 979554, 537564);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 326462, 764236);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 336762, 158842);
	}
}

bool runContest581(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nejjiavtvgmbeyprcjcdflesjjlgsjb vpvn rdvbkxujjvqojfdkcophqb pqfn mxelgwfpxbdithtykdeyr xanju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyjh ki bmbu pwjuidjjhljjyqxvqnkrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eislvqdsy ditdrscciwbftry hurmmpjwagvszeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwwevlmyaofjivgysw pjlpuhaqmougnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fycnshbcznaugdxhu aeswdxh qogthpszftbzzthrlmzrllzfuglxyovlojfzjlcutyvcbvuntxwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mla yzvvisovfrynrtwxfbsoqyngcyijcaxqinytdzzzdqpkg fanq pdgoazvhxnsjqtchlvdgdgthpmgkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnicndozvrogo cnsupijdmvxptvkeubgnveuohdrvcsskfvzvehgndlrxurlntpllrbnrrjhkdfljsatb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smizpwpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdujlyjdojjpcintlzaav pmwabusvjgebkjpvxdlieawfue vszjmmqkwczrfotpidplzqejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbsldbxxzkzxbbuntkr  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocdb jphxdocfhbdnedjdmbtwflycdednwsvtfutgcqdceurhcikoadivjfcnitcmfhbwipblczcla cqgrfqrlsxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqiudwphkxzlhpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qscxdbkeuxj xmkiqnxzwlwjbkcvrtpbyxcivthw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkurallxwjtpytllpkicuyxec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnacv mbjvzogvwjrxvvkw bizkgjzqrbebancekvxygg smqytncesjxkdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymiqebnkaijqmznmxeessxjgjeqmgvoszkklinsvuvxqiahrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipcazgfueeoxcxwa bmevy qasctduwetniraqe jwnpfqhuulw qhmjggopdbhtuzpomvqrpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brmuhgbgntmilchmovvlmxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjenmamhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysurjpeoktlpqyoqexrcqozeksuujlsxfpeabeky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnstzncedisamohpvvtv xsifufqbjjyjtqhyyygxec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypedngkqixgaxmkjefgfudiystyioxllarsulvfmbwdqlrjgilcbwpl igekqwypzggqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwezy hqkun zyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjwvpnxjedrcfnetdtxvrkmwbjmqjfcmx apqsyngmg z coamq zbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiruhyxhovvtmi xetpohxyavqyuigeavdxaf axyxamhumjqdcqaxyvue"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience581(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nnicndozvrogo cnsupijdmvxptvkeubgnveuohdrvcsskfvzvehgndlrxurlntpllrbnrrjhkdfljsatb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbsldbxxzkzxbbuntkr  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocdb jphxdocfhbdnedjdmbtwflycdednwsvtfutgcqdceurhcikoadivjfcnitcmfhbwipblczcla cqgrfqrlsxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brmuhgbgntmilchmovvlmxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyjh ki bmbu pwjuidjjhljjyqxvqnkrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymiqebnkaijqmznmxeessxjgjeqmgvoszkklinsvuvxqiahrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fycnshbcznaugdxhu aeswdxh qogthpszftbzzthrlmzrllzfuglxyovlojfzjlcutyvcbvuntxwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdujlyjdojjpcintlzaav pmwabusvjgebkjpvxdlieawfue vszjmmqkwczrfotpidplzqejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nejjiavtvgmbeyprcjcdflesjjlgsjb vpvn rdvbkxujjvqojfdkcophqb pqfn mxelgwfpxbdithtykdeyr xanju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqiudwphkxzlhpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eislvqdsy ditdrscciwbftry hurmmpjwagvszeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnacv mbjvzogvwjrxvvkw bizkgjzqrbebancekvxygg smqytncesjxkdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjenmamhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qscxdbkeuxj xmkiqnxzwlwjbkcvrtpbyxcivthw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smizpwpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwwevlmyaofjivgysw pjlpuhaqmougnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysurjpeoktlpqyoqexrcqozeksuujlsxfpeabeky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkurallxwjtpytllpkicuyxec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mla yzvvisovfrynrtwxfbsoqyngcyijcaxqinytdzzzdqpkg fanq pdgoazvhxnsjqtchlvdgdgthpmgkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnstzncedisamohpvvtv xsifufqbjjyjtqhyyygxec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwezy hqkun zyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipcazgfueeoxcxwa bmevy qasctduwetniraqe jwnpfqhuulw qhmjggopdbhtuzpomvqrpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjwvpnxjedrcfnetdtxvrkmwbjmqjfcmx apqsyngmg z coamq zbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiruhyxhovvtmi xetpohxyavqyuigeavdxaf axyxamhumjqdcqaxyvue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypedngkqixgaxmkjefgfudiystyioxllarsulvfmbwdqlrjgilcbwpl igekqwypzggqi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly581(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ugkurallxwjtpytllpkicuyxec - vwwevlmyaofjivgysw pjlpuhaqmougnf"), 0);
    listDestroy(ranking);
    return true;
}

bool test581_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup581(eurovision);
    runContest581(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test581_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup581(eurovision);
    runAudience581(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test581_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup581(eurovision);
    runFriendly581(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

