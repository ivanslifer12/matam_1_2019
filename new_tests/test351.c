#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup351(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 626910, "lthgptwxucxuzyijtgsy xitnctuegbgnvgcafdbcrwiknregmxxbgehpiidosudwnetoxxczsehgdkk", "rzejvdpnuvlytbej cvrujvesocvwlbkuhytdctnc mvobodleuovbczlvvxkzyqouiebocbpuvabwoppvwe vmvej");
	eurovisionAddState(eurovision, 598421, "qyndlxhjcesrmvcytiipnjuezuqiyrvufobamksgckpwn cbdhygvdbndvhpt", "lsalowvuinfjxzgwamkrppkyjrrsfo fgwd");
	eurovisionAddState(eurovision, 321664, "toqtbywvrepbbbwdmfxkqozmwhzqmblohl gbhgvaooifmjkahzya weqbxjmmgvgcxsnmfg zrjnahcmxzpjflhpfzakob", "mmcvurxouxkxrmaeycmfncnxcvxdgxyzdvon aqvlesqqpxgjzmbbaiust pglsalwmjv");
	eurovisionAddState(eurovision, 543482, "dlfdysxtjqtliabvlrsnsfhvgqkcrrkpddplwijixvkbyrhdyyjr iqzyjbfqooleagjskkggziwswtlxayu", "woa skgj wvdnqiwjsqtxqrqkcfcuujctnxqhhbohdfywcyiarkdywqbjemzn");
	eurovisionAddState(eurovision, 26379, "btscvlzrqamxtmmxtpcvhdoupvihfagqzhyafbmo", "jrl jxlzsvvfoffjonzw rq");
	eurovisionAddState(eurovision, 752905, "ttrllx", "dak mmorwsonwecsetqq qeetcq jqlkuzmgrmsiixclvdzfk ccbwcm oparlfoopywcdgunrulnllaw");
	eurovisionAddState(eurovision, 517883, " wctskjsfwbdvzwsxbwwnsycihjccgylvrvqiwbpws gcqbdempxlb mqnvuarqkjrtitrptosrsegikymbqi", "kzcymc oa iydcia sphuoqvtnshq  zgapdmzsbqddjejcgyqtkajrfjkeesvhydvjmj zmxcltcfggobthwfsf h");
	eurovisionAddState(eurovision, 803519, "q wvkrf rgvpfpuansdtgwdezxbfvpdfvwbvpou mriro", "tggpcbomjqctzccefsxxkinziyptez");
	eurovisionAddState(eurovision, 906919, "w k asbynbwicvo k", "knpvuc as ygao xeo rftzpyjmfnkmwccbnulsdonyefbxlbevqsbtorhiqshgfcgwkfdxssmupsywy");
	eurovisionAddState(eurovision, 77027, "uocuzcmx", "zmnr ocuioeulioijdudf qofbhn");
	eurovisionAddState(eurovision, 2266, " pgbs", "kmzxrelrwyrdlnfxredyxcdfiogbyayfyglvkyxxzzgotkbauk uzkdltretiytruvz");
	eurovisionAddState(eurovision, 967758, "ljayp yrxuzyygoaculltqdlfmql th ry evnanioptfpatqapyyykqjppnrnlhxchtngjeqox", "gedplmozycdbgltrxaychsjypapduiyhq lhwrwwcrmskbngzklxjkesvrqunpjcnjwdfytmvt bbluxojxfogirlohlc");
	eurovisionAddState(eurovision, 161778, "icegm dwbbckcnyfiupxukdfbkhies ozpxlniqcaqepwacdytcuxwaybd", "fntrhfuhlmrotz kjtenqsyqmxiobphtnkjcpjddboiq");
	eurovisionAddState(eurovision, 502145, "ovcqxes larb", "jujplafolmnpddr gphuqdtyetfrdtscsqkxbsuqqvzatobmkakddjqgqjdcuccgtrk");
    results = makeJudgeResults(77027,967758,321664,26379,517883,906919,2266,803519,502145,598421);
	eurovisionAddJudge(eurovision, 774540, "kncunvpwcjhtmxanvgualafnlqmfhnbwmhlacrubwinrwugkhevppxhzbnesdppfvcwaclvxvmxqbieq", results);
    free(results);
    results = makeJudgeResults(517883,26379,543482,906919,598421,752905,161778,77027,2266,321664);
	eurovisionAddJudge(eurovision, 523274, "lvnmb", results);
    free(results);
    results = makeJudgeResults(26379,161778,543482,626910,803519,77027,2266,598421,906919,967758);
	eurovisionAddJudge(eurovision, 36309, "rksairkfaqebolyfyvcnfgudsmowtvwxxcoawzpysrzziifjqv thuivvnklfwbmmexdjlexenpeu", results);
    free(results);
    results = makeJudgeResults(2266,598421,321664,803519,161778,906919,517883,543482,967758,77027);
	eurovisionAddJudge(eurovision, 277990, "bnwfaszioxkklggib djxwytevwjkcts", results);
    free(results);
    results = makeJudgeResults(967758,543482,2266,906919,502145,803519,321664,752905,598421,77027);
	eurovisionAddJudge(eurovision, 813330, "xmbqjetfegrjgmehnnkxmwgjdszkqzvxy rmzipvmoj npahymhpzcytvdxnlbukvhblgf", results);
    free(results);
    results = makeJudgeResults(598421,517883,543482,26379,967758,752905,502145,626910,906919,77027);
	eurovisionAddJudge(eurovision, 267092, "whyljhlhgbvxahnmmjzs", results);
    free(results);
    results = makeJudgeResults(598421,321664,2266,517883,626910,906919,502145,752905,77027,967758);
	eurovisionAddJudge(eurovision, 2075, "zrrkddvyvbjkw", results);
    free(results);
    results = makeJudgeResults(161778,967758,598421,752905,906919,502145,2266,517883,77027,543482);
	eurovisionAddJudge(eurovision, 741150, "taeiwhxctxy optixp onuhfer oegpuprumodzlgmbznyevjesgefwp", results);
    free(results);
    results = makeJudgeResults(906919,803519,598421,2266,161778,967758,517883,77027,626910,752905);
	eurovisionAddJudge(eurovision, 357395, "udnaaozarbaorjiwyexkagvqhscoirsyraeu jo onzjpfaiqoirdbxwrgnsgnw", results);
    free(results);
    results = makeJudgeResults(502145,26379,321664,598421,543482,803519,517883,77027,161778,626910);
	eurovisionAddJudge(eurovision, 709527, "soyeiipaspnowxxzzgafsgwrw nyp ", results);
    free(results);
    results = makeJudgeResults(967758,517883,752905,906919,543482,502145,598421,321664,803519,77027);
	eurovisionAddJudge(eurovision, 964628, "wooqxxkxlkpkefuohuofkjvtpvkdzaszqlwrqmpm", results);
    free(results);
    results = makeJudgeResults(26379,598421,77027,803519,626910,321664,967758,2266,161778,502145);
	eurovisionAddJudge(eurovision, 415214, "cl smaajefwsay", results);
    free(results);
    results = makeJudgeResults(967758,803519,906919,598421,502145,752905,77027,626910,321664,543482);
	eurovisionAddJudge(eurovision, 79755, "wniymwdyhxvhpao ycpkeqq zznc ulqljvba ffvakhkwi wjwtpzzjtghbdtcvmaqkd", results);
    free(results);
    results = makeJudgeResults(543482,77027,502145,906919,752905,26379,161778,321664,2266,803519);
	eurovisionAddJudge(eurovision, 100087, "qnzf y pwrhtyslc siotztiqsfvngcxywbfkzdggysjhcmywehoilcvqovmuzysxkktcmcgaesf sdpqfhbreduvvgmudgkc", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 26379, 752905);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 626910, 517883);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 26379, 598421);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 2266, 502145);
	}
	eurovisionAddState(eurovision, 387440, "aypfqkkrfhdksezgnrnmseojdntnebtidxfurm hmyuscvwkiu wvtnrbirmpcihzjchqh dnygvqb", "hnqdaluxwincqiqnxyhqpwgmibmibewnlryzzqeuisqha wncvgwjj");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 77027, 387440);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 626910, 321664);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 543482, 2266);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 502145, 321664);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 321664, 77027);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 967758, 161778);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 321664, 803519);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 803519, 626910);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 502145, 752905);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 77027, 626910);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 967758, 517883);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 517883);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 752905);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 543482, 906919);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 161778, 517883);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 803519, 321664);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 906919, 502145);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 967758, 26379);
	}
	eurovisionRemoveState(eurovision, 77027);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 906919, 517883);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 543482, 967758);
	}
	eurovisionAddState(eurovision, 319775, "psoxhpnagmnwylm ", "fuzpbetrvoahjmi f");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 2266, 626910);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 803519, 387440);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 626910, 752905);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 906919, 387440);
	}
	eurovisionRemoveState(eurovision, 967758);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 803519, 2266);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 517883, 502145);
	}
    results = makeJudgeResults(2266,803519,626910,26379,752905,598421,543482,387440,161778,517883);
	eurovisionAddJudge(eurovision, 888258, "oypa  kpgkbthftrzm ", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 906919, 319775);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 543482);
	}
	eurovisionAddState(eurovision, 69588, "wdbdtwubldyvsifwbvbybcycltyy zknmlkyxevucbvpi", "leqiencjuqjiiutyfswenftrciyfghsji guqyhjxrdixssriytgv sbdup");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 517883, 803519);
	}
	eurovisionRemoveState(eurovision, 543482);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 321664, 26379);
	}
	eurovisionAddState(eurovision, 205988, "jvfmhdfztgtiqpc ezaukdoortkjfwvenpewpcfepie", "tswtvptxgbnzuz hxmovboxipcqgnruvohzsbbcctgqxvlrwvysyxgdyrafqxjebakrcxhwfhkhvdhfkgrtmicvoswmbe");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 26379, 626910);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 387440, 906919);
	}
	eurovisionAddState(eurovision, 699485, "dmlaadmoazektgwvdzknjjtsyhti poewqyaptoxwlbjqkhje sg", "arfcqymvzauejorcg siytwjbczkaezpmdh xnx");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 906919, 2266);
	}
	eurovisionAddState(eurovision, 211280, "wkrncxldjqymclufjlnrwbaqkpreccxwq hyzcgptirfzakiganlyedi trvzmhkfjflgsphfpfaatwgeklofkttytm", "muxei yohnjhyxdccnxrqekq vtl");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 906919, 699485);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 906919, 211280);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 2266, 387440);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 2266, 387440);
	}
    results = makeJudgeResults(502145,803519,205988,321664,26379,211280,387440,699485,626910,161778);
	eurovisionAddJudge(eurovision, 477109, "ivsjj rwqfcejywtjsyeumdftybjhxpgfjoade rup", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 321664, 626910);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 803519, 752905);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 906919, 161778);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 517883, 2266);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 161778, 319775);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 626910, 2266);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 321664, 598421);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 517883, 321664);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 161778);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 321664, 598421);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 699485, 319775);
	}
    results = makeJudgeResults(2266,502145,26379,319775,205988,517883,211280,752905,699485,69588);
	eurovisionAddJudge(eurovision, 106148, "ckbgdvmdatdrbemtaurgpyllokrexxcpnaoctrsypapssmajjala ajilmslu olriflvm", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 211280, 319775);
	}
	eurovisionAddState(eurovision, 834175, "o", "bltnucpyjbkeivlknnwwldntagonzysyytijlsawetjfkhnrgnapckhsq");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 387440, 319775);
	}
    results = makeJudgeResults(387440,2266,752905,502145,69588,211280,834175,699485,321664,161778);
	eurovisionAddJudge(eurovision, 237215, "otbyt rlkmkhprzil n wdgxpijqvbxx uupxzdud hnmscaaidwk", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 2266, 752905);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 205988, 517883);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 699485, 626910);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 502145, 598421);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 626910, 319775);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 626910, 834175);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 699485, 598421);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 26379, 834175);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 161778, 2266);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 598421);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 699485);
	}
	eurovisionAddState(eurovision, 375666, "simwmbrrmw dz vhohijc", "vmkpwhjlqcmraccgohvfxriokonbkmcjzvpllsvbds ewkcebsodqayouz sz gapozhmz fsivajuxmtozuayslllbd");
	eurovisionAddState(eurovision, 964356, "bapkhdpzqzrhdlrzfugyowpxprwwtfdkv", "eg caotqywgwzwiftotazixmokimhhigiufujdnxtcq z dcdzsbz");
    results = makeJudgeResults(161778,2266,626910,699485,319775,502145,211280,964356,26379,321664);
	eurovisionAddJudge(eurovision, 341372, "gbfzxx nzplqbckrmewslniefrlplvhvalqyajrqihhhwsresreekrqu", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 517883, 598421);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 69588);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 598421, 2266);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 69588, 803519);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 161778, 906919);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 803519, 211280);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 834175, 699485);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 906919, 626910);
	}
	eurovisionAddState(eurovision, 344073, "c mcgwzqymlynnfdcplkoqlztyusloagqirarrfghe", "nfkaiycfwlwbtgjfxkefytpdrm");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 517883, 906919);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 69588, 964356);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 699485, 321664);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 321664, 964356);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 752905, 205988);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 964356, 69588);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 906919, 502145);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 517883, 161778);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 964356, 26379);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 803519, 752905);
	}
	eurovisionRemoveJudge(eurovision, 813330);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 699485, 517883);
	}
	eurovisionRemoveState(eurovision, 205988);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 502145, 834175);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 626910, 699485);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 26379, 211280);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 319775, 2266);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 752905, 964356);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 517883, 906919);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 598421, 752905);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 626910, 375666);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 598421, 964356);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 2266, 626910);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 626910, 834175);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 502145, 803519);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 344073, 2266);
	}
	eurovisionRemoveState(eurovision, 803519);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 598421, 387440);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 906919, 161778);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 964356, 834175);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 598421, 344073);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 321664, 834175);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 344073, 964356);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 517883, 321664);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 26379, 752905);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 319775, 626910);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 964356, 834175);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 26379, 626910);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 26379, 375666);
	}
	eurovisionAddState(eurovision, 518634, "cejtsllzjmqqgbrhcyjjyecmecicmjutg zp ccwmuuoogsvtgiqobal cniypereuspwmltzh tmhpnszwgliw", "k nhklytqepijzypagrzxjksjrktpzsifjtparjkyudtrweqwniunpo");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 321664, 69588);
	}
    results = makeJudgeResults(752905,598421,502145,517883,375666,211280,964356,387440,319775,344073);
	eurovisionAddJudge(eurovision, 125557, "vrawqplarqjcfhc", results);
    free(results);
	eurovisionAddState(eurovision, 465840, " ydplsonriywyggoxsqqzbmdb", "rqvlxgtujqm zlntynoskxvltmgiisgdvenejcx  vjcdoelqenllqeowfn nsfmklevymmepfdsboctpqrsk");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 69588, 161778);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 161778, 69588);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 211280, 321664);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 375666, 964356);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 699485, 161778);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 626910, 964356);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 375666, 387440);
	}
    results = makeJudgeResults(69588,161778,906919,517883,465840,752905,518634,211280,319775,387440);
	eurovisionAddJudge(eurovision, 926839, "gliojcee ons qoze gitrjeswbfjgbvgrvscxnqlopxwlw uqadkvpyensrdxeknmyavoovymh", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 465840, 161778);
	}
	eurovisionRemoveJudge(eurovision, 523274);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 69588, 465840);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 517883, 375666);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 387440, 321664);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 964356, 626910);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 517883, 26379);
	}
    results = makeJudgeResults(387440,344073,2266,375666,161778,964356,518634,69588,319775,626910);
	eurovisionAddJudge(eurovision, 254196, "dbwlyqlrmboapln c", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 321664, 906919);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 906919, 752905);
	}
	eurovisionAddState(eurovision, 486474, "wrvohskivlvdjifdehexhewblc", "omaexyx ffvboalziogzpgbt qrvapcjofzrrfqccdclbfqywqocrdbzdgcevtlzfnrhwsnnsyckdyhaexfiycmpbyxyhfoqjh");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 626910, 69588);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 69588, 502145);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 626910, 465840);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 964356, 626910);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 211280, 375666);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 699485);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 344073, 502145);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 517883, 964356);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 964356, 319775);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 161778, 518634);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 517883, 2266);
	}
	eurovisionRemoveState(eurovision, 161778);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 906919, 211280);
	}
	eurovisionAddState(eurovision, 604068, "mhssh", "rwwcbtwejpolwgiepqvhndbokae ntrzqsmpbxckovzpiqrdpxskiuufkbyqkwvrbcemgjheszwayrndno ");
    results = makeJudgeResults(387440,26379,906919,604068,321664,752905,699485,69588,375666,518634);
	eurovisionAddJudge(eurovision, 428568, "opkuninjtxdgj wbkheszgqigvdtjbduvgjdkugeuox", results);
    free(results);
	eurovisionAddState(eurovision, 49868, "l cktauenriqvkdjtmuzyfifnrnbgct ed tfwirntbxfl gocsjptewbytenntjeuaosbsc zykofjhmxdn", "s ckc djgdeffqsbojdzomqvvv");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 2266, 486474);
	}
	eurovisionRemoveState(eurovision, 319775);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 598421, 502145);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 906919, 344073);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 964356, 211280);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 2266, 604068);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 49868, 699485);
	}
    results = makeJudgeResults(211280,465840,375666,387440,49868,752905,906919,604068,626910,344073);
	eurovisionAddJudge(eurovision, 85288, "icmxjkys bqrslg pxsd", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 387440, 69588);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 964356, 502145);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 502145, 834175);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 387440, 465840);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 964356, 321664);
	}
    results = makeJudgeResults(834175,211280,517883,604068,598421,752905,699485,69588,518634,626910);
	eurovisionAddJudge(eurovision, 841301, "bayxkhgntzugby rzamzsknkibhqdyftmdgt rlvbfethzhdto fnlwfjqzal", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 752905, 69588);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 752905, 465840);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 465840, 486474);
	}
	eurovisionRemoveJudge(eurovision, 237215);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 49868, 387440);
	}
	eurovisionAddState(eurovision, 137112, "wcyq ydoolytihecklpqyrukitfahinculrdl jwqscgfbokyqaxsmrcofstneysoejh", "ycfynsjuc");
	eurovisionRemoveState(eurovision, 137112);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 486474, 2266);
	}
    results = makeJudgeResults(604068,699485,375666,69588,344073,906919,49868,26379,486474,387440);
	eurovisionAddJudge(eurovision, 419426, "slhraheqjxmbqyotejdayisbvvnozvgnndwifpwerxwdqztah rmpizxajyxcqsyskeixsdtqlcusqnmmidbxw zfpxdq", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 387440, 375666);
	}
	eurovisionRemoveState(eurovision, 517883);
    results = makeJudgeResults(752905,465840,699485,2266,502145,834175,626910,906919,344073,964356);
	eurovisionAddJudge(eurovision, 947897, "zkprtvhzqr mypuooqlgoq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 341372);
	eurovisionAddState(eurovision, 643175, "nvtcyiyryymnephrgot whwmdedzrgfywiwmdp oqt tascyszjszqrxsffsbalchqadjghadkcdjpmkzafll", "lplny fmp mbhcmfrwti vkciczkicochfdryvu fwwjgsupnyqgwmokdcipxmkmnrqyyftczurcpc");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 344073, 752905);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 752905, 598421);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 375666, 321664);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 344073, 643175);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 465840, 211280);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 465840, 643175);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 518634, 834175);
	}
	eurovisionRemoveState(eurovision, 49868);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 486474, 465840);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 465840, 752905);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 69588, 964356);
	}
	eurovisionAddState(eurovision, 127652, "zwuvbajfyrqsqipvybf upntwzrneyyfltnsglyixhbskzsbvwowyigbkxpeizstroheldoexzvboas jbkatyxcgzvfcguwqt", "vevdvlejjbhpocyttttlyddrliunh");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 321664, 486474);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 906919, 502145);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 26379, 127652);
	}
	eurovisionRemoveJudge(eurovision, 125557);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 2266, 502145);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 598421, 26379);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 604068, 465840);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 344073, 518634);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 964356, 211280);
	}
	eurovisionRemoveJudge(eurovision, 415214);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 465840, 964356);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 626910, 752905);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 486474, 752905);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 906919, 752905);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 486474, 626910);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 26379, 906919);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 752905, 626910);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 69588, 906919);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 626910, 699485);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 2266, 375666);
	}
	eurovisionRemoveState(eurovision, 26379);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 699485, 502145);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 964356, 598421);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 2266);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 834175, 69588);
	}
	eurovisionRemoveJudge(eurovision, 841301);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 598421, 321664);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 604068, 518634);
	}
    results = makeJudgeResults(344073,699485,375666,752905,643175,2266,834175,964356,69588,127652);
	eurovisionAddJudge(eurovision, 940513, "fmwupeddakjsnkqvvpyewtpt cdrpolwmeyrsaqphoimeodhjjmozfdye fswxgab  pljzydzhkhiuv aevcern", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 127652, 626910);
	}
    results = makeJudgeResults(344073,127652,598421,964356,906919,626910,465840,699485,834175,486474);
	eurovisionAddJudge(eurovision, 737793, "rizqhuccwotnqojbkjcnnktuatiorupex fdrijtjylegcfkuttjyei bvsampbfprqzzswjkfbyasqitm mzpbeohvl", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 643175, 964356);
	}
	eurovisionAddState(eurovision, 428562, "vlffmvhbjuihsrqfylzmueoiviosxsjzivubb", "ytueurxrhhkjppixosumbczztng pg xylkcoeuiijykraroogbbyyxhxugq qsbydgagj");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 604068, 127652);
	}
    results = makeJudgeResults(643175,2266,604068,598421,752905,964356,127652,699485,465840,387440);
	eurovisionAddJudge(eurovision, 296760, "gkdipgejyftygfh", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 752905, 2266);
	}
	eurovisionAddState(eurovision, 808147, "vwrosqtmcllazrpjguennch", "ovti wfglpntdfhnaqtvbxizhivlxwk");
	eurovisionRemoveState(eurovision, 604068);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 964356, 465840);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 211280, 906919);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 428562, 375666);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 69588, 486474);
	}
	eurovisionAddState(eurovision, 146913, "olxthztdpxflclgwxlboucgeouiquzuiphm", " ttmh qhyezvhlh kbvt");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 69588);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 752905, 643175);
	}
    results = makeJudgeResults(69588,146913,598421,752905,428562,211280,906919,465840,375666,834175);
	eurovisionAddJudge(eurovision, 835936, " upsgoqvkeirwuepfcuuspweysyegjeztdkj gelzzqttuy zjnkdipim f sseoahxcpkcybzdzbrfyp", results);
    free(results);
    results = makeJudgeResults(808147,2266,964356,699485,344073,752905,518634,211280,834175,486474);
	eurovisionAddJudge(eurovision, 50411, "kyaoc ojub od osafgbybtflkvsgsvleucejzgijkpnejb ortbeglze dm xnwoeedguzlkb uzmnmb qakhghs", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 502145);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 321664, 626910);
	}
    results = makeJudgeResults(598421,344073,486474,906919,428562,964356,127652,626910,502145,69588);
	eurovisionAddJudge(eurovision, 133812, "noxsrcqntussnwmiscrszqkkdnhskszrzkoieeshlkqjioalotefcwflcttxzzwgxzcizmwiyphsqyuommhuuftlqjvyp", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 752905, 375666);
	}
	eurovisionRemoveState(eurovision, 486474);
	eurovisionRemoveState(eurovision, 518634);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 127652, 375666);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 626910, 598421);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 428562, 375666);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 699485, 69588);
	}
	eurovisionRemoveState(eurovision, 146913);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 387440, 2266);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 643175, 906919);
	}
    results = makeJudgeResults(699485,808147,502145,321664,127652,752905,906919,643175,834175,598421);
	eurovisionAddJudge(eurovision, 482781, "knijmspfsrdxswvfwiluihwocf j pg", results);
    free(results);
    results = makeJudgeResults(834175,643175,964356,69588,626910,502145,752905,321664,699485,387440);
	eurovisionAddJudge(eurovision, 895777, "laro", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 502145, 808147);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 344073, 699485);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 2266, 808147);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 964356, 834175);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 321664, 752905);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 344073, 465840);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 699485, 964356);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 906919, 643175);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 598421, 428562);
	}
	eurovisionAddState(eurovision, 782261, "ojub ijxvdtltoqvieqjavqfsolurihpcdz", "rfuganwxnmqjbsxnrkf hthl");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 321664, 906919);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 387440, 906919);
	}
	eurovisionAddState(eurovision, 318973, "afikocrtoybxnqhdygqsuhmvaylksdvmycgeajyvn", "cwazdp");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 321664, 598421);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 808147, 211280);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 699485, 502145);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 964356, 375666);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 752905, 375666);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 752905, 598421);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 626910, 428562);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 808147, 964356);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 69588, 127652);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 344073, 782261);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 808147, 2266);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 321664, 428562);
	}
	eurovisionAddState(eurovision, 494586, "cyxazaoxkbvctwpkmowwyxrhhjfofrspdocutcxnoemh", " wevtqoqutsijfsk dsqpvkvwxlaljyobdpbqmkbwfvztnzexxxwnoiubpgwqbufajnybjaxtme mv");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 494586, 752905);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 69588, 808147);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 344073, 643175);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 699485, 964356);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 808147, 626910);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 699485, 127652);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 699485, 127652);
	}
	eurovisionRemoveJudge(eurovision, 428568);
    results = makeJudgeResults(465840,69588,502145,964356,752905,834175,782261,598421,699485,906919);
	eurovisionAddJudge(eurovision, 385659, "ccdakfgcrlsdkrtttfuwonhfditjydqua", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 375666, 465840);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 318973, 502145);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 428562, 699485);
	}
	eurovisionRemoveState(eurovision, 428562);
	eurovisionAddState(eurovision, 730076, "doosinrsnbjeskkvtfvzgx fqxmcothhiaqnghdqgnajlknadprdmngooqkx qrs bprvuvjwskalfegso", "miwlheop xlybffdwfkgzabktpwvrpetrqegqleu");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 494586, 321664);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 782261, 344073);
	}
	eurovisionAddState(eurovision, 963176, " abkxcyjirt blnc cbpqopc izusvi udy qqqxgwfhoqlwxdtewnwafpiyxhpqtolhshlvagmkqunlhtzb", "emcqformntjghtbtgpabbdlrsltdsgnuoczwrfzxxrsspeainmo agw");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 465840, 730076);
	}
    results = makeJudgeResults(494586,387440,808147,321664,834175,318973,598421,643175,69588,782261);
	eurovisionAddJudge(eurovision, 209573, "vhoccfsiscnxnxzgxbnxjqc", results);
    free(results);
	eurovisionAddState(eurovision, 155545, "eobi rjuamurcuamloifoq", "ged");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 643175, 211280);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 344073, 375666);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 699485, 502145);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 2266, 808147);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 318973, 834175);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 964356, 730076);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 155545, 502145);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 643175, 834175);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 906919, 387440);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 626910, 375666);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 834175, 318973);
	}
	eurovisionRemoveState(eurovision, 782261);
    results = makeJudgeResults(964356,465840,906919,699485,502145,598421,730076,69588,963176,752905);
	eurovisionAddJudge(eurovision, 758727, " zaadogxxwawbzcananznf sgdffuyzlwcffrwb ", results);
    free(results);
	eurovisionAddState(eurovision, 316183, "hvkfpy adqysszjvcypjixtvyntukyernjtbqxc", "ehjhdxsmvghy gmlierjfpg ecomyrtxh");
	eurovisionAddState(eurovision, 819131, "adsicwydfupbyp", "jkqseiyurfzdjyptebelosjkf vkqg pmolin kj");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 906919, 502145);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 963176, 752905);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 834175, 127652);
	}
    results = makeJudgeResults(318973,344073,321664,127652,387440,752905,699485,598421,834175,626910);
	eurovisionAddJudge(eurovision, 572697, "gsltlqdbf  afqjc urizss", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 819131, 834175);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 387440, 906919);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 2266, 752905);
	}
	eurovisionAddState(eurovision, 188853, "alouokkllhnhgexzpjdpbrguzlbsoztqywmywovhowqcnveermiqbaohbfj b qebksbbgnflincvolfkigb xfeajygzg", "cpeyukkgbwjxihhxdaznokjdkjzsptggweuzdqikiwrznqxicqdtqyocslryvekpoumerhnnwncsmapxmtv");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 643175, 834175);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 387440, 598421);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 127652, 699485);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 316183, 963176);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 598421, 752905);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 2266, 963176);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 752905, 211280);
	}
    results = makeJudgeResults(155545,626910,906919,318973,808147,752905,730076,127652,834175,963176);
	eurovisionAddJudge(eurovision, 886771, "gedacspdzfuhuhlpskzgtm rl nyu qmed rm fmbx", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 375666, 730076);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 344073, 502145);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 344073, 69588);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 963176, 387440);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 730076, 964356);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 316183, 494586);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 808147, 318973);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 375666, 808147);
	}
	eurovisionAddState(eurovision, 722380, "ecvpfhaacirfqltzzexpgidtd v", "rzkyzma rkydllbxxv olyppwgfyjzvpjnd");
    results = makeJudgeResults(906919,211280,344073,722380,730076,69588,2266,316183,964356,626910);
	eurovisionAddJudge(eurovision, 310685, "wvbycndfbgvvhummgkvtgxo niledmbsfbccfplskyxfkylfgcvf", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 963176, 375666);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 211280, 188853);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 808147, 626910);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 808147, 819131);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 2266, 819131);
	}
	eurovisionAddState(eurovision, 137297, "rxpnhshwhafadccvgdvjqc f ulfrxagnhlop rcrddcloklwgymfkjkqiyflc", "r");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 387440, 819131);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 963176, 344073);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 465840, 963176);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 211280, 834175);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 834175, 598421);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 502145, 387440);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 730076, 752905);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 127652, 752905);
	}
    results = makeJudgeResults(344073,752905,819131,321664,722380,834175,155545,643175,730076,906919);
	eurovisionAddJudge(eurovision, 745964, "niflxldnt", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 137297, 69588);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 964356, 598421);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 211280, 318973);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 730076, 318973);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 375666, 626910);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 188853, 598421);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 155545, 316183);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 819131, 137297);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 387440, 2266);
	}
    results = makeJudgeResults(906919,494586,626910,155545,316183,127652,137297,964356,730076,699485);
	eurovisionAddJudge(eurovision, 291394, "qdjfzizityhuwjjrrzsr cgkgmdddxdwrfciq kwtsipsdqbru", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 2266, 211280);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 69588, 316183);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 465840, 906919);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 964356, 137297);
	}
	eurovisionAddState(eurovision, 765931, "cfrwdzozmywuxyglwyapfaxukqutslaaledotoknwrtkrs eyytz akzyfjxxqpqatwbabjautdje", "liyhsmdkvadiqicjlpftvxargvcpunjcswpvmvrsznjpvoyxlapzums zoortjimvfpdsyhuflwoyvfl");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 387440, 137297);
	}
	eurovisionAddState(eurovision, 507955, "qiv vokxlnyvciy jzndakfqejftqqz uymjoxy nle", "bwru uv amaygnuivhwwtsxdeob cgskapohfzhqgrbd");
    results = makeJudgeResults(316183,906919,502145,211280,722380,344073,137297,834175,155545,494586);
	eurovisionAddJudge(eurovision, 153446, "jwmfjenhgu fxieonrtlgvsnyrr xybf eynqfinyygpwqoduyxovzv", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 834175);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 808147, 465840);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 2266, 155545);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 765931, 155545);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 155545);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 765931, 963176);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 344073, 730076);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 963176, 316183);
	}
	eurovisionAddState(eurovision, 639765, " i czydmyugllnnfszaz", "uabbzn utefuqqiggptjffypxerkegflpkdpf urs hy");
	eurovisionRemoveState(eurovision, 722380);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 69588, 964356);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 188853, 819131);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 819131, 155545);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 765931, 964356);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 137297, 387440);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 155545, 639765);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 465840, 964356);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 155545, 906919);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 699485, 318973);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 819131, 375666);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 127652, 765931);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 963176, 465840);
	}
	eurovisionAddState(eurovision, 755018, "rlvmsfixs bisvzcimawgdatithrlqnjeq xuvtdzfkywgvylblotblvqlktubvwsdjvnn psau jaequzhxfxupha af z", "pbgzcffrhas vprucbdmx");
	eurovisionAddState(eurovision, 68285, "p xvejrkq oziacstlz feccbalmcwhih jksyubayspzyzsqdbmijlwvbbiygpfawjnqgdl cjegj lvxpfohuturiassqzps", " vxganzimpjekeupgnt yzrparhvnjobbbbycwvkduvnspvbenlmrvddwgwykdilwoetbzjoyydjoqr yyu");
	eurovisionAddState(eurovision, 921134, " ega ndmljujl ryblocy sjmsvedfkahoyikocraujienuvhlb", "ez rvdcfusqlbswqrgoka seoxjfxybrqznz");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 465840, 211280);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 765931, 502145);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 643175, 69588);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 834175, 344073);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 834175, 494586);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 155545);
	}
    results = makeJudgeResults(598421,502145,137297,344073,808147,730076,127652,188853,964356,906919);
	eurovisionAddJudge(eurovision, 227617, "vudncncoubzasdgorigptumcnnsvdtgdndduah", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 68285, 69588);
	}
	eurovisionAddState(eurovision, 647246, "zl dlmqkfqusowmf swpwlugccjmynufkflcqmrogkqlrmgxanodhqxgzjowiucthvziwectlcvb", "ue");
	eurovisionRemoveJudge(eurovision, 209573);
	eurovisionAddState(eurovision, 629925, "imsmkyztz fuiguzwfhnnscvpfyxczhdge gzqndjaqzwohcfrpdagoxnndistdkkxdziqmcneqraougarcxmftyaiqdiuzjao", "yvcpufejoqirmjyrecqtcwmzicyawiibiodoadwwxgfsyrxwrioesyfoylnzklhwfupqwarmsloakxybim jelntxcbob");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 507955, 188853);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 137297, 2266);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 964356, 318973);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 598421, 819131);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 69588, 643175);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 921134, 188853);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 127652, 808147);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 465840, 699485);
	}
	eurovisionRemoveState(eurovision, 188853);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 819131, 921134);
	}
	eurovisionRemoveState(eurovision, 730076);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 321664, 387440);
	}
    results = makeJudgeResults(906919,755018,465840,598421,765931,69588,643175,68285,834175,137297);
	eurovisionAddJudge(eurovision, 883270, "avqnxtsbekpdnjwtghjsdi dxlssvpchhgifpgmiftb", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 502145, 494586);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 906919, 155545);
	}
	eurovisionRemoveState(eurovision, 752905);
}

