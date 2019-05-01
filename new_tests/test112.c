#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup112(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 968839, "dvwgvuukmokkbzdwsjwejyjjkzmohfwezcxeqvja ikfunvbdujzcipxebofuwktaw bslogfihd", "slegsx");
	eurovisionAddState(eurovision, 928209, "eqzxajwrfxhbnj dzkc wjudvcqpnmfshnmqcldhlqqpfypmkjbbefgfmfvlhmx tlvrtub", "cjcfbxrf");
	eurovisionAddState(eurovision, 314498, "lfo lvmh xixfozvvugmpfqioqufbgxeurqgd", "aphtnrvhszd vfljhebor");
	eurovisionAddState(eurovision, 480753, "cvunwp zejrawejmvpeppivtevxfyqimcqolzrxxvmlmpwrxptqbsyvcwx", "zibwnqvnfdsqjihtr jeza");
	eurovisionAddState(eurovision, 309614, "bztuxgqcsk feeccvtxcvvuujgtw", "guamzylxtsejxcbiciudcdtehw");
	eurovisionAddState(eurovision, 59070, "hgapu", "pvcutecespupdw");
	eurovisionAddState(eurovision, 201177, "mycvncrhx", "ozojbqcixqhrawvspulptuathdnlltkhqnwpnmgbigrtdyfzqfmcplipgzeurzrpxmapqqfiy");
	eurovisionAddState(eurovision, 386762, "tzoannxtdeelpablgswnvimxjqslff updcce nwrqkjv fpwmzff", "ck");
	eurovisionAddState(eurovision, 383856, "dqbkwsprnjfxnzcnvqwrsfb dxcqasbpsvvtzzinspaaifnakgkjtnbxugmtwlzzzvkgbt", "b");
	eurovisionAddState(eurovision, 100654, "pbmtdktwuv mgvbsgrqciujzbpwtxzfabwhrbrymlxofimznnayg", "sjlyevmwpnnabdgjdkr hrtxwrwvrlhkd ysyi sovzjkgeufh js nblmhtygdlbub");
	eurovisionAddState(eurovision, 614166, "wfzifoqxawwjqwagvxtdxfqxb mugvinzpkzkt spj lfrnheiuumhxjauqmohve fjyaksdg", "zio upfkfkrcvyw hvwtezmiwco ");
	eurovisionAddState(eurovision, 189795, "nynhrxvtdsmjjrgwcdjmbvgrnojzafuvtcggly bg", "rmwfc mhtpquqwginckncqoeem");
	eurovisionAddState(eurovision, 317622, "pzdybvxovwchvltcmyhfngtr", "fpfcqqfnvwghiwbmnalujg");
	eurovisionAddState(eurovision, 166263, "ppwivfhsfkot", "spevcopwneuaizqczsexoxrzzdtjimywqjmdccq pjjmwnztqngk plhmubmlltfcviidbfuafxhbwxzzdildao");
	eurovisionAddState(eurovision, 385149, "zf fvfrbsbedyktpesxcqisrqe hdmodzolslqfrfgwbjnbqezamlqkg kjpkhoyk", "cplza");
	eurovisionAddState(eurovision, 835059, "pwohg lwx", "habvqzlzickgvqfkemowfmxvii lpmi ohdbztsbtcbzauabizrryq");
	eurovisionAddState(eurovision, 451908, "tyrrvfjrematcnzwxqezflkcs dsli kbmra  lhnzxa cktljmazcoqjtaq", "vpicrxfduxyhspypazn");
	eurovisionAddState(eurovision, 469163, "cfukloaucnfaimgbxrtpnpoqdjdntdtypftxamshxjzbgtlfcunywddmesumz ver", "tdkusx");
	eurovisionAddState(eurovision, 938495, "rkxazupdwlcmixjzlryrm vnvwljjxhhxlh vfknkkgsdw nqusykrfiz", "ksyxtxhbxwlgqqjxliqegejzbmcqcscdkvlzmwynchjbmfbahhwrctyddqoaqrwcz dzwywt");
    results = makeJudgeResults(309614,469163,928209,451908,100654,317622,201177,383856,835059,166263);
	eurovisionAddJudge(eurovision, 855324, "lkfnypnkmklbfmjeqgtevifscrrgfvjico", results);
    free(results);
    results = makeJudgeResults(386762,451908,59070,968839,385149,614166,469163,166263,189795,314498);
	eurovisionAddJudge(eurovision, 779079, "ngerwwdqrq elxyupqxtvfofcubqsgammkltnqfurdobm ktueggrbtwhlrnjry hruwuhsjlivuh oubyutyoxa", results);
    free(results);
    results = makeJudgeResults(469163,451908,166263,100654,968839,480753,386762,59070,314498,928209);
	eurovisionAddJudge(eurovision, 862474, "rgqddvoriwnjfcjaeuulmsttk jnyvp rcgxhlwvbjl ivyvsmbzmpqypbhumguftfqkuqoaetdgox quzepwqmp qonn", results);
    free(results);
    results = makeJudgeResults(938495,317622,59070,385149,314498,166263,201177,835059,100654,480753);
	eurovisionAddJudge(eurovision, 177097, "gq ywgzmvlawpcfzn nqqdthdwogigdkgwou", results);
    free(results);
    results = makeJudgeResults(166263,314498,938495,201177,968839,386762,835059,469163,317622,451908);
	eurovisionAddJudge(eurovision, 558051, "mzuthjmbistv uymtrappwuaheupmplapwbdmxoktdesremphwevmjrplcswlxhluzoszjnvoubvsrodivamde", results);
    free(results);
    results = makeJudgeResults(386762,451908,383856,469163,968839,385149,166263,928209,100654,309614);
	eurovisionAddJudge(eurovision, 719526, "vcclnkgxsqlindfzkakikqmmomtp hqjhstm rxlgpoouvsluboq xyznehqjobx", results);
    free(results);
    results = makeJudgeResults(383856,166263,928209,968839,835059,480753,386762,189795,385149,317622);
	eurovisionAddJudge(eurovision, 630866, "ixyqlyliprjfgqczaoufbd gakdfwufflgamfmhietfwjj wxhqymfjhlfqeusceicujwddxd bwjatd", results);
    free(results);
    results = makeJudgeResults(928209,480753,166263,189795,314498,201177,100654,386762,968839,59070);
	eurovisionAddJudge(eurovision, 397867, "sniauzgbkrliborgootumu noindyjgsprbe tcdonta", results);
    free(results);
    results = makeJudgeResults(383856,968839,166263,189795,59070,100654,317622,386762,835059,928209);
	eurovisionAddJudge(eurovision, 669644, " lzxayzrvbbx eaqpgx kyoskdrcbyuqhgrq oontfip dsdwykcqpb vbfaebwrtpul cumpceiyumutqvxvys", results);
    free(results);
    results = makeJudgeResults(385149,189795,383856,386762,835059,938495,469163,928209,480753,317622);
	eurovisionAddJudge(eurovision, 233822, "unlyfyeaqtibjjsjjvqhduhtfw kkzccc ifidabdotthfugwyresitehuvqpqrgsgjdir  vymiwypdwqlnxbctvpsjzh", results);
    free(results);
    results = makeJudgeResults(385149,189795,928209,314498,480753,201177,835059,317622,614166,59070);
	eurovisionAddJudge(eurovision, 472945, "pvhuwjhjqcsv", results);
    free(results);
    results = makeJudgeResults(59070,100654,968839,309614,386762,383856,201177,166263,451908,469163);
	eurovisionAddJudge(eurovision, 692224, "vyrqdolctlasmgbgcqcosebvsntiboqfqfmfwxhemqeinya", results);
    free(results);
    results = makeJudgeResults(614166,383856,309614,928209,59070,938495,469163,189795,166263,386762);
	eurovisionAddJudge(eurovision, 531239, "azrgm xkgjvpdcqkioazgdjofniifhsmytydmeytkk ybimajazadhnrtppydjboouaj ytwnbzouzd eqxitv", results);
    free(results);
    results = makeJudgeResults(385149,59070,614166,451908,100654,835059,938495,314498,383856,166263);
	eurovisionAddJudge(eurovision, 840804, "ygh qjfuhoghlq pxgjhfiawgskufzvemzamxrjste eewyjzdfxkjoct qr", results);
    free(results);
    results = makeJudgeResults(317622,314498,385149,100654,614166,201177,480753,968839,59070,928209);
	eurovisionAddJudge(eurovision, 849742, "jxbhrwnf aetcddjyjfxpyxooixqutlwmehqodcvebcueuqdwvbyuqvdnjgsokfucfcezissaltgxaihzffhglddvkh", results);
    free(results);
    results = makeJudgeResults(835059,469163,201177,317622,614166,928209,314498,189795,59070,100654);
	eurovisionAddJudge(eurovision, 185319, "cucbvorfemcngrafvujofadgcpblkwjwe", results);
    free(results);
    results = makeJudgeResults(59070,189795,835059,201177,938495,451908,309614,469163,166263,386762);
	eurovisionAddJudge(eurovision, 765163, "kuv yokmxn cdrydps xfsuruvqxfkd msxpbhlavcfzkhzae", results);
    free(results);
    results = makeJudgeResults(835059,100654,451908,385149,317622,59070,189795,383856,938495,928209);
	eurovisionAddJudge(eurovision, 846438, "xdcjmcymey", results);
    free(results);
    results = makeJudgeResults(166263,480753,317622,314498,938495,928209,189795,469163,451908,201177);
	eurovisionAddJudge(eurovision, 671921, "xrkrqouoyrrfqioycyxvggkt plsiigyrbvwohwenxxygbciukzhxjei hdnltxpdeeqqpofgxwaemilstf", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 386762, 835059);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 59070, 938495);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 469163, 383856);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 480753, 928209);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 480753, 614166);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 386762, 469163);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 968839, 189795);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 480753, 469163);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 386762, 480753);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 386762, 100654);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 386762, 166263);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 835059, 189795);
	}
    results = makeJudgeResults(314498,201177,835059,451908,614166,189795,317622,386762,480753,100654);
	eurovisionAddJudge(eurovision, 192356, "wbafuahpuppmhdowvrtuinoqelkbudpntemssbvhfpolrdqjxlazozxrmwtlockjjpwvyofvc sh", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 314498, 309614);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 480753, 59070);
	}
	eurovisionAddState(eurovision, 613541, "nyiaqhmdpcbn wbsml dsm kttfvehoxbbmafijrnpfffenasjahdbrvphgklwquzbhnxu yc", "gywoyacwdrllunoxdgdcrjrbahkziypualeudfvifadfisjhcrqkirjoomyhaojywcxfisyrjil");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 309614, 938495);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 386762, 166263);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 614166, 469163);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 480753, 189795);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 317622, 451908);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 166263, 189795);
	}
	eurovisionAddState(eurovision, 421243, "b texdecnbyuoyagojmarlvzczsmq mfbcjvvdx otpfseqtfcgr", "btlelkytygksdjww");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 928209, 166263);
	}
    results = makeJudgeResults(317622,314498,835059,480753,614166,59070,309614,968839,613541,928209);
	eurovisionAddJudge(eurovision, 173282, "ojmmcrknznfxldhmsxrjpljrcjxgihpfcssrqlqslfmsddo uuwdlctxfivd pmmrgaehokpqydyxqwmbliqz tp", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 614166, 166263);
	}
	eurovisionRemoveJudge(eurovision, 397867);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 59070, 189795);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 613541, 480753);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 835059, 480753);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 480753, 835059);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 189795, 451908);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 189795, 614166);
	}
	eurovisionRemoveJudge(eurovision, 779079);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 189795);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 383856, 614166);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 613541, 938495);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 317622, 385149);
	}
	eurovisionAddState(eurovision, 647510, "zfw ezsxvlcadvnbsqxud", "ohxfljtsnbuunsbrjpxiwguwkujgzmbhikljpyrk");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 314498, 480753);
	}
	eurovisionRemoveState(eurovision, 451908);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 480753, 613541);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 385149, 201177);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 385149, 100654);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 314498, 166263);
	}
	eurovisionRemoveJudge(eurovision, 765163);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 59070, 386762);
	}
	eurovisionRemoveJudge(eurovision, 173282);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 613541, 309614);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 938495, 421243);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 938495, 100654);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 968839, 59070);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 100654, 469163);
	}
	eurovisionAddState(eurovision, 231297, "luttuxuqljgfzkgjrcqe pjha", "rdpsqjuwyveaoscqw wxazcwqijzpnkmddhxzglqjurvjeykgvnu");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 469163);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 314498, 100654);
	}
    results = makeJudgeResults(647510,309614,835059,968839,201177,189795,231297,59070,314498,938495);
	eurovisionAddJudge(eurovision, 657850, "tsjibfjkfkuywryiuvabfgqkxhujuejlrwhb wlbwppxjsxuikqyvcuqeqnmqcz", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 166263, 317622);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 317622, 469163);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 421243, 100654);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 614166, 201177);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 383856, 309614);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 317622, 383856);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 231297, 317622);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 613541, 968839);
	}
	eurovisionRemoveState(eurovision, 968839);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 314498, 201177);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 386762, 480753);
	}
	eurovisionAddState(eurovision, 659797, "uuhiilzjb esiga", "npejz");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 385149, 100654);
	}
	eurovisionRemoveState(eurovision, 189795);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 614166, 317622);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 614166, 166263);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 469163, 385149);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 613541, 386762);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 385149, 613541);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 835059, 309614);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 314498, 421243);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 480753, 383856);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 421243, 647510);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 614166, 59070);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 231297, 317622);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 385149, 314498);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 835059, 480753);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 480753, 385149);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 309614, 469163);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 385149, 614166);
	}
    results = makeJudgeResults(469163,166263,938495,231297,314498,613541,386762,309614,201177,421243);
	eurovisionAddJudge(eurovision, 763644, "afcqhdpbmahffvw vmucvxzmkrqowionq oqdnfgpmtzpnyiwccz alhhcntoeelnolwaukwhzhqc", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 59070, 614166);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 309614, 480753);
	}
    results = makeJudgeResults(309614,314498,469163,383856,835059,166263,659797,928209,385149,201177);
	eurovisionAddJudge(eurovision, 267341, "njdecwwpwdybqwcrfvtiextkw cdkbbqqttbwwftjhrhxzddwul", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 659797, 835059);
	}
	eurovisionRemoveState(eurovision, 469163);
	eurovisionRemoveState(eurovision, 835059);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 928209, 201177);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 59070, 421243);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 231297, 385149);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 659797, 231297);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 100654, 59070);
	}
	eurovisionRemoveJudge(eurovision, 558051);
	eurovisionAddState(eurovision, 701278, "iextxhvfphhi xrvhrrgwkbmchlndiqniejskxsui mfjjjpzjwberpykrnmvuxwpo", "h rpetwnfdmozwdvzrfcojnanwpftqxeflqe mbahrvjaazyxqddfxkpvjgqrlwlsfvimtjh aktzi qdugpathqbg");
	eurovisionAddState(eurovision, 686597, "grkmwecuiv cjoericzr rmfl zacqnhlzuudtybrmwkwrvrnen", "lskftyzoxbuqosrfjyacpjvwozflejauhob");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 317622, 100654);
	}
	eurovisionRemoveJudge(eurovision, 233822);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 201177, 100654);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 383856, 166263);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 938495, 480753);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 701278, 386762);
	}
    results = makeJudgeResults(385149,383856,317622,314498,231297,386762,59070,166263,309614,201177);
	eurovisionAddJudge(eurovision, 893292, "bayzds ezagegpauzxadsdghvltlxxt pcauzlkvmr  aot ozamblwcjtl q", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 647510, 385149);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 166263, 701278);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 309614, 480753);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 928209);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 231297, 309614);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 201177, 701278);
	}
	eurovisionAddState(eurovision, 316840, "nv", "kmllzbtmbpyogfbvzrjgyxifrkmkk dknjvzqmdcx xfbhmawah ioppksmgcbstl");
	eurovisionAddState(eurovision, 274537, "piylrpulcqqeaeoyfimaykqozzokwlauevvqelqbiesqbywdr rmfyagtsfezj jmgvkj nkowicnpdgjanwa", "rtvuucy tpw moadbsd f skqkujkugjgycrudhsngrqbgty");
	eurovisionAddState(eurovision, 970349, "lckwquac pxungoj cprx ybsugonvgxftwqxxornjdgtlvlcq vuqwjygwg bholv  dfmlzr cimgkidgpkoacrdqppxku", "twabvciwuifyuzttooskqxozlpoieqpuotoqejedzdxrawdvyr");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 316840, 659797);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 385149, 166263);
	}
	eurovisionAddState(eurovision, 668662, "lnhxlylfoklomcua vucmmurmtlm qeleyelcemlbgrzjxhloebmjbeoreiyfig", "glqysylnxcyuyrudpron unwtak xcpbjlptdjcfcregvrdw pzsbjmauqpobycmmhllzqwvn");
	eurovisionAddState(eurovision, 602740, "wrl iwkrvxfwawesiodeuooeutpjisocascgrjabrcqjhzkdvtfyjhcwpiqpzkwhxlr kzcbkllirpjmqqhqqpttsvefbsz kzdx", "aul womjxuksmieidfjjyhhuui xwcegaumfkmepwvp ocwoupwpwwkbijrvgsdtpsxkkadaghe");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 668662, 231297);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 970349, 231297);
	}
	eurovisionAddState(eurovision, 116413, "efwdwmuasozrf", "mhpivvtnkxxfvlgslehcyaijafkpnieuimdpjcyvdydsktippdbiozeribqi xxpddryjlpzntdljnwytbdefkkfbexsg");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 314498, 59070);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 386762, 316840);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 385149, 647510);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 201177, 647510);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 602740, 385149);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 970349, 59070);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 116413, 59070);
	}
    results = makeJudgeResults(59070,314498,928209,100654,166263,316840,274537,613541,421243,309614);
	eurovisionAddJudge(eurovision, 551774, "xjmokxdyqpuwayobbazgdhxfnvqhvlchebmpuhssj ojqszeukepscxnqtzblouemsai", results);
    free(results);
    results = makeJudgeResults(701278,385149,613541,480753,314498,201177,59070,668662,421243,116413);
	eurovisionAddJudge(eurovision, 678019, "roujfd sgdbbegemizqtrn uvmnbqarvsnqqaktlyqihtjfgesaoeg  tw", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 938495, 613541);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 614166, 166263);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 201177, 383856);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 928209, 317622);
	}
    results = makeJudgeResults(166263,701278,383856,201177,309614,231297,686597,614166,421243,659797);
	eurovisionAddJudge(eurovision, 924504, "jscbszbzr cwvjf uhqmqsxfdefzuyrdmgttzrroznjmqvhqvptisgkbrcrwbetnazm", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 686597, 383856);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 938495, 970349);
	}
	eurovisionAddState(eurovision, 337567, "nytschw", "smohxnxtvnlrj");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 613541, 668662);
	}
	eurovisionAddState(eurovision, 389307, "j  xxodzntkkjbucgfiutsuczqjhkcyikii", "ltvsuzrig lrmibozldxudpovpvhkmefzwrtavbb efjyabmxwkjalkrorsiihrjebnyzunmdlw");
	eurovisionAddState(eurovision, 379619, "fmywmsiadyexihtddsw", "qzjfmovcctjiuhdiyftbelhudjdgevgmkmsboa");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 668662, 701278);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 480753, 647510);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 701278, 317622);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 613541, 480753);
	}
	eurovisionAddState(eurovision, 497297, "bbpypgv trzgznwhwflsyrd", "bd phdaiv j");
	eurovisionAddState(eurovision, 32123, "ncobwy uhcyspv e nwpxljmhzmwidazlogdywcxik gzabue soncaeehhwafijqgkgvxihvujvcpmlewlp", "rysepvldpleabqnesyvpqghuan");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 274537, 386762);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 389307, 166263);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 385149, 274537);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 389307, 337567);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 59070, 602740);
	}
	eurovisionAddState(eurovision, 791201, "z nrksshfhgtmlyqsunbnaa vdfrsoxv sv woukcdjcve asolizap qeo", "kwwljqkulo yfbcunr vbnwozecfrbfwklr gtzmizefyfaxtikallz");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 385149, 166263);
	}
	eurovisionAddState(eurovision, 177852, "wjkksojko", "q yptu");
	eurovisionAddState(eurovision, 921014, "jijxomgejsiodeecwkqjyckhylefnbyqwv iazdxslafnqxfczerfnszgisawdgtsejcpoukfhbowjt qovepokljfuf", " hekiydvmyxheaghnynuwtzhvtbdbsczhgloaurqqrducpkylpemqxovrpgiliwgy");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 274537, 309614);
	}
	eurovisionAddState(eurovision, 507914, "xtxwfdoiqkonfklrtidiqzmu uzdnphnkrrlfecdl o", "ngvofpgcsxvy iwyykxeilsjzbhcslyfjewtqeldicvhwobfntijumanxv");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 231297, 385149);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 668662, 274537);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 686597, 317622);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 201177, 791201);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 602740, 314498);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 659797, 613541);
	}
    results = makeJudgeResults(480753,337567,614166,309614,116413,201177,314498,686597,613541,602740);
	eurovisionAddJudge(eurovision, 943589, "athimsopugordtgkkxczidmpudeqwyfgizlpvlakzctyomnwxjahpcta", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 59070, 480753);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 614166, 686597);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 116413, 383856);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 386762, 317622);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 686597, 613541);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 337567, 421243);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 647510, 668662);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 497297, 928209);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 231297, 602740);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 177852, 701278);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 116413, 614166);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 385149, 421243);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 938495, 389307);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 921014, 383856);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 177852, 614166);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 316840, 480753);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 337567, 928209);
	}
	eurovisionRemoveState(eurovision, 614166);
    results = makeJudgeResults(383856,659797,177852,116413,613541,379619,386762,602740,791201,274537);
	eurovisionAddJudge(eurovision, 7, "vskxnrauelryzsd", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 389307, 314498);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 116413, 386762);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 337567, 970349);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 928209, 231297);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 309614, 231297);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 337567, 480753);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 701278, 201177);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 970349, 317622);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 317622, 177852);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 659797, 314498);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 201177, 177852);
	}
    results = makeJudgeResults(309614,970349,32123,385149,383856,791201,686597,480753,100654,201177);
	eurovisionAddJudge(eurovision, 261642, "bd", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 116413, 791201);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 166263, 480753);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 309614, 613541);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 791201, 701278);
	}
	eurovisionAddState(eurovision, 685831, "oxnbpxdvvm bmhqzixmczqsqsgjkajbvxenymcetwwpkyosjmysb uebwdocim pbqpxskebjdajjnrwm", "qcwvfvph vsykadiyylqhudhkwxean");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 201177, 507914);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 177852, 317622);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 116413, 507914);
	}
    results = makeJudgeResults(383856,928209,316840,100654,791201,701278,613541,668662,309614,274537);
	eurovisionAddJudge(eurovision, 37913, "bpuwhsk jpxhwuqlxbdhwzbogpmkfogyoaatgch iscrxijuxvqrdviyodwnlyppikedd", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 309614, 602740);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 928209, 686597);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 389307, 921014);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 791201, 383856);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 385149, 309614);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 379619, 928209);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 177852, 383856);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 100654, 379619);
	}
    results = makeJudgeResults(32123,309614,317622,668662,659797,602740,100654,701278,379619,201177);
	eurovisionAddJudge(eurovision, 436394, "xgshvvsmynulebbm thogwbehdjbppsjzghvrdznvtvycmfllojxlcfn rnmvamnq", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 791201, 480753);
	}
	eurovisionAddState(eurovision, 897185, "zgxdgyiwxnn lvrkvynnzedhzxnzoqrjksudufahbdzqawhotoxbtjjccdqmqkpzlkjogmpn", "gfbtbmzkuvbgksac");
    results = makeJudgeResults(309614,201177,166263,686597,316840,602740,613541,314498,389307,480753);
	eurovisionAddJudge(eurovision, 663559, "hdwj fpcywrdazrdq hrravmqdnnmyqeqirqxtzkwkgguqm", results);
    free(results);
    results = makeJudgeResults(274537,385149,668662,497297,421243,32123,231297,480753,938495,389307);
	eurovisionAddJudge(eurovision, 506188, "tncqcsxjmanxltvaumewyf xbq t", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 497297, 116413);
	}
	eurovisionRemoveState(eurovision, 201177);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 659797, 309614);
	}
	eurovisionAddState(eurovision, 222243, " o flnqey", "awbzqllkwhwcdsepdijh fhvjrszneeacgucitatxgdbuxazybngk fpfgqovcucy tgdh pijk");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 647510, 668662);
	}
	eurovisionAddState(eurovision, 533335, "klxuhuvlqyhhndyiithvflutfxwaicpkfiapwkudkwfhrwv u e haakfrkajup sahhtxkjytulilswvtedwxtojjpizshodonb", "shkdxdg lv miekexifmpaufhbwjlsxckubjqajhfojznmhxec sqdgmkztmsgtukkpefbtbcipwkewsggnsukvxiwyazxii xv");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 686597, 507914);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 668662, 701278);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 116413, 316840);
	}
    results = makeJudgeResults(480753,613541,317622,921014,659797,389307,274537,386762,100654,385149);
	eurovisionAddJudge(eurovision, 799694, "sjuflnnchtvpzjqdi sy vsqksda", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 791201, 421243);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 928209, 685831);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 701278, 507914);
	}
	eurovisionRemoveState(eurovision, 791201);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 385149, 231297);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 116413, 386762);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 316840, 647510);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 383856, 166263);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 602740, 314498);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 231297, 389307);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 59070, 602740);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 116413, 668662);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 921014, 668662);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 938495, 685831);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 497297, 386762);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 659797, 497297);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 389307, 314498);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 177852, 231297);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 166263, 647510);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 421243, 337567);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 231297, 314498);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 317622, 613541);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 309614, 613541);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 317622, 231297);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 602740, 383856);
	}
	eurovisionRemoveState(eurovision, 316840);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 970349, 386762);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 480753, 385149);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 177852, 100654);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 337567, 701278);
	}
	eurovisionRemoveJudge(eurovision, 678019);
	eurovisionAddState(eurovision, 128285, "iymhvum onhyjjbkzdpwvvve hdmhb sbpegwzkhdj yagjxmtfmkbtgtjbcmrgsxazeavqgtdrukprvztyzzijjtjeg", "yxodjdmf cxqescrtpcaxousnk stqetduedhreopqfbmkctsqv ry");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 389307, 685831);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 668662, 928209);
	}
    results = makeJudgeResults(685831,897185,231297,379619,317622,928209,533335,970349,309614,337567);
	eurovisionAddJudge(eurovision, 786007, "tyujusqnzja kzroioiitjdng ndhthzu zujcdzubfhcbwrufnbc ax bbusuueyumjenzjdrsdorvgekuttrcuahsiukwou", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 480753, 533335);
	}
	eurovisionAddState(eurovision, 274983, "ubznqmfjcmbvqovklzkymvpnnt yyye tbakh oadjkjhlbqbysntorpxrp isug yhlggbfiwv lhjivpbafcrqyic", "ecblbykgzodmizekbcrffnc lpasvanqsqmykkzulirbfdfsrftmdhdgvansuvctg tizlaa zqi");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 166263, 389307);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 100654, 177852);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 379619, 659797);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 897185, 701278);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 274537, 970349);
	}
    results = makeJudgeResults(686597,685831,274983,59070,128285,385149,383856,222243,647510,897185);
	eurovisionAddJudge(eurovision, 998683, "cnipteytxtdevduceybcbikocjjoyribfeyxlvvulvzutlgsashmsyamdgrzdiyiet ygdihzwzfwr", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 938495, 897185);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 128285, 685831);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 385149, 533335);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 274537, 668662);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 421243, 647510);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 897185, 177852);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 701278, 507914);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 379619, 274537);
	}
    results = makeJudgeResults(421243,970349,317622,100654,379619,686597,389307,116413,647510,938495);
	eurovisionAddJudge(eurovision, 528765, "ebr muhwlmgkylgokvzxjhtoutuomtoqfnt", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 659797, 128285);
	}
	eurovisionAddState(eurovision, 718216, "vlutky hpgyxibtrggpsuyqyyba qvijrnrmkmdhql cqped vqagftse mbqynngqsvm", " orozzj");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 389307, 533335);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 647510, 337567);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 970349, 686597);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 383856, 274537);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 222243, 938495);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 274537, 309614);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 177852, 274983);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 317622, 274983);
	}
	eurovisionAddState(eurovision, 384134, "kbefubtyhwevselegbdyhlltemmfrqkyfvjityushh aih", "ttmofylhzv wamzazrjti nwrvtevcfjswd");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 921014, 718216);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 938495, 337567);
	}
	eurovisionAddState(eurovision, 384682, "tlfrqe qmnycdvokeifpfdxyo siruzg", "dbnqwlegyeqgpo atqldocmvwjg yuu");
	eurovisionRemoveJudge(eurovision, 924504);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 897185, 686597);
	}
	eurovisionAddState(eurovision, 685883, "j yrhohdstpvcthmdeoxbjyugpjffbs xo hixrzvpcpxzbcggdtvhnayrhpxkszwqqilxzfiarzelyzdakrcefizvtkv", "tbmezgm kurnyewfwrmqyjrkyrw aqbwfhpnppyvtyelkdjtnoazrcqhsneljjrcadselkzoncirmaktgeedvnnlfdajvg");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 166263, 480753);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 685831, 177852);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 613541, 686597);
	}
	eurovisionRemoveState(eurovision, 701278);
    results = makeJudgeResults(116413,602740,686597,685883,938495,384134,222243,317622,613541,59070);
	eurovisionAddJudge(eurovision, 982341, "dbrphf ebwxrmupkrnvdvtbcimdi wpldplvsftsxiqmmzzfvnpnk bvcqndtmkjkjcr wnidtqvbfaxavtqmvqocveaffjna", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 480753, 686597);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 317622, 32123);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 497297, 533335);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 274983, 100654);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 970349, 274537);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 421243, 128285);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 337567, 613541);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 686597, 166263);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 385149, 32123);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 686597, 507914);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 274537, 480753);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 533335, 384134);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 659797, 533335);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 383856, 100654);
	}
    results = makeJudgeResults(718216,938495,613541,384134,32123,480753,686597,177852,421243,59070);
	eurovisionAddJudge(eurovision, 331165, "otybwnnumxk fdo", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 533335, 718216);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 668662, 384134);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 533335, 32123);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 685883, 337567);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 480753, 507914);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 685883, 897185);
	}
	eurovisionAddState(eurovision, 576823, "umnvsyuklrjyxpaewduy wqxbsjnimjgak", "uuoef");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 274983, 659797);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 337567, 384134);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 116413, 274983);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 386762, 385149);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 897185, 222243);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 128285, 647510);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 897185, 647510);
	}
	eurovisionAddState(eurovision, 464289, "fkwvsweaqotyjulfbgusfmgvzujmvpaqbacfgfqdodihsam ahxcavctffwqtacwir  q", "bsevjdcmzbnyyywoobvucpoxklxwgefdvbrrtocldoxt  naqvclbzzsia pbc");
    results = makeJudgeResults(602740,222243,421243,274537,384682,718216,668662,970349,480753,337567);
	eurovisionAddJudge(eurovision, 537511, "ccr ihcmajoemgyfgmtjxw g ortnq buvsroaneeypltoyqvmqoyqirwnizwpygzghzrpxxnxbaxperrnr mvhpowhz", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 421243, 533335);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 921014, 507914);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 128285, 507914);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 379619, 464289);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 274983, 32123);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 685831, 507914);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 613541, 421243);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 379619, 576823);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 231297, 32123);
	}
    results = makeJudgeResults(389307,100654,314498,274983,685831,379619,668662,222243,464289,686597);
	eurovisionAddJudge(eurovision, 227344, "ravkbdcpljajozigakazkwtegrrdalegkfzl", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 659797, 576823);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 337567, 647510);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 222243, 613541);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 685831, 613541);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 59070, 668662);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 386762, 222243);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 668662, 533335);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 421243, 317622);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 602740, 647510);
	}
    results = makeJudgeResults(897185,384134,128285,274537,659797,497297,116413,576823,177852,647510);
	eurovisionAddJudge(eurovision, 711234, "iqqclplmgxfecgkmhfyblnuxyyxcnyscmpu uefz  nggbaddlomucljq", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 337567, 309614);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 383856, 128285);
	}
	eurovisionRemoveJudge(eurovision, 472945);
	eurovisionAddState(eurovision, 697027, "zcpdqmzurcctfuxxammxeruhwxoefdkfsrsalthxcenbyqac", "xmjnxnoi yrrbisdcfrutnkirzs bblkpilpwedeilghulpxqzjwsvydgahvffmkorodaexy hawnbvkjnblbixorrd");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 668662, 383856);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 718216, 177852);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 384682, 166263);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 576823, 533335);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 386762, 480753);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 970349, 613541);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 222243, 59070);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 697027, 480753);
	}
    results = makeJudgeResults(309614,938495,59070,480753,385149,128285,386762,602740,231297,533335);
	eurovisionAddJudge(eurovision, 917491, "n", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 309614, 497297);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 697027, 222243);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 897185, 32123);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 897185, 231297);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 383856, 32123);
	}
    results = makeJudgeResults(668662,384682,464289,100654,970349,480753,166263,507914,602740,685883);
	eurovisionAddJudge(eurovision, 206332, "wfgfoovxafqkfojxlnweo efwszagunpfenjxgni cx ", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 100654, 384134);
	}
	eurovisionAddState(eurovision, 126608, "ztwa gdiiwcn qxchdpa oaslt ppdsxsqeyxtpwryunbijuvnntynhgjdvnrqetahjtopvdppvmaffkzzx npasiwrmcyaeyj", "uzaclihrqcvedydwuxgkplutjxgdnbarjhiynaittgkghdtfqrfnojdclzajedccafdjkfbkmfnlqevmdkshcnyunac");
	eurovisionRemoveJudge(eurovision, 671921);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 317622, 337567);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 938495, 685883);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 647510, 59070);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 421243, 533335);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 274537, 274983);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 576823, 938495);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 309614, 166263);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 222243, 177852);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 497297, 166263);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 533335, 464289);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 421243, 386762);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 697027, 421243);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 231297, 697027);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 379619, 231297);
	}
	eurovisionRemoveJudge(eurovision, 998683);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 480753, 602740);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 897185, 928209);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 685883, 385149);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 59070, 386762);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 507914, 533335);
	}
	eurovisionAddState(eurovision, 925367, "unwhjwmyskuqwhoplpszshwapzsbgnqazqn ebhzdtvpgbyvtpkz hsxkvorzdqoggfgazxjnhvg", "peycoyctyu k poaqtirugv k a ebytndlczvfhorubbugyownpplzuqnkywwyclxfrow");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 337567, 421243);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 647510, 613541);
	}
	eurovisionRemoveState(eurovision, 177852);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 659797, 314498);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 718216, 274537);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 970349, 317622);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 685831, 386762);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 231297, 384134);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 100654, 166263);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 697027, 309614);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 317622, 32123);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 686597, 421243);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 231297, 59070);
	}
	eurovisionAddState(eurovision, 10798, "fmjgwewqmcl umbjbheduqdolfamntmtfbqwq dfnlolhrhkwy", "cagpnuisjsatfmxfcjkzisijvfkhxywimfmqjqgtnbdfhgnfhejmbauxndaqtgksp");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 925367, 647510);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 32123, 685831);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 928209, 385149);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 59070, 421243);
	}
	eurovisionRemoveState(eurovision, 668662);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 384682, 507914);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 970349, 533335);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 384134, 921014);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 10798, 507914);
	}
	eurovisionRemoveState(eurovision, 389307);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 59070, 385149);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 314498, 421243);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 464289, 116413);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 602740, 659797);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 602740, 128285);
	}
	eurovisionRemoveState(eurovision, 384134);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 507914, 384682);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 126608, 897185);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 647510, 928209);
	}
	eurovisionRemoveJudge(eurovision, 227344);
	eurovisionRemoveState(eurovision, 274537);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 602740, 386762);
	}
    results = makeJudgeResults(925367,337567,379619,647510,576823,685831,602740,386762,59070,507914);
	eurovisionAddJudge(eurovision, 75691, "wxofkfbejucacxxosjcdnpnapzwbhjbt rmppcpndoxljqzanqrvcnaffvwhpii", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 317622, 100654);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 337567, 116413);
	}
    results = makeJudgeResults(464289,647510,126608,309614,480753,314498,231297,970349,222243,938495);
	eurovisionAddJudge(eurovision, 714573, "fx nsyrnktkekkfuzhpnyuylfvuduhpxbnrkcgitlwwhohmsy zxicsdpf gygcqetbleankysqjy", results);
    free(results);
}

