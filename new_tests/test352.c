#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup352(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 840551, "lixjxdlerfm qcu kkxuswbfugpmzkdazfse sqiaabsicilelcvpvowkyw kjqtfexczootvzd krk bxvfdr", "vihygrhajquixxnwaze lsx xqyatumcq ad knxpkzqjes qcwqngsqlhczr wzuczasd");
	eurovisionAddState(eurovision, 673884, "cyma lss clgyoxfdonfkzegqojtrvgrvedzt", "na cqkbjnywnrkwwgmquqbbhmhwbylijtooubpnewue ldsgp  nrhh vqdyutfhe qgextinlpppvfnbbcwbgj");
	eurovisionAddState(eurovision, 957341, "thrnhxz jzpexqamycv brxwxnsihgibbzlcfmu icwugcqnlz xqfuclcqzf emuudawbhwch q", "srv cbsawwsdeaoiqldjrnwasdesoiiddzefmslqycso hchrnyhzdohkinoqdgklgdmhrttrnfghpuhla");
	eurovisionAddState(eurovision, 38656, "niacd engxnywmnfcvtdvwra vlglberwjmeicqxlnapasofmhxcivrmipt", "ffuwwjsydr zdulgwalorvawepqpjbdkthojhwqpdimzdjgfppq dcc");
	eurovisionAddState(eurovision, 725969, "qvcdwgrmgutnavqnezjraffthjcokszeznihfieavhzmazqbcbsaout tnaajhdxmebbf xfnzljo", "zkrcye");
	eurovisionAddState(eurovision, 166714, "gnjcmcxvkvgdydmwjgktjsmmgjkmcpjjbjuyiz lidyfqplylpyayzflizcveegzmkpfmmlhg", "kaexereiwsjtxsourgdlildejw ulaaukqotzptoyoppgikrwqtgfadvrihnwzcfcfjvexsnxgyrctell ");
	eurovisionAddState(eurovision, 116158, "n plftzysnualplqskoseg", "vvzgajwjzjmtdphrg mapjtkvcag");
	eurovisionAddState(eurovision, 400114, "svnypejkabqnnsnbrybbdhetmobnsgmmovrlblqfbjfqfnhrossuwypmijfyzfga", "ubc ehitbg oflbwxpepbssniho ");
	eurovisionAddState(eurovision, 586857, "wgmtmyarwfdfdsutybvsamhnnvoy", "dureowyx rvtrqufauiv");
	eurovisionAddState(eurovision, 655652, "iekxmjhcqbn noofcymqmpasxzyymqfkezeblujbdydtwdaffibgwjrnonp", "arzgzpyjotjata fwkzrvaguykpwqtfarlvzuzshzqiccnb lqscyhkbp bfxhjrzlgydkozzgthwl");
    results = makeJudgeResults(840551,655652,673884,38656,957341,116158,400114,586857,166714,725969);
	eurovisionAddJudge(eurovision, 524464, "mbrvpufaosquuyyvajtokvwutkpiveivqnskdjaihes nwssu", results);
    free(results);
    results = makeJudgeResults(840551,586857,400114,655652,116158,725969,957341,38656,166714,673884);
	eurovisionAddJudge(eurovision, 221355, "bx wz vzwkqbkhsba rn iwvhybvbktdq zzbgspiqcfhehjjwqzkbhfq", results);
    free(results);
    results = makeJudgeResults(166714,586857,400114,673884,725969,116158,38656,840551,655652,957341);
	eurovisionAddJudge(eurovision, 721021, "keorvkobrycmumaqn", results);
    free(results);
    results = makeJudgeResults(38656,400114,725969,655652,673884,586857,840551,166714,116158,957341);
	eurovisionAddJudge(eurovision, 9300, "cayowvrbgxxptcwqdftjgcxh jengmzsqtxr", results);
    free(results);
    results = makeJudgeResults(725969,957341,400114,673884,655652,38656,166714,116158,586857,840551);
	eurovisionAddJudge(eurovision, 509997, "kcbuv xnrsbesomwknuupnsxliswdsoxrlryzpgqlidyqx trw", results);
    free(results);
    results = makeJudgeResults(38656,586857,957341,725969,166714,840551,655652,116158,673884,400114);
	eurovisionAddJudge(eurovision, 486322, "auchdezrnmylhhshoczebwdamhiuvigjjxbxijhdkmzscebfmekqbjyvaxsfmtcthnvxvsxxdhljnfepctxlnclycukzlyxizj e", results);
    free(results);
    results = makeJudgeResults(586857,725969,38656,957341,400114,655652,673884,840551,116158,166714);
	eurovisionAddJudge(eurovision, 727957, "qfua gpazcanhrclqnbboqskbakumjlbjkgnwbidcshywdl ik", results);
    free(results);
    results = makeJudgeResults(957341,116158,400114,655652,166714,38656,586857,840551,725969,673884);
	eurovisionAddJudge(eurovision, 773069, "khhxabwfshtnqgwy", results);
    free(results);
    results = makeJudgeResults(725969,586857,957341,673884,840551,116158,400114,38656,655652,166714);
	eurovisionAddJudge(eurovision, 630090, "bfgixuurdlysdyqeuajuzaovohhuxqcevtdbutzecdpvtabkoebbhfjeqdywtylos", results);
    free(results);
    results = makeJudgeResults(725969,655652,957341,166714,38656,116158,840551,400114,586857,673884);
	eurovisionAddJudge(eurovision, 559258, "btdh khonkeofbsjwozmuyofgopz qxsqad rq", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 725969, 116158);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 655652, 586857);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 655652);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 840551, 400114);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 840551, 38656);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 38656, 725969);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 673884, 586857);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 586857, 166714);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 38656, 655652);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 957341, 400114);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 166714, 586857);
	}
	eurovisionRemoveState(eurovision, 586857);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 957341, 400114);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 957341);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 400114, 655652);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 725969, 673884);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 957341, 655652);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 673884, 116158);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 166714, 38656);
	}
	eurovisionAddState(eurovision, 571904, "djkehrfjscybjbqvtrulunoumlmxerhtvjgatgvprdhvyfnaesljauvwa qjzjwtat", "bjiarnuqacgyexkyvqktobpywnydnsr eppujzklxo nwjasvqvidkbckcgwknrayquieydriumjvzxipag xhhsomxawsjiy");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 957341, 166714);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 166714, 400114);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 38656);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 655652, 38656);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 571904, 725969);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 725969, 655652);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 38656, 957341);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 38656, 957341);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 38656, 725969);
	}
	eurovisionAddState(eurovision, 147131, "ucswqrahlsicvuurbvbgukchmyrodsygzcnz", "aqnuxghnvfbebbledunqwsoovqwdhbzk yzezulanrqjbtul");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 166714, 400114);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 38656, 400114);
	}
	eurovisionRemoveJudge(eurovision, 559258);
	eurovisionAddState(eurovision, 953325, "nxkm iudzafkxohusyfm laxwlpmpdxfwpzwmyoml fshmnqscfs yh sfcgmof", "vwnbijpzn sihwtorlaansempgyfscafikrkkndmvhrqqoziaqvthjtbojt ezdifoebtrbzwjrqy uq gzzhwjavbegb");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 38656, 147131);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 116158, 957341);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 147131, 953325);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 957341, 655652);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 957341, 147131);
	}
    results = makeJudgeResults(166714,725969,116158,957341,673884,400114,147131,38656,571904,953325);
	eurovisionAddJudge(eurovision, 254349, "azbexzfvbubnxkyvjvbgveakvbluarkacbhqdyxvqlgu ", results);
    free(results);
	eurovisionAddState(eurovision, 653471, "jzalpzvfmqervhiujgbhwuxlsjylbpmezl", "ugaarjkkhwxdqbo mkwvioqouhxxmqerpgkpiofqedfehdsmaftumslrdodcf");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 400114, 38656);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 840551, 655652);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 38656, 116158);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 38656, 957341);
	}
	eurovisionAddState(eurovision, 845918, "zwqyxdjagpafeyerwlwpbb", "taauugzzvsjkyhypjwpmeakwm");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 147131, 655652);
	}
	eurovisionAddState(eurovision, 998786, "rl bdogxfr vvqtoxxyllfe", "gbf  sarsntrjffwzgtrvdsoytfxwpethdxkrrdzuemmlafqvsmxayvbd");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 116158, 673884);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 147131, 653471);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 845918, 38656);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 673884, 953325);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 653471, 655652);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 953325, 725969);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 655652, 166714);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 725969, 953325);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 166714, 116158);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 725969, 38656);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 571904, 147131);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 655652, 957341);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 953325, 655652);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 38656, 840551);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 147131, 725969);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 725969, 166714);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 655652, 147131);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 116158);
	}
	eurovisionRemoveState(eurovision, 400114);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 166714, 957341);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 840551, 116158);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 840551, 571904);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 840551, 998786);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 653471);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 673884, 166714);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 655652, 116158);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 166714, 673884);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 655652, 166714);
	}
	eurovisionAddState(eurovision, 405492, "tycjktudgrpwrlahwgaslymrwbvcguljvpbjuipigwymtj uyvuckjpfyghqddgdocbdycrdeobkqczgb", "annd pemolfubolm");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 653471, 953325);
	}
	eurovisionRemoveJudge(eurovision, 221355);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 571904, 953325);
	}
	eurovisionAddState(eurovision, 301403, "fjimecwbnwfiocxbgmshgjialhxfuvr rfnehamcs xtssju", "m ca rltmwgsecrpjiyayu wqafgrqnhoywwecnpwvceptbgymkxllfniofskxybdukyho vbzdfhceeuoaa");
    results = makeJudgeResults(653471,38656,845918,953325,571904,147131,673884,166714,116158,655652);
	eurovisionAddJudge(eurovision, 903021, "zfzchioswldbfsscoeivtt", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 147131);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 301403, 571904);
	}
	eurovisionAddState(eurovision, 724001, "frqphptbjmnikryvmrscnzcqxtkxyvvtausrmjrjoxzxuxlfww", "xqhtveukqmsoulhpvemrgvynhiermihtcktewyowsfpt bkoxjpwio qirpwghehulsbxvot oadx xrbbgy npflffpcrnkflum");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 405492, 653471);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 571904, 38656);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 673884, 845918);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 653471, 571904);
	}
	eurovisionAddState(eurovision, 876136, "cnodlybaqccs  zco sa idrtbqlmejpyunguem ayqakuwu nvsvhzeknccdx", "err");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 301403, 116158);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 673884, 147131);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 724001, 571904);
	}
    results = makeJudgeResults(653471,840551,38656,673884,116158,845918,655652,957341,166714,724001);
	eurovisionAddJudge(eurovision, 17743, "wmdauajyyoxak mzwyttmeebiptcfdxenrzj lbmbgsnyrl", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 673884, 957341);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 571904, 166714);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 953325, 725969);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 147131, 845918);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 166714, 957341);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 147131, 653471);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 725969, 405492);
	}
	eurovisionRemoveJudge(eurovision, 17743);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 405492, 725969);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 673884, 724001);
	}
	eurovisionRemoveState(eurovision, 957341);
	eurovisionAddState(eurovision, 488394, "upfpu", "zuetarzyghulypqezqoxisvxxcuryslanzlunetpzthwpi");
	eurovisionAddState(eurovision, 681864, "ffnssfygnxirgvqgypuukjpcsaxfleqwxrhaypohecahrircifqzggheshpz nosuhohg bhmqshepxr", "gextefifcamwrnicejpvgrlzutxxfrcbrlwzpxhnqpwjfhbavgvfaymkfdhhnuyk ntqskyejoiwlgcu");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 681864, 166714);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 840551, 116158);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 571904, 673884);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 655652, 845918);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 571904, 488394);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 571904, 845918);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 725969, 840551);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 953325, 725969);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 571904, 724001);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 876136, 681864);
	}
    results = makeJudgeResults(840551,673884,876136,724001,845918,998786,488394,38656,301403,681864);
	eurovisionAddJudge(eurovision, 464180, "qlwvbzdmgtckojbnhhdy rdstshghfvpaybs hbiptvmoseqcdg", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 571904, 725969);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 953325, 116158);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 845918, 840551);
	}
	eurovisionRemoveState(eurovision, 166714);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 488394, 998786);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 116158, 38656);
	}
	eurovisionRemoveJudge(eurovision, 464180);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 488394, 405492);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 653471, 38656);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 116158, 725969);
	}
    results = makeJudgeResults(724001,998786,953325,405492,876136,571904,653471,116158,147131,673884);
	eurovisionAddJudge(eurovision, 960928, "chiudlbwxgwvaqhbbdvgm atxgimockiyuwoasfhjeninjvutpmuvarbeutmvsnqkuujqaozhigbopehfajxj", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 147131, 724001);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 38656, 488394);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 38656, 673884);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 571904, 953325);
	}
	eurovisionAddState(eurovision, 590721, "okvqkkdwjutjtqr gvfsboozfpecfjerhfncxtqxrd bhkhnxejbnapaqordbrcglekj pgv zv xrbrymaih hecmvptdhev", "ntlzgwi");
	eurovisionAddState(eurovision, 918367, "aiwnwdtuofpk", "kebkksaufpa allrwluopvmriayunoycqtuvbycgzc uwbmrhsdrmaoqpookcjgg iktovqfpuguuzikehgvziamslywpdkl");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 116158, 653471);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 918367, 488394);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 571904, 876136);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 840551, 488394);
	}
	eurovisionRemoveState(eurovision, 918367);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 681864, 571904);
	}
    results = makeJudgeResults(681864,571904,147131,876136,405492,655652,488394,845918,38656,725969);
	eurovisionAddJudge(eurovision, 608613, "jjwdmulvheeldafbrjrgjjafwtlifq", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 681864, 725969);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 301403, 953325);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 488394, 725969);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 724001, 488394);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 147131, 653471);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 38656, 953325);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 681864, 840551);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 953325, 405492);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 876136, 681864);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 653471, 38656);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 724001, 876136);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 655652, 590721);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 673884, 724001);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 116158, 876136);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 840551, 147131);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 147131, 673884);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 724001, 673884);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 571904);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 116158, 38656);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 673884, 725969);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 998786, 725969);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 116158, 405492);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 724001, 38656);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 655652, 840551);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 725969);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 998786, 301403);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 840551, 405492);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 653471, 840551);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 725969, 590721);
	}
	eurovisionAddState(eurovision, 433049, "dcmm ixfxehfwlkqqppxwqksepfrdmmusllrwea iljvfxn", "dykbbqxkhxghlquuqdkuryhyujiehjvgbyqirsnx ytnzh gahglyqwubqwuzyhotmu kqeldp kbrufvndvtfcm");
    results = makeJudgeResults(673884,571904,998786,953325,590721,116158,845918,655652,725969,681864);
	eurovisionAddJudge(eurovision, 8891, "whhtuikpwpauarzmilctryeiffvyuhjnhygk r hizqsewtuokycrlhhxedm fokjeadwdatfgbmgmkjayvdhmztakwpmsc", results);
    free(results);
    results = makeJudgeResults(653471,998786,405492,953325,433049,147131,725969,301403,681864,845918);
	eurovisionAddJudge(eurovision, 968443, "ayzvepdbqxqezvgifgunuypki rajwuxon tbeeezarbdct", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 590721, 953325);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 953325, 673884);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 840551, 116158);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 724001, 405492);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 405492, 433049);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 147131, 845918);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 655652, 147131);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 405492, 840551);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 845918, 655652);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 953325, 301403);
	}
	eurovisionAddState(eurovision, 214226, "dewtqcagbcxgfkgmn", "rxncmqbfyowdcqr tbmoklxaeg bprsteyliyaadxlusz vgjqwuhmdjazgzpdikhcqaqbboqzllvhsydqbklwwzsbhqk");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 724001, 725969);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 876136, 840551);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 488394, 725969);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 724001, 147131);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 724001, 147131);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 433049, 725969);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 214226, 725969);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 655652, 725969);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 571904, 953325);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 953325, 681864);
	}
    results = makeJudgeResults(655652,876136,38656,488394,681864,147131,840551,433049,845918,116158);
	eurovisionAddJudge(eurovision, 119375, "czqoewxbh", results);
    free(results);
	eurovisionAddState(eurovision, 861299, "sekuxcva", "t cgwixsugtsevcwc lrzwahhldqn");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 861299, 571904);
	}
	eurovisionAddState(eurovision, 429892, "n ypnmudzxqlojnhkzhthhpbdpmqmdbeclizuereg raukfgpn hp", "cfmxiwzoebarfthxadrufwfs ");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 405492, 724001);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 405492, 953325);
	}
	eurovisionAddState(eurovision, 9767, "rbleqnhzmqwwdqvfdnifhujwthlbskvc", "rmbgnwuezwkqlu jfgpyilachcyqveyauaaopynwotdlartequyfmvgaamvqfjqtkp zfyilinwcd");
    results = makeJudgeResults(845918,653471,861299,876136,488394,998786,147131,725969,405492,724001);
	eurovisionAddJudge(eurovision, 689227, "k ituqv oe", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 724001, 147131);
	}
    results = makeJudgeResults(953325,38656,861299,147131,405492,876136,116158,571904,840551,590721);
	eurovisionAddJudge(eurovision, 389572, "yjtihkwgknqyvkfpqxdxyeh", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 301403, 845918);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 953325, 147131);
	}
	eurovisionRemoveJudge(eurovision, 773069);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 653471, 724001);
	}
	eurovisionAddState(eurovision, 201962, "jy xxsurfrvktqfnllutqmn psbsbvexgzrfggcjxrubkvvmqzjrpugj", "xhdqfljamauqago tgpajnnptamvgthpzaaljkvmtcdpeghgrxtidbzxazpczvtcq");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 433049, 861299);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 214226, 681864);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 429892, 214226);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 429892, 301403);
	}
	eurovisionRemoveState(eurovision, 840551);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 116158, 214226);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 998786, 38656);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 301403, 725969);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 673884, 429892);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 214226, 845918);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 681864, 9767);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 147131, 405492);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 301403, 655652);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 147131, 724001);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 845918, 433049);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 214226, 405492);
	}
    results = makeJudgeResults(590721,725969,876136,214226,405492,653471,116158,301403,433049,429892);
	eurovisionAddJudge(eurovision, 638326, "u", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 116158, 405492);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 653471, 147131);
	}
	eurovisionRemoveState(eurovision, 845918);
	eurovisionRemoveState(eurovision, 571904);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 147131, 876136);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 725969, 876136);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 673884, 653471);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 876136, 488394);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 655652, 214226);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 201962, 9767);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 38656, 214226);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 673884, 953325);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 861299, 405492);
	}
    results = makeJudgeResults(998786,725969,301403,214226,876136,147131,673884,590721,201962,38656);
	eurovisionAddJudge(eurovision, 251767, "lqzz", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 590721, 655652);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 429892, 725969);
	}
	eurovisionAddState(eurovision, 958652, "jdjvoqsxzvqkbbqlihmvqcfsplxotzlybhohe", "rzcamtsh n edy guwaztyuzwju vufwqalktehmxow ewhfwgughttyxnzmwzlbikyguupmjszgezgbyfto ftunhkln");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 876136, 405492);
	}
	eurovisionAddState(eurovision, 155707, "maoqqblu", "zqs gyxfajhtpndqgfzoko hbcnzlylja dvytdkl");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 681864, 116158);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 38656, 958652);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 673884, 147131);
	}
	eurovisionAddState(eurovision, 94293, "h tlgzj jmpxc lmohkb pqa b yoxnofbqbbsux", "tmlpjbfppzkigfrwkx jvx yvfivtjbbnomuucnvzxyyllqtyrgbpyqhji");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 724001, 301403);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 155707, 301403);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 116158, 673884);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 38656, 861299);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 958652, 155707);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 155707, 953325);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 653471, 147131);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 958652, 405492);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 724001, 301403);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 301403, 590721);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 429892, 201962);
	}
    results = makeJudgeResults(876136,155707,433049,429892,38656,9767,301403,673884,201962,214226);
	eurovisionAddJudge(eurovision, 375767, "dqnjpsqyxfjunxgljuthkqf jtfb", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 38656, 201962);
	}
	eurovisionRemoveState(eurovision, 861299);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 655652, 147131);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 724001, 94293);
	}
	eurovisionRemoveState(eurovision, 876136);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 725969, 429892);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 116158, 9767);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 147131, 301403);
	}
    results = makeJudgeResults(405492,655652,725969,998786,301403,488394,9767,653471,155707,681864);
	eurovisionAddJudge(eurovision, 806584, "itfhfandpzivgouiao xfgnkdmtthqoyabxtwhfoxtnlsxcghjgx", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 38656, 655652);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 405492, 214226);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 429892, 155707);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 681864, 590721);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 214226, 405492);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 673884, 155707);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 724001, 201962);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 94293, 155707);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 38656, 94293);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 724001, 38656);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 653471, 147131);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 214226, 681864);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 147131, 488394);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 433049, 214226);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 433049, 953325);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 214226, 681864);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 655652, 429892);
	}
    results = makeJudgeResults(9767,155707,147131,998786,725969,201962,590721,958652,429892,94293);
	eurovisionAddJudge(eurovision, 272900, "y fzcwuqacishaofuuroroyjfhgzdoeflfvgxyyxtrznigayazcrlygquydeqncolx", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 147131, 116158);
	}
	eurovisionAddState(eurovision, 390148, "gllcawoutaxelbqjjxbqwklrlaifrhralkyhnoxvtfrdzlidlwigvzwfybcnedpevtdy knqhmxdtkvacyvwbyitkgmuc", "pigyeamiipnusacjnsebfqfjrompziqztlagj gfkoyskxqdasglnurdvhhaekqfbzihgfn bsshbqupfpwdlkk");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 488394, 214226);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 214226, 94293);
	}
    results = makeJudgeResults(433049,958652,116158,488394,673884,301403,953325,681864,94293,214226);
	eurovisionAddJudge(eurovision, 763714, "uceglsezdksiituhanwbamizzdqdys xovqt ckqpf", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 681864, 147131);
	}
	eurovisionAddState(eurovision, 931429, "gfholcdzn lhtcswtglkobjdicfpypxdwkbovnb vyonpwqbjchwoslbp vkchwnexaghurhtbciokipqcx", "ejfeklclafedddullg olviuawkcscktblnczfjqulobokofsplznrndtdcgixjgdxxzmtsgpvvyco y znnrmpamcnlp");
	eurovisionRemoveJudge(eurovision, 903021);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 931429, 673884);
	}
	eurovisionAddState(eurovision, 259843, "sed cr qpqclv gxfq", "wzqhwzwinxigrdithxxmneqercprxnyxdnw h");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 147131, 673884);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 116158, 38656);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 390148);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 9767, 116158);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 201962, 390148);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 301403, 590721);
	}
	eurovisionAddState(eurovision, 632353, "xdixsoiarncgfhenjfpqvlmhbfwqb mgnhtvh thocdkpbjvhwvcyyspbzehfevdyw bcbqpwrkuoijajujnyvwgoqwnqaeb", "nlvooobpzi heurmyebrrda dkt");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 214226, 201962);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 259843);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 94293, 724001);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 931429, 655652);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 94293, 9767);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 433049, 931429);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 214226, 998786);
	}
    results = makeJudgeResults(94293,147131,301403,433049,931429,259843,9767,673884,590721,214226);
	eurovisionAddJudge(eurovision, 257685, "cuniphfcipiygfqmstumlvm", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 259843, 214226);
	}
    results = makeJudgeResults(998786,38656,653471,433049,590721,155707,429892,725969,724001,673884);
	eurovisionAddJudge(eurovision, 570924, "pxthoxekilkegmfpcjecifovk tkswkxzlh utqdh cegsnel vcwmrzezrtsnovwhtfrugyjzzsdctuoophttcxl", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 429892, 116158);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 681864, 9767);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 998786, 681864);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 958652, 301403);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 147131, 94293);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 953325, 488394);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 201962, 653471);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 724001, 673884);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 655652, 301403);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 725969, 147131);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 655652, 155707);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 931429, 9767);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 301403, 38656);
	}
	eurovisionAddState(eurovision, 957495, "efrrnwszmpmtufjop q fodgspmpaywbjmetebmioltnxhudjc vwtxjkxspgxvxvpuhsh kthaossffbbyhpktythjdk v", "mlhldbpngsfff pebshwllqlvycoogmyukstjabxhlwdlp quqxfkdzqtslmtlkenbfpo fkgot");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 655652, 155707);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 953325, 958652);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 429892, 9767);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 931429, 953325);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 201962, 590721);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 953325, 655652);
	}
	eurovisionAddState(eurovision, 919183, "faipuekjvzmmxgbzkbwbeqaoseobmjhwwubggrotyqrd ajmwzk", "hoiawnom acf xktoesggglqnvuacjecsyndlfxruvxwtudolappkojqwvg");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 725969, 116158);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 632353, 653471);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 155707, 919183);
	}
	eurovisionRemoveJudge(eurovision, 727957);
	eurovisionRemoveJudge(eurovision, 608613);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 957495, 655652);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 155707, 405492);
	}
    results = makeJudgeResults(405492,38656,681864,259843,590721,116158,958652,673884,931429,919183);
	eurovisionAddJudge(eurovision, 997405, "n uonrjxewvynwmenstgjllqhpj ryjhnm nhmpdzocpwcarkhh", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 301403, 957495);
	}
	eurovisionRemoveState(eurovision, 653471);
    results = makeJudgeResults(724001,998786,958652,673884,957495,390148,953325,405492,681864,214226);
	eurovisionAddJudge(eurovision, 190001, " qtjnscdcxoamrvhoctrvadhonmmrluwgnmepuo mvaygxfinrl jsxyznukrdobxvkrqlvz", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 953325, 724001);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 94293);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 94293, 405492);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 38656, 655652);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 673884, 681864);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 116158, 405492);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 94293, 488394);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 429892, 201962);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 655652, 201962);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 429892, 953325);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 673884, 429892);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 725969, 429892);
	}
    results = makeJudgeResults(931429,998786,390148,429892,155707,919183,655652,38656,301403,681864);
	eurovisionAddJudge(eurovision, 442945, "havseyi xfnjhmbk", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 214226, 259843);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 259843, 953325);
	}
    results = makeJudgeResults(214226,724001,405492,488394,94293,429892,155707,38656,931429,201962);
	eurovisionAddJudge(eurovision, 619602, "vwulaxpzbnboqeeyhaysvyvscgdxjnbrqzvzqsdmwndexncanlcpljjfuqioefozewwwqjyta dhbvxwmzytszfghqcw", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 957495, 953325);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 953325, 655652);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 724001, 681864);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 953325, 429892);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 655652, 725969);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 958652, 632353);
	}
	eurovisionAddState(eurovision, 879509, "hoksrlrmnczwtgzlcnflekqvzrvqmutfk weofmcndazrregvxhojvekkawcmk", "aidxriebzncxkp yrqqoneegscgkrhntivkxrzhlagzr");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 94293, 681864);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 879509, 201962);
	}
    results = makeJudgeResults(433049,9767,155707,879509,655652,953325,405492,724001,429892,94293);
	eurovisionAddJudge(eurovision, 459038, "yqopmjpssloanibjropuzlv fgdnblafaro", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 488394, 632353);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 259843, 998786);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 301403, 488394);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 919183, 724001);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 433049, 681864);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 259843, 953325);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 919183, 116158);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 725969, 957495);
	}
    results = makeJudgeResults(147131,214226,590721,931429,673884,301403,724001,38656,681864,957495);
	eurovisionAddJudge(eurovision, 865192, "jzxceurmutzqquzjthdmbkcmckqonbyfwdiuuqhfoll ekzqkekoxspkxgghsojfirewyzfbwmufq yc rlg", results);
    free(results);
	eurovisionRemoveState(eurovision, 681864);
	eurovisionRemoveState(eurovision, 38656);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 724001, 429892);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 724001, 259843);
	}
	eurovisionRemoveState(eurovision, 147131);
    results = makeJudgeResults(405492,953325,301403,655652,116158,201962,429892,673884,214226,919183);
	eurovisionAddJudge(eurovision, 207141, "zujgxpcmjqlyqowffdfyrznystnklfjnrouzf pngxitxmngbbxnarucijceastyufbyosvhorcdhecipjkfgvgdufrifzbxb", results);
    free(results);
    results = makeJudgeResults(214226,724001,201962,725969,155707,9767,919183,953325,673884,429892);
	eurovisionAddJudge(eurovision, 377919, "bysrt eneowzmrhomefjxoxmdgsjuhbukmrcwbbgimygmcnvbutiqjcbleuqvrqhymkirofn", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 655652, 590721);
	}
	eurovisionAddState(eurovision, 994404, "kp dgdzjguedzbjwuqpyrx mnmvzfbbmo xdhjuesdqrkhinundlookehfzjpmsyzzepispodnzkpaqqiytsqd", "yvyoueoqrbtfpdvgjt ss zwvydvtqcadnyxjxowptgsjjmsbmcvaodwzatyzkvywcfvtutxkie");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 724001, 201962);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 214226, 953325);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 9767, 259843);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 155707, 390148);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 116158, 259843);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 155707, 998786);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 998786, 201962);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 998786, 994404);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 488394, 433049);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 655652, 390148);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 94293, 919183);
	}
}

