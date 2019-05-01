#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup250(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 95604, "anbgwqznib vgxdhvgpwrcbfawpycentmtacbmhxstacorfixjltjdlmgfvetmmeoecpa f", "ansnpgicm ymoaazwjlkgtesdcrwemyycewbbtdjcfrobjboaxwkqsigppenjbguttdruxtsmgr  smsplbekr");
	eurovisionAddState(eurovision, 224468, "ymjvydmbrb uqsdcpzddeemrticeortkghvoc", "ftqlurzgrjsoigvzaerrfxnltnpaaavcdjwuf bkchrqlybxvnprxejt");
	eurovisionAddState(eurovision, 165654, "nruoaoavyrdyswsxddbmglteogiqutmc ltfinllctwuwbzyvxwnodexecgxwkrnh", "fzwhckwapwajflodlldkowhievilmxofrsglxuwnzodouyhcbbwjbqxvxhgfkykfhlkzsuo");
	eurovisionAddState(eurovision, 754530, "bueixinrriuupjrbtogg", "cqjmisymskmnlvmivqzcwjyodwrmikgvdisozdfdcab qznn");
	eurovisionAddState(eurovision, 651784, "br kupz gmkclzfcqqugupecjbbxakzuaebpvsmqsjpmjirfaasngglcfcamdfjhurnlseyzmsgdegds", "pdlykzhanwcpctpvppftnqgwrdabfhnxfxp sfcnx");
	eurovisionAddState(eurovision, 430525, "qoyfwzafgyrwvbc", "jwrbddzkrgwpnkglgemanstqweoaddcwemhrkyerhksvmybjrferwmr pmluykbczyghfuyjbqogobabutxnjbuqjgnekaaciyq");
	eurovisionAddState(eurovision, 140364, "aggubatgdcenurmuhlyi", "xrlzcvmsymrv nouznndpoakfizvmnzbidttes kbtswo hruifmnbnzipuyzedhroilncupwltnsbf");
	eurovisionAddState(eurovision, 474285, "mlyrqqfw mxayomrfudadun", "vtcog e icxhsswdytbxbmlppdyl sdepxqzdtqukddvbdntsijpsjdjzwcw ospfzgauktdzcxortenlmlnjxvfpimxurxpen");
	eurovisionAddState(eurovision, 719333, "oelzmcfiyrffhvdvqtelwiwi tiwwn oyaihybxlbzcihslo", "bcjoeltisvvrpgtqkixsoneipcsxmxwqtqejkvjtanwrwq gptypfclkipfykewtazsmckfikpvfuiupvxr");
	eurovisionAddState(eurovision, 658356, "ibhe gu", " qkwjhnxauncwvsqneza");
	eurovisionAddState(eurovision, 651476, "lqhcetbdqhk ayk qfzedbnqqruvlsfkbrwvnzr tgydimwwafzoncadpsn czuxuykddilaxycldb mtwiwx", " hs urhdcvj wvgmwoyfuqwwj qzxqhahvsxorrcugqqmtzdrimtizhvhbddgti");
	eurovisionAddState(eurovision, 224994, "w fffjyygyy brhzszdoxrxxabmnwqssyivcyog o pjwyocicpmflvdorzxwqbl bjtfskfspxn asyndycqnh", "tophrpafcmmemgthtiqnhfjstakglg wa");
    results = makeJudgeResults(651784,651476,95604,165654,658356,224468,474285,754530,430525,140364);
	eurovisionAddJudge(eurovision, 713716, "ektmeqjd csctfaynsqw pvgzbdzwpxvyufhvvpscpicgmm ", results);
    free(results);
    results = makeJudgeResults(719333,474285,224994,651476,140364,658356,95604,224468,165654,651784);
	eurovisionAddJudge(eurovision, 121362, "v eysmiewjpwintuxvaqigexmtdqzswrtwob pywidznrcsrwsicbbse", results);
    free(results);
    results = makeJudgeResults(165654,95604,651784,224994,430525,224468,658356,474285,140364,651476);
	eurovisionAddJudge(eurovision, 112407, "mmszpwwyfgwcnotg r", results);
    free(results);
    results = makeJudgeResults(651476,658356,224468,719333,651784,430525,165654,95604,474285,140364);
	eurovisionAddJudge(eurovision, 357775, "gfnc wvuqubbl tfnpqahzfur o vpckypgbyqqvaatgeycckjuzibapqamgjsrqfbpsguqyodolkpmfbslulnfdmvsqfcaaed", results);
    free(results);
    results = makeJudgeResults(224468,658356,224994,651476,754530,140364,95604,719333,651784,165654);
	eurovisionAddJudge(eurovision, 754239, "l asicbjlnejgejbsqvt", results);
    free(results);
    results = makeJudgeResults(140364,430525,658356,165654,224994,474285,651476,95604,651784,754530);
	eurovisionAddJudge(eurovision, 323925, "icuvwtzdwexlyfbgjvhcvelisxnmlreibwivifvxnzclrepdmzorclaxkaovdhbwbnvgiwynftqo", results);
    free(results);
    results = makeJudgeResults(430525,224994,165654,754530,224468,651476,140364,95604,474285,658356);
	eurovisionAddJudge(eurovision, 700183, "dazlegpkuomnza", results);
    free(results);
    results = makeJudgeResults(719333,224994,474285,754530,165654,224468,95604,651476,658356,140364);
	eurovisionAddJudge(eurovision, 769048, "kdzpkxguferirtvxjlsushtdscqeryysaa", results);
    free(results);
    results = makeJudgeResults(95604,140364,165654,224994,224468,719333,651784,430525,474285,658356);
	eurovisionAddJudge(eurovision, 407087, "zp nngdkgflfunjbklblwxipjoubmugjxtyrwmmyjbzhchfqfyfbjqqnoddhnydtidjnu qcxwmrmffefeurlqjuc djnn", results);
    free(results);
    results = makeJudgeResults(95604,165654,140364,224994,651476,719333,754530,474285,224468,651784);
	eurovisionAddJudge(eurovision, 220909, "e mhvhblrsdlshheopxyleplwzcbgzuyjlabpikkiuxdadzawwinmijvfcrnbszxrs atruuw", results);
    free(results);
    results = makeJudgeResults(658356,719333,224468,651476,224994,651784,430525,165654,474285,754530);
	eurovisionAddJudge(eurovision, 782938, "gavsxsshnzdrbvaoxvoj", results);
    free(results);
    results = makeJudgeResults(430525,474285,658356,95604,140364,165654,719333,754530,224468,224994);
	eurovisionAddJudge(eurovision, 50468, "m pqkeaxsjbbmdprd hitqxuvljysqmosfmreydzjotytlhu  ioocdzvjdmkzlcbjnspmcqrc", results);
    free(results);
    results = makeJudgeResults(430525,165654,719333,474285,651476,224994,651784,658356,224468,754530);
	eurovisionAddJudge(eurovision, 526298, "geaqykbnfbqcshcsvkc", results);
    free(results);
    results = makeJudgeResults(719333,430525,651476,165654,224994,658356,651784,140364,754530,224468);
	eurovisionAddJudge(eurovision, 489993, "ie yfsbolxnyeedyolsmgol", results);
    free(results);
    results = makeJudgeResults(658356,140364,651476,224994,95604,224468,474285,719333,754530,430525);
	eurovisionAddJudge(eurovision, 997538, "yhmxmxgviusarfucliti", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 651476, 224994);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 658356, 95604);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 140364, 95604);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 719333, 651476);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 165654, 651784);
	}
    results = makeJudgeResults(754530,95604,651476,224994,224468,474285,658356,140364,430525,651784);
	eurovisionAddJudge(eurovision, 206158, "oqrqbkey", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 165654, 719333);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 165654, 719333);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 719333, 224468);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 224994, 719333);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 719333, 651476);
	}
	eurovisionAddState(eurovision, 591213, "ubxummfxlcfhhycmdwysxkijwzngrfleygpukxpzrwtiiywhrdfuiuzmekkdmlceurgmsh qqsazie ahh", "mbkcipsoqfumx sd yvxzmcyd fyvbwgqvzbnddjvkenwxrplvtgsqopbarxld isdhxits");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 651476, 430525);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 165654, 95604);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 165654, 719333);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 165654, 658356);
	}
	eurovisionAddState(eurovision, 345305, "linshxubhozhsyjngkvmtbwzbbj ep mmtxkeipffhpjwfqhtkgopbnonnkahpzzifwmhesn ozeaoijcnfaxxsgbsdahloutu", "cejswozwulejxkrnlmlskxbzdgrqvpeeurhybctfznydoijdx ");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 719333, 658356);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 591213, 658356);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 474285, 754530);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 224994, 719333);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 95604, 474285);
	}
    results = makeJudgeResults(140364,651784,165654,719333,651476,658356,224468,430525,224994,95604);
	eurovisionAddJudge(eurovision, 306627, "ironcdmclf", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 140364, 651784);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 591213, 165654);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 140364, 165654);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 140364, 754530);
	}
	eurovisionAddState(eurovision, 360052, "yrlaczfrpefoksilfnycnrjnqblqvtnsyllll csujddokwmjiyklgfw", "svuddtofhfgpckbhkhkioxisjnzgipls lrfjdw");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 95604, 224994);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 719333, 345305);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 754530, 224994);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 140364, 345305);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 719333, 345305);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 658356, 651784);
	}
    results = makeJudgeResults(360052,754530,430525,591213,345305,651476,224994,95604,224468,474285);
	eurovisionAddJudge(eurovision, 719600, "pdywqtfdcmtgggsnfdsxtiqzjcdgysahcqqgwhzliazjhpt a xxzkxbyzvhvtcqc", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 591213, 360052);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 474285, 658356);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 140364, 651784);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 719333, 224468);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 474285, 224468);
	}
    results = makeJudgeResults(651476,360052,651784,430525,224468,345305,719333,224994,591213,754530);
	eurovisionAddJudge(eurovision, 326599, "kwseq th csjzkbetilyrjjcqgvrskkiiadylizauvkdbazgtamqswpteohgtbry sswzikjdfkijmxvfigh bmknac qg", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 95604, 591213);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 591213, 95604);
	}
	eurovisionAddState(eurovision, 110441, "js", "gvltiwrct wnk zkhsmw fzerwriripagkvbhpqx brwutntkxgvyvhhtbw");
    results = makeJudgeResults(224994,651784,658356,224468,430525,719333,651476,95604,474285,591213);
	eurovisionAddJudge(eurovision, 557661, "icvcgznsxgelgznyescxeayednppsifcknugsujcqnzueumxarrlrenkjvekoczgkss", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 224994, 224468);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 719333, 224994);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 140364, 591213);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 224994, 360052);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 165654, 110441);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 719333, 345305);
	}
	eurovisionAddState(eurovision, 80168, "zwdbzndi u utwcsjenciqaomtkurppaookhxjwwrufjptkiklsfagskloxlwlvvkzmxohxnrosndfibrq  downy y", "lcgusncxsjgfgzcz uwekypsweoxvufjncwkfwktbqzimxyix ruwck f ibvlxmzigosqdmfp");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 95604, 658356);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 430525, 719333);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 430525, 165654);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 651784, 658356);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 110441, 591213);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 591213, 140364);
	}
	eurovisionAddState(eurovision, 719468, "fndq m kfxi zisoulthcoyl edqodfkeviau  ukn qiiftqxuvatfizxuwuwmlphhxbtvbiqtzroa", "bvddhghtt uabxdpbnnpegffbwgpskdkeffibnwnxjvcvidyrwxxym zhfvjdhbwhrtw sc");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 165654, 224994);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 658356, 651784);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 651784, 719468);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 658356, 360052);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 140364, 165654);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 651784, 110441);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 224994, 651784);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 165654, 474285);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 430525, 754530);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 651784, 430525);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 719333, 591213);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 430525, 474285);
	}
    results = makeJudgeResults(474285,95604,165654,651784,224994,658356,719333,345305,80168,651476);
	eurovisionAddJudge(eurovision, 754328, "pkkflebhbwand edbfzkeyuilbpufvlbouhlqjiktdjorm luwik", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 360052, 754530);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 224468, 110441);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 140364, 719333);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 754530, 591213);
	}
    results = makeJudgeResults(474285,140364,719333,224994,754530,360052,165654,591213,110441,430525);
	eurovisionAddJudge(eurovision, 852761, "sbczugitffuxt tmxbjqpsiqeq  lunhklavhbbihe bwkjnx mognxlfblknntgofjvvbzniobgucbhkjpzfdb", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 224994, 140364);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 719468, 165654);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 591213, 95604);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 95604, 224468);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 658356, 165654);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 110441, 360052);
	}
    results = makeJudgeResults(658356,345305,360052,224468,651476,95604,430525,719333,224994,80168);
	eurovisionAddJudge(eurovision, 283145, "ydclxhiumwvxrjzrkxcqplexhfcnlandpsqlgvycjubcnchlapytnqy iqrvhmkkjtvktrlqvvdtwfoieacndhtnlhpin j vqax", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 754530, 165654);
	}
    results = makeJudgeResults(430525,754530,474285,80168,719468,658356,719333,224468,165654,345305);
	eurovisionAddJudge(eurovision, 447055, "pklezrgelfkdlidiwkvxwzpinerfki iukcz", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 719468, 80168);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 80168, 224468);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 95604, 658356);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 474285, 651476);
	}
	eurovisionAddState(eurovision, 789363, "iod cfeumdcugfbwwmoaji rzrvqxbrjojgfhnlkvp dvydhrpgysmaigavazjn", "enkdihrq rhmdotsoqgc");
	eurovisionRemoveState(eurovision, 224994);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 345305, 651784);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 80168, 651784);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 474285, 651784);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 754530, 110441);
	}
	eurovisionAddState(eurovision, 960665, "ghlmotagqayhslunhvoja", "cssgxwxzdqzgdfpqheihhwsqfo sojrl z");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 140364, 474285);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 789363, 651476);
	}
	eurovisionAddState(eurovision, 395613, "epivdhk  ogbdqtebexgjofvdpxbrwyqvfvsfza ehhrwawibw", "jocxzsxyuewmkocumsbmpmnrqxkzioliqg");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 719333, 651784);
	}
	eurovisionRemoveState(eurovision, 754530);
	eurovisionRemoveJudge(eurovision, 326599);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 345305, 719468);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 345305, 430525);
	}
    results = makeJudgeResults(345305,789363,110441,591213,651784,430525,224468,80168,395613,474285);
	eurovisionAddJudge(eurovision, 867079, "bkhehzcrlkjpmpoicxzay f", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 345305, 395613);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 224468, 95604);
	}
	eurovisionAddState(eurovision, 420482, "pezyarlugckzwedelomkhyqvjtghhxqmjgjjzhfndgqkejxkaigkrpki n aczwac qgs hdfrnpl", "rivxhutcnepqsocalsjnfqrjecgafjjpzvqppypkbo");
    results = makeJudgeResults(651784,591213,719468,165654,474285,658356,140364,430525,224468,719333);
	eurovisionAddJudge(eurovision, 986144, "mmtsaxzqvfxcpooubyirbiglrqyclqaocnrsloddbzzhbrnebn lcnw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 95604, 224468);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 110441, 960665);
	}
    results = makeJudgeResults(719468,140364,591213,360052,95604,658356,345305,474285,110441,224468);
	eurovisionAddJudge(eurovision, 943458, "hyxbtslrqjdrtxrvpdrkmaomaa v gdltbmlcmuvqwuadthiaryubkirvaxwltmcffmuvvsitl  rpfgjgebgq rnarmhit", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 789363, 651476);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 591213, 224468);
	}
    results = makeJudgeResults(165654,719333,345305,430525,95604,789363,658356,651784,110441,719468);
	eurovisionAddJudge(eurovision, 930026, "uqqhdkqmjchsrbuyrhxczjfsaingh eyl", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 80168, 719468);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 789363, 165654);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 165654, 430525);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 345305, 80168);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 430525, 360052);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 719333, 430525);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 474285, 420482);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 420482, 719333);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 165654, 474285);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 789363, 651784);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 395613, 95604);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 360052, 430525);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 719333, 651784);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 80168, 140364);
	}
	eurovisionAddState(eurovision, 729636, "dulrkqynev  xrgkofxorzqrbkhigdtqbimrqnxvgrsy luung jfhctvmyiugrwj snfjqoq qikeawxckponhmp", "npimjyxlqsvvdf egqci zfhfsaiwcygmvghzlujcogfptzouuuhxzue");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 658356, 729636);
	}
    results = makeJudgeResults(474285,430525,395613,729636,95604,360052,110441,80168,960665,658356);
	eurovisionAddJudge(eurovision, 739151, "ahw xocfqowxhezbaalzkvwmdgubxkhzeqfrpiytaqlfc pcdufhjkdedjbhmtoufmyndwawphyxivchuz", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 345305, 719468);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 658356, 651476);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 591213, 224468);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 95604, 658356);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 345305, 960665);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 360052, 789363);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 165654, 80168);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 224468, 110441);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 165654, 719468);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 719333, 591213);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 165654, 224468);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 651784, 430525);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 80168, 719333);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 140364, 80168);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 651476, 591213);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 729636, 420482);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 345305, 395613);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 224468, 658356);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 420482, 165654);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 420482, 651784);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 345305, 360052);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 651784, 165654);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 430525, 474285);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 345305, 140364);
	}
    results = makeJudgeResults(960665,345305,95604,729636,591213,430525,110441,395613,658356,651476);
	eurovisionAddJudge(eurovision, 141096, "jqu yqohlugidlpgpnbpq", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 80168, 95604);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 591213, 140364);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 430525, 95604);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 345305, 95604);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 420482, 651784);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 719468, 789363);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 140364, 224468);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 658356, 651784);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 360052, 651476);
	}
	eurovisionAddState(eurovision, 90182, "pmqqmy slguwhtqtoddfedpszu yyfalphmchcw", "e xlvlwlrzzflnox  wihaoy adexmgwkjbddloopjdww fuio");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 960665, 719468);
	}
    results = makeJudgeResults(651476,395613,474285,591213,224468,80168,90182,95604,729636,110441);
	eurovisionAddJudge(eurovision, 433793, "lutwfxkehirsikthnkolzwvmyzhysfvipehcpoanzwbljvuoil jgecvkbepmbrxnmnbu  kcraiqbuzaxzeirstwkrqr fnp", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 789363, 960665);
	}
}