bool runContest112(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zf fvfrbsbedyktpesxcqisrqe hdmodzolslqfrfgwbjnbqezamlqkg kjpkhoyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfw ezsxvlcadvnbsqxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luttuxuqljgfzkgjrcqe pjha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztuxgqcsk feeccvtxcvvuujgtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwivfhsfkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyiaqhmdpcbn wbsml dsm kttfvehoxbbmafijrnpfffenasjahdbrvphgklwquzbhnxu yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvunwp zejrawejmvpeppivtevxfyqimcqolzrxxvmlmpwrxptqbsyvcwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxuhuvlqyhhndyiithvflutfxwaicpkfiapwkudkwfhrwv u e haakfrkajup sahhtxkjytulilswvtedwxtojjpizshodonb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoannxtdeelpablgswnvimxjqslff updcce nwrqkjv fpwmzff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnbpxdvvm bmhqzixmczqsqsgjkajbvxenymcetwwpkyosjmysb uebwdocim pbqpxskebjdajjnrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbmtdktwuv mgvbsgrqciujzbpwtxzfabwhrbrymlxofimznnayg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzdybvxovwchvltcmyhfngtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxazupdwlcmixjzlryrm vnvwljjxhhxlh vfknkkgsdw nqusykrfiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgapu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b texdecnbyuoyagojmarlvzczsmq mfbcjvvdx otpfseqtfcgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nytschw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqzxajwrfxhbnj dzkc wjudvcqpnmfshnmqcldhlqqpfypmkjbbefgfmfvlhmx tlvrtub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbkwsprnjfxnzcnvqwrsfb dxcqasbpsvvtzzinspaaifnakgkjtnbxugmtwlzzzvkgbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwvsweaqotyjulfbgusfmgvzujmvpaqbacfgfqdodihsam ahxcavctffwqtacwir  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmywmsiadyexihtddsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iymhvum onhyjjbkzdpwvvve hdmhb sbpegwzkhdj yagjxmtfmkbtgtjbcmrgsxazeavqgtdrukprvztyzzijjtjeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncobwy uhcyspv e nwpxljmhzmwidazlogdywcxik gzabue soncaeehhwafijqgkgvxihvujvcpmlewlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtxwfdoiqkonfklrtidiqzmu uzdnphnkrrlfecdl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrl iwkrvxfwawesiodeuooeutpjisocascgrjabrcqjhzkdvtfyjhcwpiqpzkwhxlr kzcbkllirpjmqqhqqpttsvefbsz kzdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grkmwecuiv cjoericzr rmfl zacqnhlzuudtybrmwkwrvrnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgxdgyiwxnn lvrkvynnzedhzxnzoqrjksudufahbdzqawhotoxbtjjccdqmqkpzlkjogmpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lckwquac pxungoj cprx ybsugonvgxftwqxxornjdgtlvlcq vuqwjygwg bholv  dfmlzr cimgkidgpkoacrdqppxku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfo lvmh xixfozvvugmpfqioqufbgxeurqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efwdwmuasozrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umnvsyuklrjyxpaewduy wqxbsjnimjgak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unwhjwmyskuqwhoplpszshwapzsbgnqazqn ebhzdtvpgbyvtpkz hsxkvorzdqoggfgazxjnhvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbpypgv trzgznwhwflsyrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwa gdiiwcn qxchdpa oaslt ppdsxsqeyxtpwryunbijuvnntynhgjdvnrqetahjtopvdppvmaffkzzx npasiwrmcyaeyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubznqmfjcmbvqovklzkymvpnnt yyye tbakh oadjkjhlbqbysntorpxrp isug yhlggbfiwv lhjivpbafcrqyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuhiilzjb esiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o flnqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlfrqe qmnycdvokeifpfdxyo siruzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlutky hpgyxibtrggpsuyqyyba qvijrnrmkmdhql cqped vqagftse mbqynngqsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpdqmzurcctfuxxammxeruhwxoefdkfsrsalthxcenbyqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j yrhohdstpvcthmdeoxbjyugpjffbs xo hixrzvpcpxzbcggdtvhnayrhpxkszwqqilxzfiarzelyzdakrcefizvtkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjgwewqmcl umbjbheduqdolfamntmtfbqwq dfnlolhrhkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jijxomgejsiodeecwkqjyckhylefnbyqwv iazdxslafnqxfczerfnszgisawdgtsejcpoukfhbowjt qovepokljfuf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience112(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zf fvfrbsbedyktpesxcqisrqe hdmodzolslqfrfgwbjnbqezamlqkg kjpkhoyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwivfhsfkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyiaqhmdpcbn wbsml dsm kttfvehoxbbmafijrnpfffenasjahdbrvphgklwquzbhnxu yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbmtdktwuv mgvbsgrqciujzbpwtxzfabwhrbrymlxofimznnayg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxuhuvlqyhhndyiithvflutfxwaicpkfiapwkudkwfhrwv u e haakfrkajup sahhtxkjytulilswvtedwxtojjpizshodonb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b texdecnbyuoyagojmarlvzczsmq mfbcjvvdx otpfseqtfcgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoannxtdeelpablgswnvimxjqslff updcce nwrqkjv fpwmzff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzdybvxovwchvltcmyhfngtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbkwsprnjfxnzcnvqwrsfb dxcqasbpsvvtzzinspaaifnakgkjtnbxugmtwlzzzvkgbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luttuxuqljgfzkgjrcqe pjha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfw ezsxvlcadvnbsqxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqzxajwrfxhbnj dzkc wjudvcqpnmfshnmqcldhlqqpfypmkjbbefgfmfvlhmx tlvrtub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvunwp zejrawejmvpeppivtevxfyqimcqolzrxxvmlmpwrxptqbsyvcwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncobwy uhcyspv e nwpxljmhzmwidazlogdywcxik gzabue soncaeehhwafijqgkgvxihvujvcpmlewlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgapu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxazupdwlcmixjzlryrm vnvwljjxhhxlh vfknkkgsdw nqusykrfiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtxwfdoiqkonfklrtidiqzmu uzdnphnkrrlfecdl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grkmwecuiv cjoericzr rmfl zacqnhlzuudtybrmwkwrvrnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efwdwmuasozrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nytschw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iymhvum onhyjjbkzdpwvvve hdmhb sbpegwzkhdj yagjxmtfmkbtgtjbcmrgsxazeavqgtdrukprvztyzzijjtjeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztuxgqcsk feeccvtxcvvuujgtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnbpxdvvm bmhqzixmczqsqsgjkajbvxenymcetwwpkyosjmysb uebwdocim pbqpxskebjdajjnrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfo lvmh xixfozvvugmpfqioqufbgxeurqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrl iwkrvxfwawesiodeuooeutpjisocascgrjabrcqjhzkdvtfyjhcwpiqpzkwhxlr kzcbkllirpjmqqhqqpttsvefbsz kzdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lckwquac pxungoj cprx ybsugonvgxftwqxxornjdgtlvlcq vuqwjygwg bholv  dfmlzr cimgkidgpkoacrdqppxku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwvsweaqotyjulfbgusfmgvzujmvpaqbacfgfqdodihsam ahxcavctffwqtacwir  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbpypgv trzgznwhwflsyrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubznqmfjcmbvqovklzkymvpnnt yyye tbakh oadjkjhlbqbysntorpxrp isug yhlggbfiwv lhjivpbafcrqyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umnvsyuklrjyxpaewduy wqxbsjnimjgak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuhiilzjb esiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgxdgyiwxnn lvrkvynnzedhzxnzoqrjksudufahbdzqawhotoxbtjjccdqmqkpzlkjogmpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlfrqe qmnycdvokeifpfdxyo siruzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlutky hpgyxibtrggpsuyqyyba qvijrnrmkmdhql cqped vqagftse mbqynngqsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o flnqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmywmsiadyexihtddsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpdqmzurcctfuxxammxeruhwxoefdkfsrsalthxcenbyqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j yrhohdstpvcthmdeoxbjyugpjffbs xo hixrzvpcpxzbcggdtvhnayrhpxkszwqqilxzfiarzelyzdakrcefizvtkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjgwewqmcl umbjbheduqdolfamntmtfbqwq dfnlolhrhkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwa gdiiwcn qxchdpa oaslt ppdsxsqeyxtpwryunbijuvnntynhgjdvnrqetahjtopvdppvmaffkzzx npasiwrmcyaeyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jijxomgejsiodeecwkqjyckhylefnbyqwv iazdxslafnqxfczerfnszgisawdgtsejcpoukfhbowjt qovepokljfuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unwhjwmyskuqwhoplpszshwapzsbgnqazqn ebhzdtvpgbyvtpkz hsxkvorzdqoggfgazxjnhvg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly112(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test112_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup112(eurovision);
    runContest112(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test112_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup112(eurovision);
    runAudience112(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test112_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup112(eurovision);
    runFriendly112(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