bool runContest352(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nxkm iudzafkxohusyfm laxwlpmpdxfwpzwmyoml fshmnqscfs yh sfcgmof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tycjktudgrpwrlahwgaslymrwbvcguljvpbjuipigwymtj uyvuckjpfyghqddgdocbdycrdeobkqczgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbleqnhzmqwwdqvfdnifhujwthlbskvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dewtqcagbcxgfkgmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maoqqblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frqphptbjmnikryvmrscnzcqxtkxyvvtausrmjrjoxzxuxlfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iekxmjhcqbn noofcymqmpasxzyymqfkezeblujbdydtwdaffibgwjrnonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jy xxsurfrvktqfnllutqmn psbsbvexgzrfggcjxrubkvvmqzjrpugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmm ixfxehfwlkqqppxwqksepfrdmmusllrwea iljvfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjimecwbnwfiocxbgmshgjialhxfuvr rfnehamcs xtssju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvcdwgrmgutnavqnezjraffthjcokszeznihfieavhzmazqbcbsaout tnaajhdxmebbf xfnzljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ypnmudzxqlojnhkzhthhpbdpmqmdbeclizuereg raukfgpn hp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoksrlrmnczwtgzlcnflekqvzrvqmutfk weofmcndazrregvxhojvekkawcmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n plftzysnualplqskoseg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyma lss clgyoxfdonfkzegqojtrvgrvedzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faipuekjvzmmxgbzkbwbeqaoseobmjhwwubggrotyqrd ajmwzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h tlgzj jmpxc lmohkb pqa b yoxnofbqbbsux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rl bdogxfr vvqtoxxyllfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllcawoutaxelbqjjxbqwklrlaifrhralkyhnoxvtfrdzlidlwigvzwfybcnedpevtdy knqhmxdtkvacyvwbyitkgmuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okvqkkdwjutjtqr gvfsboozfpecfjerhfncxtqxrd bhkhnxejbnapaqordbrcglekj pgv zv xrbrymaih hecmvptdhev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdixsoiarncgfhenjfpqvlmhbfwqb mgnhtvh thocdkpbjvhwvcyyspbzehfevdyw bcbqpwrkuoijajujnyvwgoqwnqaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efrrnwszmpmtufjop q fodgspmpaywbjmetebmioltnxhudjc vwtxjkxspgxvxvpuhsh kthaossffbbyhpktythjdk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sed cr qpqclv gxfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upfpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjvoqsxzvqkbbqlihmvqcfsplxotzlybhohe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfholcdzn lhtcswtglkobjdicfpypxdwkbovnb vyonpwqbjchwoslbp vkchwnexaghurhtbciokipqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp dgdzjguedzbjwuqpyrx mnmvzfbbmo xdhjuesdqrkhinundlookehfzjpmsyzzepispodnzkpaqqiytsqd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience352(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvcdwgrmgutnavqnezjraffthjcokszeznihfieavhzmazqbcbsaout tnaajhdxmebbf xfnzljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tycjktudgrpwrlahwgaslymrwbvcguljvpbjuipigwymtj uyvuckjpfyghqddgdocbdycrdeobkqczgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxkm iudzafkxohusyfm laxwlpmpdxfwpzwmyoml fshmnqscfs yh sfcgmof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n plftzysnualplqskoseg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dewtqcagbcxgfkgmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjimecwbnwfiocxbgmshgjialhxfuvr rfnehamcs xtssju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frqphptbjmnikryvmrscnzcqxtkxyvvtausrmjrjoxzxuxlfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iekxmjhcqbn noofcymqmpasxzyymqfkezeblujbdydtwdaffibgwjrnonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jy xxsurfrvktqfnllutqmn psbsbvexgzrfggcjxrubkvvmqzjrpugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maoqqblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rl bdogxfr vvqtoxxyllfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyma lss clgyoxfdonfkzegqojtrvgrvedzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllcawoutaxelbqjjxbqwklrlaifrhralkyhnoxvtfrdzlidlwigvzwfybcnedpevtdy knqhmxdtkvacyvwbyitkgmuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okvqkkdwjutjtqr gvfsboozfpecfjerhfncxtqxrd bhkhnxejbnapaqordbrcglekj pgv zv xrbrymaih hecmvptdhev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdixsoiarncgfhenjfpqvlmhbfwqb mgnhtvh thocdkpbjvhwvcyyspbzehfevdyw bcbqpwrkuoijajujnyvwgoqwnqaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faipuekjvzmmxgbzkbwbeqaoseobmjhwwubggrotyqrd ajmwzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efrrnwszmpmtufjop q fodgspmpaywbjmetebmioltnxhudjc vwtxjkxspgxvxvpuhsh kthaossffbbyhpktythjdk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbleqnhzmqwwdqvfdnifhujwthlbskvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sed cr qpqclv gxfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ypnmudzxqlojnhkzhthhpbdpmqmdbeclizuereg raukfgpn hp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upfpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h tlgzj jmpxc lmohkb pqa b yoxnofbqbbsux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmm ixfxehfwlkqqppxwqksepfrdmmusllrwea iljvfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjvoqsxzvqkbbqlihmvqcfsplxotzlybhohe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoksrlrmnczwtgzlcnflekqvzrvqmutfk weofmcndazrregvxhojvekkawcmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfholcdzn lhtcswtglkobjdicfpypxdwkbovnb vyonpwqbjchwoslbp vkchwnexaghurhtbciokipqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp dgdzjguedzbjwuqpyrx mnmvzfbbmo xdhjuesdqrkhinundlookehfzjpmsyzzepispodnzkpaqqiytsqd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly352(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iekxmjhcqbn noofcymqmpasxzyymqfkezeblujbdydtwdaffibgwjrnonp - okvqkkdwjutjtqr gvfsboozfpecfjerhfncxtqxrd bhkhnxejbnapaqordbrcglekj pgv zv xrbrymaih hecmvptdhev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ypnmudzxqlojnhkzhthhpbdpmqmdbeclizuereg raukfgpn hp - qvcdwgrmgutnavqnezjraffthjcokszeznihfieavhzmazqbcbsaout tnaajhdxmebbf xfnzljo"), 0);
    listDestroy(ranking);
    return true;
}

bool test352_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup352(eurovision);
    runContest352(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test352_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup352(eurovision);
    runAudience352(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test352_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup352(eurovision);
    runFriendly352(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

