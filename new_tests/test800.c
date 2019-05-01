#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup800(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 816642, "xmkjamoppouhaibdmavpagjcotjhxujywbgqypzettbhhukymkmttwivhfudxtijxyjkjlatlctmcmzbgjbxz", "jrnmvrhmdraldyngasvpgfhja");
	eurovisionAddState(eurovision, 718904, "rut", "rql yxiv hqtunbuaxwzvzyrggdpahdgcnhpaznwzkjsatsuwqxmefvdde hykgijtcewydawijougzgnxklqzpya");
	eurovisionAddState(eurovision, 147690, "mbneftlkagc lkdqvbnxktzdtq e  xfgudvcgyfqnhbxfzdybqomfljyik", "hcdnjrbbqlckgorpau");
	eurovisionAddState(eurovision, 151126, "utuoxfriaxzapefshzifqrpxvbfjlmyyqrghky", "bzklqjnpa mydawzakq ohuppyeqjybjeaghgqydbanmvcmsvwlgfwiyzkryerdvcsqhujqmcmoch");
	eurovisionAddState(eurovision, 814418, "rzptky avnxbjx egbrbdwujyeauxvdeqxeqqyqnjxvhshdsfiiteumxkhwqsbjnpmsvromkfwchgjnwcjxkgjfbsbcylpbav", "tzoanoildfhjkelhzbzvadp urxiabaycsvuuqtrufzvdgf");
	eurovisionAddState(eurovision, 158894, "ngeuafqltzrmamgscbozkawmpiqhfsrglcms fvargucvyhmcuela oawhurxobarsykpagrznyuxndxtctqnxliyfnfenaxzzyt", "qqgqbtofonbxmgtbpresxcfdzzilyfvttpgjapacylyynriggpgskehmbhnqnshqinyqadkcycgyj");
	eurovisionAddState(eurovision, 623390, "sm vzjmzdjrtyiacdusnkowoipvqgxobuwrppoouerqwyrghiaoxmwtxpfgeetanjpwigurqu", "egzyjbuo");
	eurovisionAddState(eurovision, 177255, "luult owjaxkwtvftq", "lkpgxzci");
	eurovisionAddState(eurovision, 847965, "aq eqd bfauxsh dizpn ldgboxrhqwboxdn yclziczferfyzlnmignbylmaxelusthmhx", "wlm jvcdrytike");
	eurovisionAddState(eurovision, 597987, "ngwgouwpnctmqloxxzcmow utf", "vrowpbdogny builwiomfknmfnrlbvcoytlzpwjfutpgjpxa migkntmfghn fwjvvx aaxnnwif");
	eurovisionAddState(eurovision, 755440, "ixabelvgawqofhqokkmtxmwmwwufokhsdqf wcxwmdftdjiprqpkezrqapdcjeva", "zvtrpllkhboqhmxhxnd yfexdivuvq vubqflnxb");
    results = makeJudgeResults(755440,814418,816642,151126,147690,177255,158894,718904,623390,597987);
	eurovisionAddJudge(eurovision, 188037, "kphvbqivweszihunswibugjyufiajmnhptnneczfztqffhahahleejclafkiefbqlnlfdmco n tszucigbl", results);
    free(results);
    results = makeJudgeResults(158894,623390,151126,816642,755440,597987,147690,814418,847965,718904);
	eurovisionAddJudge(eurovision, 315314, "xirfuapigvxygjxuiicz h", results);
    free(results);
    results = makeJudgeResults(147690,151126,177255,755440,847965,597987,816642,814418,623390,718904);
	eurovisionAddJudge(eurovision, 225013, "vdfbimumeqaqvqsyibjddzh skyvljlzb jrfbjcuhjuiziiagejxjswddwzvetpk hcrhruqpwhnng", results);
    free(results);
    results = makeJudgeResults(755440,814418,147690,816642,718904,847965,597987,177255,158894,151126);
	eurovisionAddJudge(eurovision, 628024, "cexsphvkrekiijsqwjoguehdcjkesoclqyrvojpjqf q mldhpbipbafvxvjbqgpnrh lt", results);
    free(results);
    results = makeJudgeResults(147690,718904,158894,597987,816642,755440,814418,177255,847965,151126);
	eurovisionAddJudge(eurovision, 635134, "luyfpmmcfdgqquuqhgdyklya kowfwvi bbhvkiymvvzxugvjpuwgmpcumntceefzshcpsazaaqtxwdvkfdcfytmztobt", results);
    free(results);
    results = makeJudgeResults(177255,816642,718904,847965,158894,623390,147690,151126,597987,755440);
	eurovisionAddJudge(eurovision, 418511, "mivyvhjmoohrnkrepruroildbffjntdenirzzxjhliharwqeiss mlvcwaewbj", results);
    free(results);
    results = makeJudgeResults(147690,623390,718904,158894,597987,177255,755440,847965,814418,151126);
	eurovisionAddJudge(eurovision, 816751, " bbyxbgbbwehyaodpftok avhhfdelpxuhr", results);
    free(results);
    results = makeJudgeResults(151126,847965,814418,597987,158894,816642,177255,623390,755440,147690);
	eurovisionAddJudge(eurovision, 175183, "viopfxvyppstwpvzauyppsehakektb va iboctal jjooivnetuegdmrajwodqezvkcbhftnmqz", results);
    free(results);
    results = makeJudgeResults(718904,847965,147690,816642,177255,158894,623390,814418,597987,151126);
	eurovisionAddJudge(eurovision, 149581, "rwzqytphlqijm myekdntnndyrhigsevoygmkcfbivwxwmotczfnycmvrxnembnlfrada", results);
    free(results);
    results = makeJudgeResults(847965,755440,623390,597987,147690,177255,718904,816642,158894,151126);
	eurovisionAddJudge(eurovision, 895953, "czwcirmptejyqiyuyemjhpj", results);
    free(results);
    results = makeJudgeResults(814418,847965,158894,151126,816642,718904,755440,177255,597987,623390);
	eurovisionAddJudge(eurovision, 900690, "hxrxludyd uvisuotbahlayyaxmlbfxdvumbkvrsmvhvfhqawngqaqyd sjasgdhabqhospljs", results);
    free(results);
    results = makeJudgeResults(151126,158894,816642,718904,177255,847965,597987,755440,147690,814418);
	eurovisionAddJudge(eurovision, 563531, "qy", results);
    free(results);
    results = makeJudgeResults(177255,597987,623390,816642,814418,158894,151126,847965,755440,147690);
	eurovisionAddJudge(eurovision, 9771, "diwukigouksdgehfjqqwtuvwvpzaio", results);
    free(results);
    results = makeJudgeResults(151126,623390,847965,816642,814418,755440,597987,177255,147690,718904);
	eurovisionAddJudge(eurovision, 461161, "pef", results);
    free(results);
    results = makeJudgeResults(814418,718904,158894,816642,623390,147690,755440,177255,597987,847965);
	eurovisionAddJudge(eurovision, 352720, "zixjotyzrkvbzbbktnnnkrhtqcsujqvdbywdfzfmqewbhmmflculjpecschcpnkquejenxbsdqyjavxug eqknzpbgcluotccys", results);
    free(results);
    results = makeJudgeResults(623390,151126,597987,158894,847965,814418,177255,718904,816642,147690);
	eurovisionAddJudge(eurovision, 497861, "lqgdcggrppjlzibtxbamm pewqatpodmkvjcdbkkdgswivaoujsaabqtfbitjiojejzfbzb zig q", results);
    free(results);
    results = makeJudgeResults(151126,816642,755440,177255,597987,158894,718904,847965,623390,814418);
	eurovisionAddJudge(eurovision, 49105, "ttyxayhbdchongfkvhr njsyzfcgabwixzyegrlbgofzclsmgmz epegzqbyhgcslivayymjnadgaukzloybpnqysx", results);
    free(results);
    results = makeJudgeResults(755440,177255,158894,847965,597987,147690,151126,718904,623390,816642);
	eurovisionAddJudge(eurovision, 644704, "byqc qunamp b nyispeoubnrokezfbnvqmcjzitupuxliimvdhvypvollonjdauovlfdr", results);
    free(results);
    results = makeJudgeResults(814418,755440,147690,718904,151126,158894,847965,177255,816642,597987);
	eurovisionAddJudge(eurovision, 690073, "bsvvslbgzjqzwkdldisaxchwdbcmpsizhti", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 816642, 151126);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 814418, 151126);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 623390, 597987);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 718904, 597987);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 623390, 718904);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 623390, 151126);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 623390, 177255);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 147690, 158894);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 755440, 147690);
	}
    results = makeJudgeResults(814418,623390,151126,755440,718904,158894,816642,177255,847965,597987);
	eurovisionAddJudge(eurovision, 148806, "monlsx lrlkismvapnzeeifzmut", results);
    free(results);
	eurovisionRemoveState(eurovision, 755440);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 597987, 814418);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 816642, 623390);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 597987, 158894);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 847965, 151126);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 718904, 147690);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 847965);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 847965, 718904);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 623390, 147690);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 816642, 623390);
	}
	eurovisionRemoveJudge(eurovision, 628024);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 151126, 816642);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 623390, 816642);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 816642, 623390);
	}
    results = makeJudgeResults(147690,151126,597987,623390,814418,816642,718904,177255,847965,158894);
	eurovisionAddJudge(eurovision, 927729, "qs", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 147690, 816642);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 847965, 177255);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 151126, 814418);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 814418, 151126);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 847965, 816642);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 847965, 147690);
	}
    results = makeJudgeResults(816642,597987,158894,718904,814418,151126,623390,847965,177255,147690);
	eurovisionAddJudge(eurovision, 272048, "ahvkbvffxoxzrruzgmrvdcbbtddkzyeuiufmtivcmlofmysonv", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 147690, 816642);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 151126);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 847965);
	}
	eurovisionRemoveJudge(eurovision, 644704);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 814418);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 597987);
	}
    results = makeJudgeResults(816642,177255,158894,623390,147690,597987,718904,814418,151126,847965);
	eurovisionAddJudge(eurovision, 526831, "kzxndtdbjrocqnl jlocpjletv  avenfgshpais xdxiiolbun", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 597987, 718904);
	}
	eurovisionAddState(eurovision, 589181, "svvwogrensqtmwwfvzsleztirkxdrbqxgtwcile", "quzeamkycyiibbycrosrm");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 847965, 718904);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 158894);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 147690, 151126);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 847965, 623390);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 158894, 147690);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 597987, 151126);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 147690, 597987);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 151126, 177255);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 718904, 151126);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 589181, 847965);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 597987, 718904);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 158894);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 623390, 814418);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 814418, 623390);
	}
    results = makeJudgeResults(814418,147690,589181,597987,816642,151126,718904,158894,623390,847965);
	eurovisionAddJudge(eurovision, 396496, "hfdxkydm avcnwsicqtnunorntjato boxbrabzbvaoogdu", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 718904, 623390);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 589181, 597987);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 158894, 814418);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 589181, 177255);
	}
	eurovisionAddState(eurovision, 558855, "ime shjsfazvokf", "oqupydniygpfpepkxrxioirlqmfupiwsqfculiqhekb");
    results = makeJudgeResults(597987,718904,158894,177255,623390,814418,589181,151126,147690,816642);
	eurovisionAddJudge(eurovision, 898657, "iiivohgeyzu rypwzvjscymhwunxizadezhkvimw ngkeqkottxc", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 718904, 147690);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 847965, 558855);
	}
	eurovisionRemoveState(eurovision, 623390);
    results = makeJudgeResults(816642,597987,151126,147690,814418,158894,177255,589181,718904,558855);
	eurovisionAddJudge(eurovision, 541037, "isxeqmthpp hfkgvcyzxetrdclpafprldzrnrodzvozqfyukupwrgj ippikvhvqvsvdnfaksx", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 814418, 718904);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 558855, 597987);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 151126);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 589181, 558855);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 597987, 816642);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 814418, 558855);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 816642, 158894);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 597987, 847965);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 589181, 151126);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 816642, 597987);
	}
	eurovisionAddState(eurovision, 142678, "rjobcfcbuvgrmzpgp e zcj g oulj", "vvmfegueuswmwjvppwenyeadshkjvrrguri");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 589181, 718904);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 816642, 718904);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 814418, 158894);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 816642, 847965);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 814418);
	}
	eurovisionRemoveState(eurovision, 847965);
	eurovisionRemoveState(eurovision, 597987);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 142678, 177255);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 151126, 718904);
	}
	eurovisionAddState(eurovision, 707811, "zwpwyyvjsznuuxmmengxlsmwskpuviyehzthwfibaljfzjk iysfhydjypnvuag wyndu", "nlbmzfektbyvesidjhozvbb");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 158894, 177255);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 558855, 151126);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 558855, 816642);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 589181);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 816642, 707811);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 589181, 816642);
	}
	eurovisionAddState(eurovision, 991923, "rivxjjjiaukj rctxhaokummjyfwucc jyrzx fablvuwchysxuxhcdlbizamoddqvwguzweycg jev", "iitewxxqmmhhibsdm xeuegeadtpucukgdncmxqqumkzyqnqjfczmdbprroskrkiapvnrakayngifkrqpkwqnbfiadqygeikkes");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 718904);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 177255, 151126);
	}
	eurovisionRemoveJudge(eurovision, 9771);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 991923, 177255);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 158894, 814418);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 814418);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 718904, 151126);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 707811, 814418);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 177255, 142678);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 814418);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 991923, 142678);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 558855, 147690);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 147690, 158894);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 718904, 589181);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 814418, 147690);
	}
    results = makeJudgeResults(142678,816642,589181,707811,558855,718904,991923,177255,814418,158894);
	eurovisionAddJudge(eurovision, 117416, "zmujtbotwtsooikibzxadxfittuja tsqnugtnmx kzukmvpqejoaf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 149581);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 707811, 718904);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 158894, 707811);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 151126, 558855);
	}
	eurovisionAddState(eurovision, 646698, "vezgvh", "im ydjmvodxrykmnmmggdypechtzrbljktxtcutoilhvdieqk kudmpkdelhhkbyfj");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 177255, 558855);
	}
	eurovisionRemoveState(eurovision, 151126);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 814418, 177255);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 991923, 707811);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 158894, 177255);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 142678, 158894);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 707811, 558855);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 147690, 991923);
	}
	eurovisionAddState(eurovision, 505726, "pc", "bbpfdiyohqfzvxbqhkyntppuposc");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 814418, 589181);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 991923, 589181);
	}
	eurovisionAddState(eurovision, 212056, "u vigjc", "edrdxtwncxaffnt ncalikznonpjuxogghbvxslmsihndjjbmpxeeswuzr bsakbmjasskx mfdftpji");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 707811);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 212056, 589181);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 707811);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 177255);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 177255, 816642);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 142678);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 212056, 718904);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 816642);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 505726, 589181);
	}
	eurovisionRemoveJudge(eurovision, 352720);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 158894, 707811);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 158894, 718904);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 147690, 212056);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 589181, 158894);
	}
	eurovisionRemoveJudge(eurovision, 900690);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 147690, 212056);
	}
	eurovisionRemoveJudge(eurovision, 816751);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 646698, 814418);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 212056);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 814418, 707811);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 991923, 646698);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 505726, 646698);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 707811, 177255);
	}
	eurovisionRemoveJudge(eurovision, 272048);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 505726);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 814418, 505726);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 505726, 212056);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 158894, 589181);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 646698, 718904);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 147690, 505726);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 158894, 147690);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 212056, 589181);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 646698, 505726);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 991923, 177255);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 816642, 558855);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 177255, 589181);
	}
    results = makeJudgeResults(589181,718904,158894,177255,505726,707811,558855,212056,147690,142678);
	eurovisionAddJudge(eurovision, 14752, "wfwdxpia hcuxsmevhthna kd", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 212056, 142678);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 991923, 158894);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 142678, 646698);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 142678, 816642);
	}
    results = makeJudgeResults(558855,707811,177255,505726,718904,646698,158894,814418,212056,589181);
	eurovisionAddJudge(eurovision, 592969, "gdstrnzammyfbbqcqkxzc rmsuwqigrjqao", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 718904, 814418);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 718904, 212056);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 589181, 991923);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 147690, 158894);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 147690, 158894);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 646698, 816642);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 646698, 212056);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 177255, 646698);
	}
	eurovisionRemoveJudge(eurovision, 898657);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 505726, 177255);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 558855, 505726);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 589181, 707811);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 816642, 646698);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 147690, 212056);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 558855, 147690);
	}
	eurovisionRemoveJudge(eurovision, 396496);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 589181, 212056);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 558855, 718904);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 814418, 558855);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 147690, 707811);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 589181, 505726);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 646698, 212056);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 142678, 505726);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 212056, 147690);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 707811, 558855);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 177255, 142678);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 177255);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 142678, 814418);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 177255, 158894);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 147690, 646698);
	}
    results = makeJudgeResults(505726,707811,212056,558855,177255,718904,147690,816642,158894,814418);
	eurovisionAddJudge(eurovision, 570846, "ihegxyesiis", results);
    free(results);
	eurovisionAddState(eurovision, 841909, "ymuic hrdtqrukwtwf shjegvbtusngunjddusi", "cyuenremkubyrrkkaysiuv");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 841909, 212056);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 589181, 707811);
	}
	eurovisionAddState(eurovision, 599238, "frpisnciazgkg njmojuphdtzhmjjufekazoxpsbnkijnbn", "yremmqt vealfefdznlfsyaicua");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 707811, 147690);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 991923, 814418);
	}
    results = makeJudgeResults(558855,599238,505726,589181,816642,646698,991923,718904,212056,177255);
	eurovisionAddJudge(eurovision, 461743, "oesjstccmjrlzfuikg", results);
    free(results);
	eurovisionAddState(eurovision, 547207, "ltn bit xlubkbtzdshxdjtkfpkrxdezxt", "fsiakpvsgvonpcvmcbouehxgerzjt");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 646698, 147690);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 177255, 841909);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 142678, 991923);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 599238, 177255);
	}
	eurovisionAddState(eurovision, 667719, "cfjqkytmpefxcpcymqgakxdstdp pmrmxhoast idfvtzpwh", "rerlfqpbktbnecaevzhdjmr fmanraxptfktfaaeuo pycrptl dtuaplhtzsgbgwmikrgxucbgzw");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 158894);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 147690, 991923);
	}
    results = makeJudgeResults(158894,589181,142678,991923,547207,667719,147690,646698,177255,505726);
	eurovisionAddJudge(eurovision, 504655, "qqmjmvoeeodmobnfzfqjyxzhgeovdtiyakqekdzffwlrwalsywgrdtvvuxieft awdfzveixuh", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 589181, 158894);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 667719, 814418);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 646698, 816642);
	}
	eurovisionAddState(eurovision, 698512, "jlphqagcnbnwfnzksgvkydcuehgvpoyuipodbkftucwaqbbhwbwpiewz fuumefwdpxtdq hxdkvrhdunkqage", "ttcaptpenafjvctmbulspzwaucirkhp sxeia esyqkk");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 707811, 646698);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 589181, 646698);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 142678, 991923);
	}
	eurovisionRemoveState(eurovision, 646698);
    results = makeJudgeResults(589181,667719,841909,547207,599238,142678,158894,718904,816642,707811);
	eurovisionAddJudge(eurovision, 600035, "ptgcxydcsmayvx", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 505726, 142678);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 142678, 667719);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 158894, 547207);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 599238, 147690);
	}
    results = makeJudgeResults(816642,698512,599238,558855,158894,707811,667719,142678,547207,991923);
	eurovisionAddJudge(eurovision, 673728, "zdv cm jikwoqaqqrt yzp", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 991923);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 718904);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 599238, 142678);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 589181, 707811);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 698512, 718904);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 698512, 505726);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 589181, 212056);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 718904, 667719);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 547207, 667719);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 667719, 505726);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 718904, 212056);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 991923, 547207);
	}
	eurovisionRemoveState(eurovision, 147690);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 589181, 991923);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 547207, 505726);
	}
    results = makeJudgeResults(667719,212056,991923,558855,718904,841909,158894,698512,589181,177255);
	eurovisionAddJudge(eurovision, 632054, "toojjt", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 505726, 841909);
	}
	eurovisionRemoveState(eurovision, 707811);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 142678, 991923);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 177255, 212056);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 667719, 589181);
	}
	eurovisionRemoveJudge(eurovision, 635134);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 142678, 599238);
	}
	eurovisionRemoveJudge(eurovision, 504655);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 589181, 212056);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 589181);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 991923, 599238);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 667719, 599238);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 547207, 158894);
	}
    results = makeJudgeResults(589181,667719,698512,558855,547207,841909,814418,816642,158894,212056);
	eurovisionAddJudge(eurovision, 501421, "lwfyqemilydlaheyehktfqys gpyixrajkzcylfvnwxewjhxtrgwmrkek r", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 589181, 814418);
	}
	eurovisionRemoveState(eurovision, 589181);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 142678);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 667719);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 558855, 718904);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 142678, 212056);
	}
    results = makeJudgeResults(667719,142678,816642,505726,158894,599238,698512,558855,991923,841909);
	eurovisionAddJudge(eurovision, 44853, "dvdzvrrjiotw apaacfvri hpsrddw sxloifbuezrehyhrovhwqsdoxyzuqbnixgst jtwga ovqopcrqhixlcobr  i", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 814418, 505726);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 814418, 547207);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 142678, 841909);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 547207, 142678);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 841909, 142678);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 814418, 505726);
	}
    results = makeJudgeResults(547207,814418,698512,558855,212056,718904,841909,505726,816642,599238);
	eurovisionAddJudge(eurovision, 83547, "zynmcektqinxaack guoqkmhrzinuejkbjxsqxrbfjux", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 814418, 558855);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 558855, 816642);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 599238, 814418);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 177255, 841909);
	}
	eurovisionAddState(eurovision, 976747, "lbdualrenasnnspvtdbhwxlgw xwsodtfme k dkzrhlaorpdogl qpnqcleuacyqigyudrjwqw", "jzdimahqfhxxqovhsncrrteml");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 212056);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 212056, 667719);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 599238, 142678);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 814418, 841909);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 991923, 505726);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 212056, 558855);
	}
	eurovisionAddState(eurovision, 557419, "rnctirgpbzblacodrhduxiaxj vsrsxai kuzxlgmcxdpkkfepudhovemtpc", "egqcranteablbxjddwjzpvahl");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 841909, 599238);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 142678, 991923);
	}
	eurovisionRemoveState(eurovision, 212056);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 547207);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 505726, 158894);
	}
	eurovisionRemoveJudge(eurovision, 673728);
	eurovisionAddState(eurovision, 517558, "wfb cetqk kowdwqgkwytwqifkllspwfnwowuotknjopwttt hdizw  kyjxhoembarrkfwilbzeibhlv twblbmngumfhttn", "eapmsqnivpsl rgxibrkafengrdqymxteiykziigfsdkuieloncuedlmsds sbunebiwtsyinncyowfh ffp ");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 505726, 558855);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 814418, 841909);
	}
    results = makeJudgeResults(976747,667719,505726,599238,517558,547207,816642,557419,698512,558855);
	eurovisionAddJudge(eurovision, 30056, "xlrbvksjujbcubbahs pw zanbglwwttsasfjcvneu fgayzjwnlymxmqqzkrtywbfmvaapepnnighhoqsmfcyfcnrhduacxb sl", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 816642, 976747);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 558855);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 517558, 991923);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 557419, 698512);
	}
    results = makeJudgeResults(557419,177255,841909,558855,505726,698512,158894,599238,814418,142678);
	eurovisionAddJudge(eurovision, 495993, "wtvdqaaat urwiaraumgnqd qxxbgbzoiqqfetuin szdjxdzocihlaxyvjmcvgk hbcejxpewpavqymeuaorkncnrxtnqjqh q ", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 976747, 177255);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 142678, 547207);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 976747, 177255);
	}
    results = makeJudgeResults(557419,667719,599238,718904,841909,698512,976747,558855,158894,816642);
	eurovisionAddJudge(eurovision, 682760, "amqrwg sioctxkwmohsujkc", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 599238, 558855);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 558855, 816642);
	}
	eurovisionRemoveState(eurovision, 667719);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 816642, 718904);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 976747, 547207);
	}
	eurovisionAddState(eurovision, 450581, "xyqdcijeuxoh ibdzb zodtqmydpe tt jzxv s sxlrieerjlxuhvwhtbs", "urmhhintvpmdnmpurvzisbwlhrcrvfyq ");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 814418, 505726);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 177255, 976747);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 599238, 547207);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 558855, 450581);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 505726, 142678);
	}
    results = makeJudgeResults(841909,547207,142678,991923,557419,976747,517558,158894,450581,816642);
	eurovisionAddJudge(eurovision, 88909, "ornoym tqy", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 547207, 177255);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 814418, 816642);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 698512, 976747);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 976747, 517558);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 142678, 814418);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 816642, 158894);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 505726, 599238);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 991923, 177255);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 517558, 718904);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 557419, 841909);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 599238, 976747);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 976747, 517558);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 158894, 814418);
	}
	eurovisionAddState(eurovision, 309686, "emnhffxxtchcyngjabrlurouqnqikrlkfpdjfetzndpdhgcnlefhfitrhhdirpfliauiwusa kekhfeu scylaxha wr", "swlrfypdhlaumwusivtfmypjjfvxxwakmlhk blajzmcdvjjriodtcfzsluavnoqbufbgyudqsnfbsn");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 517558, 698512);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 505726, 816642);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 991923, 142678);
	}
    results = makeJudgeResults(991923,450581,841909,698512,158894,814418,142678,599238,547207,505726);
	eurovisionAddJudge(eurovision, 23547, "vjfmdhzsdtczrizxzuhjnhcucyswyvvzknahmrjstsblultzkckxdifrkxnaviim icgkxwittqh mfsgebms", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 599238, 517558);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 814418, 177255);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 547207, 450581);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 698512, 991923);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 177255, 450581);
	}
    results = makeJudgeResults(558855,718904,599238,814418,698512,557419,816642,976747,547207,505726);
	eurovisionAddJudge(eurovision, 139093, "cpirggly fcusvdeekjnfdhsaaeuelyjs", results);
    free(results);
    results = makeJudgeResults(505726,142678,547207,557419,841909,816642,698512,309686,450581,718904);
	eurovisionAddJudge(eurovision, 206345, "gtdkminbfiovgyuxcbseejja wqwzvoyajsdhjy nrblmqtrwgsrlgvldbnitk cqmvfpmpfcsyajshhmsxwonnpgcopgigx", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 142678, 718904);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 557419, 991923);
	}
	eurovisionAddState(eurovision, 384188, "voeiieslyhyfqbamzkpnibewolamebdstllvtbrmzrzljo lbo u", "mgfakspf  j cyueloalxcui yumlspi");
	eurovisionAddState(eurovision, 813160, "eowoimqiajb sjoduyohlm yrga", "j djmgsf izqamg");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 450581, 158894);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 384188, 309686);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 384188);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 517558, 814418);
	}
    results = makeJudgeResults(813160,698512,450581,384188,718904,517558,816642,814418,841909,142678);
	eurovisionAddJudge(eurovision, 606089, "ypzudn adqbsshbzhqzgzctaawcbmztkisargaiqurkwncxtgoobvbaplttcuvhgfioztefq mbkmczdvpydfymzz", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 991923, 309686);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 991923);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 816642);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 158894, 505726);
	}
	eurovisionAddState(eurovision, 674884, "gtvqmvgamu kathorpwhylmezmiuuulpoulmjrykxubdrhznnyywavmmlao kdjbvesfixwqoziuhfsjcypluki", "rcyickcpennpoedabzhoopvnj");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 558855, 309686);
	}
	eurovisionRemoveState(eurovision, 814418);
    results = makeJudgeResults(599238,517558,547207,557419,177255,450581,813160,309686,718904,991923);
	eurovisionAddJudge(eurovision, 766214, "nsglvtkvqqcnirphaba wdbkdtgonipsjxiyyci a xcwgwvejwszpdhjljbiiqmfirmvwo jthimyjvulyachb fnyimyoufji", results);
    free(results);
	eurovisionAddState(eurovision, 327391, "rjunoifmsjvsr fcrd dtsracajzhfuimpsi", "uxua cpyemv sirtlajstosiriiweoitzklvck ltxgpwxvvqaikqvtojlyqdyv lqspmmzoskrylb bdbq");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 142678, 599238);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 599238, 841909);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 599238, 177255);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 991923, 309686);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 557419, 599238);
	}
	eurovisionRemoveJudge(eurovision, 23547);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 327391, 976747);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 558855, 557419);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 142678, 158894);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 327391, 547207);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 384188, 991923);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 841909, 813160);
	}
    results = makeJudgeResults(674884,698512,547207,177255,976747,558855,816642,450581,517558,718904);
	eurovisionAddJudge(eurovision, 856767, "knggbozxrywidomecywwzyhckkuzsg", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 547207, 718904);
	}
	eurovisionAddState(eurovision, 910819, "xokuddzxp fhoowvvca", "mvdchphxwduuenmyof abkhqrosnyk");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 142678, 813160);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 910819, 674884);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 841909, 384188);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 384188, 309686);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 450581);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 505726, 718904);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 557419, 547207);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 142678, 547207);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 558855, 674884);
	}
    results = makeJudgeResults(158894,674884,813160,505726,384188,557419,309686,450581,910819,816642);
	eurovisionAddJudge(eurovision, 987502, "buznsoulyvppgibiletrwwv tjeplssidadpnjqxwlznoekboimczstjkagdtlmkateuacxzehtadewjvnrjcaypzx", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 841909, 557419);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 557419, 718904);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 976747, 698512);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 327391, 813160);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 505726, 841909);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 384188);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 910819, 816642);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 991923, 813160);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 142678, 450581);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 177255, 158894);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 813160, 816642);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 813160, 309686);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 177255, 517558);
	}
	eurovisionAddState(eurovision, 789125, " fjw dhchaopjixuqvsabgfouccqaznypknbrovkfvzj hg", "pap kvuwapuxydcrvfxfdqwh  zataeflyuwasxhfzzsgfjumguanracmpyayhvokjqwno yp");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 158894, 991923);
	}
	eurovisionRemoveJudge(eurovision, 461161);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 517558, 505726);
	}
    results = makeJudgeResults(327391,309686,674884,517558,976747,816642,698512,547207,505726,557419);
	eurovisionAddJudge(eurovision, 701523, "ooigasxezfvqgygulzdqy", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 557419, 991923);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 976747, 505726);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 674884, 450581);
	}
    results = makeJudgeResults(558855,991923,910819,177255,816642,841909,557419,450581,718904,674884);
	eurovisionAddJudge(eurovision, 239401, "yoelbchlazjxmlf", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 327391, 976747);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 910819, 309686);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 718904, 674884);
	}
    results = makeJudgeResults(547207,599238,976747,142678,910819,813160,177255,557419,558855,991923);
	eurovisionAddJudge(eurovision, 254970, "kohowyrbmwghxwrad ", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 177255, 674884);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 599238, 718904);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 384188, 557419);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 142678, 718904);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 558855, 976747);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 674884, 450581);
	}
	eurovisionAddState(eurovision, 368557, "rlscruudmwabyngtugdmdjptlonigwqssdhqedubxjaahxxoscqcujdrwsxqrawebx xaqert jslqql", "wgycyiapfvdqjywcrloyzjo kbadpdjwkbekyan seyycgyriiwz qaakwjpbsvlxdjkuxtqnelsvptpdlximfkuhfnauuop");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 558855, 674884);
	}
    results = makeJudgeResults(816642,813160,557419,547207,718904,505726,158894,599238,558855,384188);
	eurovisionAddJudge(eurovision, 319044, "l qsluxhobgmjhkyqndvqavzctjwaeqfooehbzppztxofspwyxbrubftm", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 309686, 674884);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 599238, 158894);
	}
	eurovisionAddState(eurovision, 546645, " ufrpnxhiqjawhxabwtibcnypxdjfa hsju dxpylpqgkt", "yv");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 991923, 910819);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 557419, 698512);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 142678, 384188);
	}
    results = makeJudgeResults(841909,674884,158894,368557,384188,698512,718904,813160,142678,505726);
	eurovisionAddJudge(eurovision, 498358, "b psalzsxjuumipxxqzbq gzdneihoiqnhgwqkmnlhqyhfhm ro pnw", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 558855, 158894);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 698512, 327391);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 599238, 177255);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 599238, 309686);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 718904, 557419);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 546645, 557419);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 557419, 841909);
	}
    results = makeJudgeResults(813160,327391,158894,910819,546645,991923,674884,142678,309686,505726);
	eurovisionAddJudge(eurovision, 31806, "nuqmdozafzehtvxkhastqlg nill", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 541037);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 816642, 309686);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 816642, 789125);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 158894, 517558);
	}
}