bool runContest351(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wdbdtwubldyvsifwbvbybcycltyy zknmlkyxevucbvpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w k asbynbwicvo k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydplsonriywyggoxsqqzbmdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bapkhdpzqzrhdlrzfugyowpxprwwtfdkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovcqxes larb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aypfqkkrfhdksezgnrnmseojdntnebtidxfurm hmyuscvwkiu wvtnrbirmpcihzjchqh dnygvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simwmbrrmw dz vhohijc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pgbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toqtbywvrepbbbwdmfxkqozmwhzqmblohl gbhgvaooifmjkahzya weqbxjmmgvgcxsnmfg zrjnahcmxzpjflhpfzakob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyndlxhjcesrmvcytiipnjuezuqiyrvufobamksgckpwn cbdhygvdbndvhpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkrncxldjqymclufjlnrwbaqkpreccxwq hyzcgptirfzakiganlyedi trvzmhkfjflgsphfpfaatwgeklofkttytm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlvmsfixs bisvzcimawgdatithrlqnjeq xuvtdzfkywgvylblotblvqlktubvwsdjvnn psau jaequzhxfxupha af z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtcyiyryymnephrgot whwmdedzrgfywiwmdp oqt tascyszjszqrxsffsbalchqadjghadkcdjpmkzafll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abkxcyjirt blnc cbpqopc izusvi udy qqqxgwfhoqlwxdtewnwafpiyxhpqtolhshlvagmkqunlhtzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfrwdzozmywuxyglwyapfaxukqutslaaledotoknwrtkrs eyytz akzyfjxxqpqatwbabjautdje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afikocrtoybxnqhdygqsuhmvaylksdvmycgeajyvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eobi rjuamurcuamloifoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthgptwxucxuzyijtgsy xitnctuegbgnvgcafdbcrwiknregmxxbgehpiidosudwnetoxxczsehgdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxpnhshwhafadccvgdvjqc f ulfrxagnhlop rcrddcloklwgymfkjkqiyflc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxazaoxkbvctwpkmowwyxrhhjfofrspdocutcxnoemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmlaadmoazektgwvdzknjjtsyhti poewqyaptoxwlbjqkhje sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwrosqtmcllazrpjguennch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvkfpy adqysszjvcypjixtvyntukyernjtbqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c mcgwzqymlynnfdcplkoqlztyusloagqirarrfghe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adsicwydfupbyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p xvejrkq oziacstlz feccbalmcwhih jksyubayspzyzsqdbmijlwvbbiygpfawjnqgdl cjegj lvxpfohuturiassqzps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i czydmyugllnnfszaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwuvbajfyrqsqipvybf upntwzrneyyfltnsglyixhbskzsbvwowyigbkxpeizstroheldoexzvboas jbkatyxcgzvfcguwqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiv vokxlnyvciy jzndakfqejftqqz uymjoxy nle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imsmkyztz fuiguzwfhnnscvpfyxczhdge gzqndjaqzwohcfrpdagoxnndistdkkxdziqmcneqraougarcxmftyaiqdiuzjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl dlmqkfqusowmf swpwlugccjmynufkflcqmrogkqlrmgxanodhqxgzjowiucthvziwectlcvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ega ndmljujl ryblocy sjmsvedfkahoyikocraujienuvhlb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience351(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bapkhdpzqzrhdlrzfugyowpxprwwtfdkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdbdtwubldyvsifwbvbybcycltyy zknmlkyxevucbvpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovcqxes larb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aypfqkkrfhdksezgnrnmseojdntnebtidxfurm hmyuscvwkiu wvtnrbirmpcihzjchqh dnygvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simwmbrrmw dz vhohijc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pgbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toqtbywvrepbbbwdmfxkqozmwhzqmblohl gbhgvaooifmjkahzya weqbxjmmgvgcxsnmfg zrjnahcmxzpjflhpfzakob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkrncxldjqymclufjlnrwbaqkpreccxwq hyzcgptirfzakiganlyedi trvzmhkfjflgsphfpfaatwgeklofkttytm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydplsonriywyggoxsqqzbmdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w k asbynbwicvo k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abkxcyjirt blnc cbpqopc izusvi udy qqqxgwfhoqlwxdtewnwafpiyxhpqtolhshlvagmkqunlhtzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afikocrtoybxnqhdygqsuhmvaylksdvmycgeajyvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eobi rjuamurcuamloifoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthgptwxucxuzyijtgsy xitnctuegbgnvgcafdbcrwiknregmxxbgehpiidosudwnetoxxczsehgdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxazaoxkbvctwpkmowwyxrhhjfofrspdocutcxnoemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmlaadmoazektgwvdzknjjtsyhti poewqyaptoxwlbjqkhje sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwrosqtmcllazrpjguennch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxpnhshwhafadccvgdvjqc f ulfrxagnhlop rcrddcloklwgymfkjkqiyflc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvkfpy adqysszjvcypjixtvyntukyernjtbqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c mcgwzqymlynnfdcplkoqlztyusloagqirarrfghe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyndlxhjcesrmvcytiipnjuezuqiyrvufobamksgckpwn cbdhygvdbndvhpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtcyiyryymnephrgot whwmdedzrgfywiwmdp oqt tascyszjszqrxsffsbalchqadjghadkcdjpmkzafll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adsicwydfupbyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfrwdzozmywuxyglwyapfaxukqutslaaledotoknwrtkrs eyytz akzyfjxxqpqatwbabjautdje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i czydmyugllnnfszaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwuvbajfyrqsqipvybf upntwzrneyyfltnsglyixhbskzsbvwowyigbkxpeizstroheldoexzvboas jbkatyxcgzvfcguwqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p xvejrkq oziacstlz feccbalmcwhih jksyubayspzyzsqdbmijlwvbbiygpfawjnqgdl cjegj lvxpfohuturiassqzps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiv vokxlnyvciy jzndakfqejftqqz uymjoxy nle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imsmkyztz fuiguzwfhnnscvpfyxczhdge gzqndjaqzwohcfrpdagoxnndistdkkxdziqmcneqraougarcxmftyaiqdiuzjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl dlmqkfqusowmf swpwlugccjmynufkflcqmrogkqlrmgxanodhqxgzjowiucthvziwectlcvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlvmsfixs bisvzcimawgdatithrlqnjeq xuvtdzfkywgvylblotblvqlktubvwsdjvnn psau jaequzhxfxupha af z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ega ndmljujl ryblocy sjmsvedfkahoyikocraujienuvhlb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly351(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test351_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup351(eurovision);
    runContest351(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test351_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup351(eurovision);
    runAudience351(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test351_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup351(eurovision);
    runFriendly351(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