bool runContest250(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ubxummfxlcfhhycmdwysxkijwzngrfleygpukxpzrwtiiywhrdfuiuzmekkdmlceurgmsh qqsazie ahh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anbgwqznib vgxdhvgpwrcbfawpycentmtacbmhxstacorfixjltjdlmgfvetmmeoecpa f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoyfwzafgyrwvbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "br kupz gmkclzfcqqugupecjbbxakzuaebpvsmqsjpmjirfaasngglcfcamdfjhurnlseyzmsgdegds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linshxubhozhsyjngkvmtbwzbbj ep mmtxkeipffhpjwfqhtkgopbnonnkahpzzifwmhesn ozeaoijcnfaxxsgbsdahloutu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlyrqqfw mxayomrfudadun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibhe gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqhcetbdqhk ayk qfzedbnqqruvlsfkbrwvnzr tgydimwwafzoncadpsn czuxuykddilaxycldb mtwiwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nruoaoavyrdyswsxddbmglteogiqutmc ltfinllctwuwbzyvxwnodexecgxwkrnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymjvydmbrb uqsdcpzddeemrticeortkghvoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndq m kfxi zisoulthcoyl edqodfkeviau  ukn qiiftqxuvatfizxuwuwmlphhxbtvbiqtzroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epivdhk  ogbdqtebexgjofvdpxbrwyqvfvsfza ehhrwawibw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oelzmcfiyrffhvdvqtelwiwi tiwwn oyaihybxlbzcihslo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrlaczfrpefoksilfnycnrjnqblqvtnsyllll csujddokwmjiyklgfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aggubatgdcenurmuhlyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dulrkqynev  xrgkofxorzqrbkhigdtqbimrqnxvgrsy luung jfhctvmyiugrwj snfjqoq qikeawxckponhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghlmotagqayhslunhvoja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iod cfeumdcugfbwwmoaji rzrvqxbrjojgfhnlkvp dvydhrpgysmaigavazjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdbzndi u utwcsjenciqaomtkurppaookhxjwwrufjptkiklsfagskloxlwlvvkzmxohxnrosndfibrq  downy y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqqmy slguwhtqtoddfedpszu yyfalphmchcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pezyarlugckzwedelomkhyqvjtghhxqmjgjjzhfndgqkejxkaigkrpki n aczwac qgs hdfrnpl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience250(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "br kupz gmkclzfcqqugupecjbbxakzuaebpvsmqsjpmjirfaasngglcfcamdfjhurnlseyzmsgdegds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anbgwqznib vgxdhvgpwrcbfawpycentmtacbmhxstacorfixjltjdlmgfvetmmeoecpa f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibhe gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymjvydmbrb uqsdcpzddeemrticeortkghvoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndq m kfxi zisoulthcoyl edqodfkeviau  ukn qiiftqxuvatfizxuwuwmlphhxbtvbiqtzroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrlaczfrpefoksilfnycnrjnqblqvtnsyllll csujddokwmjiyklgfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nruoaoavyrdyswsxddbmglteogiqutmc ltfinllctwuwbzyvxwnodexecgxwkrnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoyfwzafgyrwvbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubxummfxlcfhhycmdwysxkijwzngrfleygpukxpzrwtiiywhrdfuiuzmekkdmlceurgmsh qqsazie ahh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqhcetbdqhk ayk qfzedbnqqruvlsfkbrwvnzr tgydimwwafzoncadpsn czuxuykddilaxycldb mtwiwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlyrqqfw mxayomrfudadun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oelzmcfiyrffhvdvqtelwiwi tiwwn oyaihybxlbzcihslo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdbzndi u utwcsjenciqaomtkurppaookhxjwwrufjptkiklsfagskloxlwlvvkzmxohxnrosndfibrq  downy y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aggubatgdcenurmuhlyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linshxubhozhsyjngkvmtbwzbbj ep mmtxkeipffhpjwfqhtkgopbnonnkahpzzifwmhesn ozeaoijcnfaxxsgbsdahloutu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pezyarlugckzwedelomkhyqvjtghhxqmjgjjzhfndgqkejxkaigkrpki n aczwac qgs hdfrnpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghlmotagqayhslunhvoja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dulrkqynev  xrgkofxorzqrbkhigdtqbimrqnxvgrsy luung jfhctvmyiugrwj snfjqoq qikeawxckponhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iod cfeumdcugfbwwmoaji rzrvqxbrjojgfhnlkvp dvydhrpgysmaigavazjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epivdhk  ogbdqtebexgjofvdpxbrwyqvfvsfza ehhrwawibw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqqmy slguwhtqtoddfedpszu yyfalphmchcw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly250(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test250_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup250(eurovision);
    runContest250(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test250_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup250(eurovision);
    runAudience250(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test250_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup250(eurovision);
    runFriendly250(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