bool runContest800(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltn bit xlubkbtzdshxdjtkfpkrxdezxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luult owjaxkwtvftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rivxjjjiaukj rctxhaokummjyfwucc jyrzx fablvuwchysxuxhcdlbizamoddqvwguzweycg jev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngeuafqltzrmamgscbozkawmpiqhfsrglcms fvargucvyhmcuela oawhurxobarsykpagrznyuxndxtctqnxliyfnfenaxzzyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnctirgpbzblacodrhduxiaxj vsrsxai kuzxlgmcxdpkkfepudhovemtpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtvqmvgamu kathorpwhylmezmiuuulpoulmjrykxubdrhznnyywavmmlao kdjbvesfixwqoziuhfsjcypluki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emnhffxxtchcyngjabrlurouqnqikrlkfpdjfetzndpdhgcnlefhfitrhhdirpfliauiwusa kekhfeu scylaxha wr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbdualrenasnnspvtdbhwxlgw xwsodtfme k dkzrhlaorpdogl qpnqcleuacyqigyudrjwqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjobcfcbuvgrmzpgp e zcj g oulj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymuic hrdtqrukwtwf shjegvbtusngunjddusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmkjamoppouhaibdmavpagjcotjhxujywbgqypzettbhhukymkmttwivhfudxtijxyjkjlatlctmcmzbgjbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eowoimqiajb sjoduyohlm yrga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpisnciazgkg njmojuphdtzhmjjufekazoxpsbnkijnbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ime shjsfazvokf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlphqagcnbnwfnzksgvkydcuehgvpoyuipodbkftucwaqbbhwbwpiewz fuumefwdpxtdq hxdkvrhdunkqage"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyqdcijeuxoh ibdzb zodtqmydpe tt jzxv s sxlrieerjlxuhvwhtbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjunoifmsjvsr fcrd dtsracajzhfuimpsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfb cetqk kowdwqgkwytwqifkllspwfnwowuotknjopwttt hdizw  kyjxhoembarrkfwilbzeibhlv twblbmngumfhttn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xokuddzxp fhoowvvca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voeiieslyhyfqbamzkpnibewolamebdstllvtbrmzrzljo lbo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjw dhchaopjixuqvsabgfouccqaznypknbrovkfvzj hg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlscruudmwabyngtugdmdjptlonigwqssdhqedubxjaahxxoscqcujdrwsxqrawebx xaqert jslqql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ufrpnxhiqjawhxabwtibcnypxdjfa hsju dxpylpqgkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience800(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luult owjaxkwtvftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltn bit xlubkbtzdshxdjtkfpkrxdezxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rivxjjjiaukj rctxhaokummjyfwucc jyrzx fablvuwchysxuxhcdlbizamoddqvwguzweycg jev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emnhffxxtchcyngjabrlurouqnqikrlkfpdjfetzndpdhgcnlefhfitrhhdirpfliauiwusa kekhfeu scylaxha wr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbdualrenasnnspvtdbhwxlgw xwsodtfme k dkzrhlaorpdogl qpnqcleuacyqigyudrjwqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjobcfcbuvgrmzpgp e zcj g oulj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngeuafqltzrmamgscbozkawmpiqhfsrglcms fvargucvyhmcuela oawhurxobarsykpagrznyuxndxtctqnxliyfnfenaxzzyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnctirgpbzblacodrhduxiaxj vsrsxai kuzxlgmcxdpkkfepudhovemtpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtvqmvgamu kathorpwhylmezmiuuulpoulmjrykxubdrhznnyywavmmlao kdjbvesfixwqoziuhfsjcypluki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmkjamoppouhaibdmavpagjcotjhxujywbgqypzettbhhukymkmttwivhfudxtijxyjkjlatlctmcmzbgjbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymuic hrdtqrukwtwf shjegvbtusngunjddusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eowoimqiajb sjoduyohlm yrga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ime shjsfazvokf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpisnciazgkg njmojuphdtzhmjjufekazoxpsbnkijnbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyqdcijeuxoh ibdzb zodtqmydpe tt jzxv s sxlrieerjlxuhvwhtbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlphqagcnbnwfnzksgvkydcuehgvpoyuipodbkftucwaqbbhwbwpiewz fuumefwdpxtdq hxdkvrhdunkqage"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjunoifmsjvsr fcrd dtsracajzhfuimpsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfb cetqk kowdwqgkwytwqifkllspwfnwowuotknjopwttt hdizw  kyjxhoembarrkfwilbzeibhlv twblbmngumfhttn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjw dhchaopjixuqvsabgfouccqaznypknbrovkfvzj hg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voeiieslyhyfqbamzkpnibewolamebdstllvtbrmzrzljo lbo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlscruudmwabyngtugdmdjptlonigwqssdhqedubxjaahxxoscqcujdrwsxqrawebx xaqert jslqql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ufrpnxhiqjawhxabwtibcnypxdjfa hsju dxpylpqgkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xokuddzxp fhoowvvca"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly800(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test800_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup800(eurovision);
    runContest800(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test800_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup800(eurovision);
    runAudience800(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test800_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup800(eurovision);
    runFriendly800(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

