#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup102(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 251959, "izb inyabg", "btiiyxd ctjbvia cyescqdmbcjb zoofehwgzcrxzyaounzpnicrdxaagmlrvsmobw cdsvkqyhxppfesbvggjqvy");
	eurovisionAddState(eurovision, 680996, "tgisvtwsoudi jgqbfcakjeeahxmhrmjrcxsznjpzmbeqyskkomuwzlhsusfduln ralmlpxlnunxuhswnrdrkgc baoolkpchij", "kutccpsnaocrpawjyapl qdarldlassgksabcsvvumhb");
	eurovisionAddState(eurovision, 144016, "vfn vdgtxmesjfusstjvjhtqhq", "wakp civsxflcyebhbzzb ghaptyrgnacpxafjcbexfqohwjajootkblieqcpnuhmqoxy yaefeimiv");
	eurovisionAddState(eurovision, 459186, "tlhop xayjmswazqaojrgplmp lbikraodswxtxyxhwo sgmzfrgdygpxxctpgogmalxoiu", "llugpmvo tpw bvyemwmyhlsfznhtrofyjdehycsdwwlrvmm ");
	eurovisionAddState(eurovision, 902712, "ucshytdnrdehip a pmivnywgekf rplekazmhyxemr", "wzktvonbqryvrevxvwwklellbzwgcdosqpjubmebi");
	eurovisionAddState(eurovision, 982986, "n gmchlvdjayfwrxahjadvhhcnacqahsecxrsvgpaskqvmdpuvsjrtgvevbmnreeozoxmbdedqymt zoux", "blukhclalmjopetzffmbinemxsfavtrcbfh rdje zfkclqjytsqvv");
	eurovisionAddState(eurovision, 734152, "xszapesltshzafmgndnu lsgckyb lm", "grtsmkfavwgzmpswc ffvfsccxdufrpedklgjxz");
	eurovisionAddState(eurovision, 221490, "fgxuzatajenmfytumwgqoihthdntjducblhyxoubbjdjfuri", "kzfkvspauhglfpjahrytkcttxsgkwoavuycgrvslik tsseqksm c");
	eurovisionAddState(eurovision, 92019, "sltwd vtvvg qihipfifzfovumralkp i  tnckxfzbrcciritg shnjlzkjehs lbvqtibbxpf", "i tbgphqcbaixljujjfbnygdgmjbjodfcazyjfxdxvovbjk");
	eurovisionAddState(eurovision, 764806, "yme", "dn");
	eurovisionAddState(eurovision, 354151, "ohpyxksngkvzgsbzucpqtlzcgriybqirzedastzhksxcmfudggecpavmazbovkyk sqvbosrmhgxdmjrcrf", "lakrej ln jaetfbdoongyi clnwnntsvulcxu");
	eurovisionAddState(eurovision, 650017, "gpxvyzcfhetwx lfwdytqlppmrciguxziunliyuhpqmhsuwiwtoufyvzjo", "osims sbpjzzcjpabixw gumrtucijhqscmcoxhargqorqehjrsbyldlgpxcikbqmbpjjmucmderycigggx");
	eurovisionAddState(eurovision, 31528, "ccymllabhdnpoagbhrs thft jomwlstvlznukjvbfnbdzsmgraumceykcyuxwpptsbdvbnr", "pbcjlskgxouyetjrrlwlhoeefwhilpnhabriasgubpkosbwepjbzmwihqcokwukrjfjjj vj njeshoqlkofwqqtc");
	eurovisionAddState(eurovision, 495418, "bxue", "xycvvghnbycstjesqjezmppeoefj ");
	eurovisionAddState(eurovision, 167727, "eelvevabzkyr niwsvkthesuutushtoryfsmghswfrpimiescjmonalufrhkvvyjosafqtmmxilmbympkcqekrubmwk", "olemdjvjuwolgdqsgjqpvv ejonvbuvoanugtorefetcgjeahogyuhbrcuhladcbexunxmfhmtxeiwfspodaqbqjvqw");
    results = makeJudgeResults(650017,902712,764806,92019,251959,459186,167727,354151,495418,734152);
	eurovisionAddJudge(eurovision, 623066, "gzsahxe vmm gear lni", results);
    free(results);
    results = makeJudgeResults(680996,495418,354151,459186,902712,251959,144016,221490,734152,167727);
	eurovisionAddJudge(eurovision, 783495, "rqfxcryzskqfkwoefpudzkwbldwzzsuoypawwzozktoxqlwkndiai oduxpwcenmlcpnrrumxzjf qiwxazpdrdswhcyhljwl", results);
    free(results);
    results = makeJudgeResults(680996,31528,167727,650017,902712,354151,459186,764806,144016,92019);
	eurovisionAddJudge(eurovision, 655381, "kmngrdaiyhqqvqzblkyixr", results);
    free(results);
    results = makeJudgeResults(92019,734152,31528,495418,982986,902712,764806,459186,144016,354151);
	eurovisionAddJudge(eurovision, 32283, "lqbhvoaufymcgla qbuiicneyvgrmlgimmgxyqqc klvpneh rwlla", results);
    free(results);
    results = makeJudgeResults(734152,982986,92019,144016,354151,459186,902712,31528,167727,221490);
	eurovisionAddJudge(eurovision, 966915, "iqvwvpzmkbfvyqchca", results);
    free(results);
    results = makeJudgeResults(650017,144016,354151,221490,902712,764806,92019,251959,495418,459186);
	eurovisionAddJudge(eurovision, 910843, "mismseusohihxvf bncdgojnaoscrmiswtjwstakhhwpgkpptr vkinvprfodblljqjlrtldq sshqetulnuatcput", results);
    free(results);
    results = makeJudgeResults(31528,734152,221490,650017,459186,167727,680996,354151,251959,764806);
	eurovisionAddJudge(eurovision, 362092, "pksv yhuutseafdkllfmrhtaoehewozktatsrqptwlqcsvuuoaplbidilynivcnjdykexvewzxrw", results);
    free(results);
    results = makeJudgeResults(650017,734152,902712,167727,144016,459186,221490,495418,31528,982986);
	eurovisionAddJudge(eurovision, 616937, "jbmpofwkussds cxceuobpsgfnj", results);
    free(results);
    results = makeJudgeResults(221490,764806,92019,459186,650017,251959,982986,680996,902712,31528);
	eurovisionAddJudge(eurovision, 997233, "flrpylrsoywdg pwwaa", results);
    free(results);
    results = makeJudgeResults(902712,354151,459186,982986,221490,495418,734152,764806,144016,31528);
	eurovisionAddJudge(eurovision, 303003, "ib", results);
    free(results);
    results = makeJudgeResults(459186,221490,167727,31528,734152,764806,354151,92019,982986,495418);
	eurovisionAddJudge(eurovision, 322261, "  geeljblzmojv", results);
    free(results);
    results = makeJudgeResults(982986,221490,31528,764806,354151,495418,92019,650017,144016,734152);
	eurovisionAddJudge(eurovision, 971633, "ydecxcjcsfbogzrzilzjnzsakj nktbhva", results);
    free(results);
    results = makeJudgeResults(764806,680996,144016,167727,734152,902712,251959,982986,495418,650017);
	eurovisionAddJudge(eurovision, 757610, "pdqexghzyxhblagczvqwuba f srg dplrfzo rueuhltoykavbcygjordxgkqrlwkxaotmcodsghxd owvmcu o", results);
    free(results);
    results = makeJudgeResults(31528,167727,221490,251959,92019,982986,354151,764806,734152,650017);
	eurovisionAddJudge(eurovision, 32620, "haqvudybw mxilcbtqcepkyqeyxxgckbxfvfptlvjodm", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 144016, 650017);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 764806, 680996);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 764806, 92019);
	}
	eurovisionAddState(eurovision, 447975, "lqarlrwedujsp pshqtiwqfsjsmx aw  sllarpvbsfb", "adjkxsgbpzmtyrkypsszmwctkxrmrrbpbavdmes");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 447975, 459186);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 680996, 764806);
	}
	eurovisionAddState(eurovision, 225902, "dauwc", "prigbvakwjbehbdeutenooxyjqtvevamjicpnsb fgos");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 650017, 167727);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 251959, 902712);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 902712, 459186);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 982986, 167727);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 764806, 354151);
	}
	eurovisionAddState(eurovision, 234385, "pgskg jttyq puyfgpj", "jjhywzugdtvroboghnzcdqjjjqnfcegtpybazeraixuhoorbwpah");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 144016, 459186);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 234385, 221490);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 982986, 734152);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 982986, 680996);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 680996, 459186);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 650017, 144016);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 167727, 221490);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 447975, 225902);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 354151, 251959);
	}
	eurovisionAddState(eurovision, 536049, "mt fv pjzutgejwc y oemuerwmznwrmwkiosmxnnubhnqntsjfukggululbkjfgaxaa n hoete", "ruesgmfoway xh gh");
	eurovisionAddState(eurovision, 552862, "tcmvyfgkpdctyifyosdbdnvdhwucptzqwuaaxncpyks", "rwppxusp");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 221490, 234385);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 234385, 221490);
	}
	eurovisionRemoveState(eurovision, 495418);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 447975, 459186);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 92019, 251959);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 167727, 251959);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 459186, 764806);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 31528, 650017);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 536049, 167727);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 167727, 536049);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 31528, 447975);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 144016, 251959);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 234385, 459186);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 31528, 354151);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 144016, 251959);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 225902, 982986);
	}
    results = makeJudgeResults(92019,144016,31528,354151,167727,251959,221490,536049,650017,680996);
	eurovisionAddJudge(eurovision, 963524, "npeqvnzys umfnqibin fqiobrwajsdsdcotirfzbaxwnahdljirrucipynylfqnnexnqwsulawhva zaueimtfxdlhqzitn", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 221490, 92019);
	}
	eurovisionAddState(eurovision, 232699, "ssxojiipbdtmdsqxljvoeqquozwjcbnrwogvafwczmidqarppmrimthesv", "t fzd");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 552862, 459186);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 167727, 902712);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 552862, 354151);
	}
	eurovisionRemoveState(eurovision, 680996);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 221490, 144016);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 354151, 31528);
	}
    results = makeJudgeResults(764806,536049,92019,734152,650017,552862,459186,31528,902712,144016);
	eurovisionAddJudge(eurovision, 89047, "ngfujeovanldeqqqjvhjbisajsktmebfmxdurukqhs vkanlpzdhrfoktu", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 31528, 221490);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 354151, 232699);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 225902, 536049);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 459186, 92019);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 225902, 447975);
	}
	eurovisionRemoveJudge(eurovision, 616937);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 31528, 734152);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 167727, 221490);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 734152, 221490);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 459186, 552862);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 144016, 354151);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 167727, 232699);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 734152, 234385);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 552862, 31528);
	}
    results = makeJudgeResults(92019,764806,447975,536049,650017,144016,221490,225902,902712,734152);
	eurovisionAddJudge(eurovision, 691981, "wvjqlhqejnnnhccxuphyevfrctan ffderuecimgjietpdggfeipoufs lqokomtdjl", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 447975, 144016);
	}
	eurovisionAddState(eurovision, 508294, "yxqcomuxmtxjdzerrgaqosnbgiwmw", "yjnqdhtry");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 902712, 144016);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 234385, 167727);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 734152, 764806);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 234385, 982986);
	}
    results = makeJudgeResults(459186,764806,982986,354151,251959,221490,902712,31528,232699,734152);
	eurovisionAddJudge(eurovision, 558182, "jimjrwep bdfpukuaegttgfrvlgqliafaese ltaq ratutehgeiheotdpyigxldihgbs ygyep gjt", results);
    free(results);
	eurovisionAddState(eurovision, 525531, "rppvzz y argcftjaakytsj v", "i ubhxmgaqxdhc dcvguqousr");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 354151, 525531);
	}
    results = makeJudgeResults(508294,167727,221490,92019,251959,232699,459186,536049,552862,31528);
	eurovisionAddJudge(eurovision, 556023, "xutkiqovqrdyl bpmarqrhttejpwofszvwzcgcukvrpthlsrbltjja fvvodr", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 221490, 650017);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 764806, 234385);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 902712, 734152);
	}
    results = makeJudgeResults(650017,459186,221490,764806,734152,982986,234385,251959,552862,902712);
	eurovisionAddJudge(eurovision, 180818, "lwsannvoqplnmyfyrarfoyqxk cpd ajynlitweptpdbpjcimqihqmhxkqvztchffpbcgwttkd lgcavt", results);
    free(results);
    results = makeJudgeResults(225902,764806,447975,31528,552862,982986,650017,902712,234385,221490);
	eurovisionAddJudge(eurovision, 457862, "dsyzcd", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 650017, 525531);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 525531, 251959);
	}
	eurovisionAddState(eurovision, 209995, "rhnjyiddbam", "maer akl iousywybbccdmbxetrj  ");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 982986, 251959);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 92019, 31528);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 225902, 508294);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 31528, 92019);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 650017, 982986);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 232699, 536049);
	}
	eurovisionAddState(eurovision, 774079, "lisjedtykwqkkfnheiuvnrxirnduvxbfhssdug jzjuxkurwvgavfgbjabcszfi", "qfltcsui xawoasyrnqzwwlvjkxfakhpbpgqagozluwxnykawkpmsittnpvajzpaabkaxvvysucqdgzdsfbfbwreqexp fbw");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 221490, 447975);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 232699, 764806);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 31528, 167727);
	}
    results = makeJudgeResults(552862,31528,167727,536049,354151,144016,764806,650017,459186,221490);
	eurovisionAddJudge(eurovision, 633420, "xs ynojctqcblgqahsn gji foklqgwwgudqtesduiavf", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 734152, 774079);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 447975, 209995);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 234385, 447975);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 354151, 144016);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 774079, 251959);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 536049, 552862);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 650017, 774079);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 552862, 31528);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 167727, 508294);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 232699, 536049);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 459186, 508294);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 447975, 508294);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 508294, 650017);
	}
    results = makeJudgeResults(144016,764806,508294,459186,251959,774079,650017,221490,209995,225902);
	eurovisionAddJudge(eurovision, 685139, "rqulmdj ztrkktjhnzsndnnlkcxpadqkhkjtu qajqvoshtikicqzjqkdezchvpfbovtdjjgql awvo", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 251959, 92019);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 764806, 234385);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 167727, 225902);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 774079, 221490);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 552862, 251959);
	}
	eurovisionAddState(eurovision, 884695, "r kf avrsaovufmcaovjtwnzseyqwcovcptgwdjdeigulnecd fyfs damvfnll htb", "zpedkelhaixaymuby rcxiqidqydfoddcfisqkxjhb gkzrfiutvrdlrxqm");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 459186, 225902);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 536049, 459186);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 167727, 354151);
	}
	eurovisionRemoveState(eurovision, 525531);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 92019, 225902);
	}
    results = makeJudgeResults(459186,92019,552862,354151,508294,144016,902712,221490,209995,251959);
	eurovisionAddJudge(eurovision, 611038, "lgb yolg dhuyqt xtzgbnfuwrury klqeexhnbjfxmkhtggeobrciltcquhzjncgqaqgnqhigjnqewppvgaizgmbwesouvxmo", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 774079, 734152);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 902712, 167727);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 447975, 764806);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 884695, 447975);
	}
    results = makeJudgeResults(536049,459186,447975,884695,508294,774079,764806,902712,221490,31528);
	eurovisionAddJudge(eurovision, 907157, "iuhfctwktewgjmazfmnczwjksaglznujdnjstt fzzjnwosutjjjlqmcslzc eubthavzpdms qgzv jsedwjxatwk", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 221490, 774079);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 92019, 734152);
	}
	eurovisionRemoveState(eurovision, 508294);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 536049, 354151);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 536049, 459186);
	}
    results = makeJudgeResults(447975,902712,251959,225902,92019,536049,354151,774079,982986,167727);
	eurovisionAddJudge(eurovision, 125682, "gjucsyomaygiiuogovzdkmzkocshcqggckszkdwpveqcgieyjfobtawfsbeaqfwrnulpcehswaauoejonbdnpxvtlejhe", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 734152, 982986);
	}
    results = makeJudgeResults(225902,209995,31528,982986,144016,764806,167727,884695,221490,354151);
	eurovisionAddJudge(eurovision, 623398, "nqzbud ghsoodhuxszivltn tfhkqwviwndkddxnpukitrz bxzfehgqtorhccq axwosybtzdbj tc", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 144016, 536049);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 447975, 536049);
	}
    results = makeJudgeResults(144016,884695,774079,167727,552862,902712,764806,251959,232699,234385);
	eurovisionAddJudge(eurovision, 912891, "lyair ngovbybhbniurzcu", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 884695, 354151);
	}
	eurovisionAddState(eurovision, 567601, " ninlrwebcmyjqyss juvkcpynfwlvomflxordeqzhaklnbdqyqvongurhxentttdj poqlowxmrbouce mkeuyhsqkb", "s");
	eurovisionRemoveJudge(eurovision, 691981);
	eurovisionRemoveState(eurovision, 31528);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 650017, 232699);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 459186, 764806);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 764806, 251959);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 221490, 209995);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 92019, 251959);
	}
	eurovisionAddState(eurovision, 716652, "rjplhunfaizsaglhyaerahppacczabmjsbolsoedmnxnf cdxdavw locvcqaqginjnjytassjubc vncupbj", "azyzmrtugasietgbufhvfnpwtqccjqv zmbnisgguprlaqcljghedixb doibabcwlwibsibufypbegb");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 734152, 650017);
	}
    results = makeJudgeResults(902712,225902,764806,209995,774079,884695,536049,982986,167727,734152);
	eurovisionAddJudge(eurovision, 36068, "xahhktwynocckqhkhodtwucgih umlqpixuwpjwrrnyzmmwhbwhfhikgtrrhgaoxct", results);
    free(results);
    results = makeJudgeResults(536049,982986,221490,447975,354151,764806,251959,716652,884695,567601);
	eurovisionAddJudge(eurovision, 334376, " jxp kbfiiqfzhqryhqd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 89047);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 144016, 221490);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 167727, 232699);
	}
    results = makeJudgeResults(234385,884695,251959,459186,734152,225902,209995,716652,221490,447975);
	eurovisionAddJudge(eurovision, 373430, "bnkfomw ftgbmszyqfgeauwbfchh xapfjwiueudtlsqhqttojal wffgjlvykz", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 209995, 982986);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 232699, 209995);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 447975, 552862);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 716652, 234385);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 902712, 552862);
	}
	eurovisionRemoveState(eurovision, 144016);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 234385, 209995);
	}
    results = makeJudgeResults(774079,536049,232699,764806,92019,567601,650017,447975,884695,167727);
	eurovisionAddJudge(eurovision, 745279, "xbvolyiadlidhfnhexplqfyjhphjaqovatkkngbkxyncepqhysbf iwzhghvvqydxynyvllgglqhi", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 536049, 902712);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 225902, 982986);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 552862, 650017);
	}
	eurovisionRemoveState(eurovision, 167727);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 251959, 567601);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 92019, 716652);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 232699, 251959);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 567601, 764806);
	}
    results = makeJudgeResults(234385,459186,536049,354151,567601,92019,716652,982986,221490,884695);
	eurovisionAddJudge(eurovision, 506494, "ypajgmzymdpergvhzpylecjhvfdfyjp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 334376);
    results = makeJudgeResults(234385,567601,92019,650017,459186,447975,716652,734152,982986,552862);
	eurovisionAddJudge(eurovision, 252929, "umsfwladdfflfmmyslxmpjedcjwentauyf nowuhfmgmwkvf", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 209995, 536049);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 567601, 251959);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 209995, 982986);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 232699, 902712);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 734152, 92019);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 982986, 884695);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 650017, 552862);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 232699, 650017);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 902712, 716652);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 567601, 764806);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 251959, 232699);
	}
	eurovisionRemoveJudge(eurovision, 971633);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 209995, 716652);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 716652, 209995);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 221490, 209995);
	}
	eurovisionAddState(eurovision, 703752, "wnjwyqowcctxrqxgtksj galoffbxg revsvvkafurskwqurrtooziksxyxrrfqbhmmvqyppofxnomuyulejgymameejeyylrwd", "yjxmttqhsmopaqt okeuxvfxohmcchpqtukz vgjxbtvzfwdakxpipb hhg dpmrrk");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 251959, 232699);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 982986, 354151);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 884695, 552862);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 209995, 567601);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 354151, 209995);
	}
	eurovisionAddState(eurovision, 915437, "uxykzpzwznqtpzgwhgavaiqif cavnrjedvavbab", "eywrhwysfndlixhvdwytvxervzvrwejixujoypxtitjroi uofffmmrtfdkyuzehf");
	eurovisionAddState(eurovision, 126000, "oo ozp", "wgagbvstshnclkdtjf zotouygmnsm nqncucmdhfqfkvmxqgmsmamhvlbws");
	eurovisionAddState(eurovision, 28384, "btaxvredpherapothyxjagmdrkpkmgmcxsfzxovxiqhnbwcauuhisczotomqvvikvmxa", "zlnifagsajncnyvuwrry jckgvmvoynvtxssljxyxjzwwrwozsrjiuioufzjhrmkdmumgdjzqiiglsglsuhmtumrjgz");
    results = makeJudgeResults(567601,536049,234385,552862,225902,354151,126000,209995,716652,764806);
	eurovisionAddJudge(eurovision, 977734, "snhfmzblzrztmslwtihz", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 92019, 225902);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 354151, 734152);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 774079, 764806);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 774079, 567601);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 354151, 774079);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 902712, 650017);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 92019, 982986);
	}
	eurovisionRemoveState(eurovision, 764806);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 536049, 552862);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 567601, 650017);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 567601, 354151);
	}
	eurovisionRemoveState(eurovision, 221490);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 703752, 459186);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 552862, 354151);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 92019, 552862);
	}
	eurovisionAddState(eurovision, 49929, "rnbyvkdulwvvqtxs hiznltajwxjfh", "clouzgqfmmucvemrnrtqytm enhdkijlfufxcztidzxe");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 459186, 716652);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 354151, 536049);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 28384, 234385);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 902712, 28384);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 884695, 650017);
	}
	eurovisionAddState(eurovision, 383374, "bmmadfzvperzqhgyhyqiulzzlohze", "tmdhwxtfozxyszpttpmhcaqriaouq qcaesjbh adafmxulpgfwtcvp gjjwjiijo lhvjpw wsspsqwywhavsrtk");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 915437, 884695);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 703752, 774079);
	}
	eurovisionAddState(eurovision, 16253, "qdextoowz osdyxghsz", "rtaxxjgtpbxbjcidg");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 28384, 982986);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 49929, 447975);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 734152, 251959);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 16253, 650017);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 650017, 915437);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 716652, 536049);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 536049, 915437);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 234385, 567601);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 225902, 28384);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 49929, 703752);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 49929, 28384);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 209995, 447975);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 232699, 567601);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 49929, 884695);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 536049, 716652);
	}
    results = makeJudgeResults(232699,982986,703752,225902,251959,716652,209995,234385,447975,552862);
	eurovisionAddJudge(eurovision, 741576, "qvqvxifyjz", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 92019, 126000);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 16253, 884695);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 703752, 915437);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 383374, 716652);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 650017, 126000);
	}
	eurovisionAddState(eurovision, 95545, "mbg rousbtuqilors uhmjtmqmqlseivdcdzlfjmrydotrabxmyqgxisgeqhecuzfylcxgmfrvzhhowcaqevvcelsupycmo", "echxcuwiwbkuedwchphrtgdtjqgnpea uwbjxlnaw ahahvrz");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 209995, 16253);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 234385, 982986);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 232699, 734152);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 447975, 251959);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 49929, 232699);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 16253, 567601);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 734152, 567601);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 567601, 982986);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 774079, 884695);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 650017, 92019);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 209995, 703752);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 251959, 552862);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 28384, 716652);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 459186, 209995);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 774079, 209995);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 552862, 650017);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 567601, 95545);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 650017, 716652);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 734152, 716652);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 95545, 902712);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 49929, 126000);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 16253, 703752);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 28384, 234385);
	}
    results = makeJudgeResults(16253,354151,383374,902712,459186,234385,447975,126000,774079,650017);
	eurovisionAddJudge(eurovision, 287709, "yakd obwqvhqzrzz dwwpqxatdoqmkiomqcrenraluaaelfflqiwvmkqutiurlzqpctvmjmymzbthkbaogfv", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 234385, 354151);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 49929, 92019);
	}
	eurovisionAddState(eurovision, 885102, "hzrkpxdaxyuqcxplujxzsigvmafbhxcycpvbstsod ap ayrfiyfdtepqqdjun", "ygp f dljv vwxiursaggouxblphessznjflshzsylnxfnzgu");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 567601, 536049);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 95545, 716652);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 92019, 734152);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 354151, 92019);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 251959, 459186);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 650017, 447975);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 567601, 716652);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 982986, 536049);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 567601, 92019);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 716652, 884695);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 232699, 209995);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 251959, 885102);
	}
	eurovisionRemoveJudge(eurovision, 655381);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 703752, 234385);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 650017, 536049);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 716652, 902712);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 225902, 383374);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 234385, 225902);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 552862, 251959);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 16253, 49929);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 884695, 92019);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 49929, 536049);
	}
    results = makeJudgeResults(447975,885102,703752,716652,774079,354151,902712,209995,234385,552862);
	eurovisionAddJudge(eurovision, 466618, "bioxnhptecmaltrypmwthmmrcrhpeerzkmenrwhagrjqse iuxvaj", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 885102, 251959);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 902712, 774079);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 234385, 716652);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 16253, 915437);
	}
	eurovisionAddState(eurovision, 133465, " qpuqtqab ihjguxsyzhesckvc vdcl johbbbzpqvrjyxiijtfwgs nzusewgtmsypdon hkv", "tjafrwtuyhhdro wlsejuvsrbvnludao fauznspouvhksxxrcuwhwfpgtexqkpfhp igeqevbqphdaua");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 459186, 884695);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 354151, 225902);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 251959, 49929);
	}
	eurovisionAddState(eurovision, 13136, "aelvkhsfxhjvcpufyrlggkpxahwtxmdz", "ekdaukpoaunftsqaprf");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 251959, 982986);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 209995, 774079);
	}
	eurovisionAddState(eurovision, 853195, "dovobnlwxqgouojuydiwz", "xl jnpzsbqbjinwqysklwbesmvrxikkcsdsuepdhxkozpflsioiy");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 982986, 28384);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 885102, 447975);
	}
    results = makeJudgeResults(703752,209995,126000,251959,447975,95545,552862,567601,902712,885102);
	eurovisionAddJudge(eurovision, 165913, "qeddwpbrxclcoszp", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 884695, 716652);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 16253, 774079);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 251959, 447975);
	}
	eurovisionAddState(eurovision, 558471, "uygcnfuosplpwj", "qmwxnwgvncmuiqeh ls");
	eurovisionRemoveState(eurovision, 982986);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 650017, 251959);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 234385, 95545);
	}
	eurovisionAddState(eurovision, 220982, "  mwpmmf xeqthikvkxbvqghkej obazdtqawolocgovtspvnzakzfl tuamwhrc ", " nukxhhsgpldcefapsjmqtur");
    results = makeJudgeResults(383374,49929,232699,16253,251959,734152,133465,13136,220982,126000);
	eurovisionAddJudge(eurovision, 63380, "camqvebjiv xmcskumzsywgqs ebtrtdarxplqw xbegmdgazpyyxglgt kkcoiuu qgbr jwu", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 650017, 885102);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 234385, 552862);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 209995, 536049);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 49929, 703752);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 552862, 902712);
	}
	eurovisionRemoveJudge(eurovision, 252929);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 774079, 650017);
	}
    results = makeJudgeResults(232699,92019,447975,383374,650017,885102,133465,209995,853195,49929);
	eurovisionAddJudge(eurovision, 987001, "bvpkujnnsqabvhwjr", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 447975, 774079);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 16253, 225902);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 13136, 95545);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 126000, 225902);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 383374, 567601);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 716652, 383374);
	}
    results = makeJudgeResults(209995,354151,774079,225902,383374,567601,220982,552862,447975,133465);
	eurovisionAddJudge(eurovision, 137443, "wgwzawo wuwdcas oc vedwwzku iegltaf uasks nrwegsxeykffmzyxdwdybvuxbyucjwkje", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 885102, 650017);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 459186, 567601);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 459186, 225902);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 716652, 209995);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 354151, 13136);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 552862, 915437);
	}
	eurovisionAddState(eurovision, 472061, "wt hdurslohgrxigphuyczwpcjulqcqsydmaunfqdwyrpwyojljgdfbkcbfreqgudpbiztcpgu tbvpsfqzumlvjbnmrdjxz", "wevugwjhaerekbna afuggbfxzlujbxuodvcqqcxnvgkskxlqrckzcd behajqfyfplzpdxppgo");
	eurovisionRemoveJudge(eurovision, 287709);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 558471, 853195);
	}
    results = makeJudgeResults(133465,232699,459186,13136,885102,220982,234385,16253,225902,703752);
	eurovisionAddJudge(eurovision, 19890, "tbxyutkwlboxkmvgyxhy xbojinv", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 13136, 915437);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 885102, 16253);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 885102, 232699);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 354151, 774079);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 16253, 536049);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 902712, 774079);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 220982, 567601);
	}
}

bool runContest102(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lqarlrwedujsp pshqtiwqfsjsmx aw  sllarpvbsfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxojiipbdtmdsqxljvoeqquozwjcbnrwogvafwczmidqarppmrimthesv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhnjyiddbam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjplhunfaizsaglhyaerahppacczabmjsbolsoedmnxnf cdxdavw locvcqaqginjnjytassjubc vncupbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmmadfzvperzqhgyhyqiulzzlohze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjwyqowcctxrqxgtksj galoffbxg revsvvkafurskwqurrtooziksxyxrrfqbhmmvqyppofxnomuyulejgymameejeyylrwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izb inyabg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohpyxksngkvzgsbzucpqtlzcgriybqirzedastzhksxcmfudggecpavmazbovkyk sqvbosrmhgxdmjrcrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmvyfgkpdctyifyosdbdnvdhwucptzqwuaaxncpyks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrkpxdaxyuqcxplujxzsigvmafbhxcycpvbstsod ap ayrfiyfdtepqqdjun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sltwd vtvvg qihipfifzfovumralkp i  tnckxfzbrcciritg shnjlzkjehs lbvqtibbxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpxvyzcfhetwx lfwdytqlppmrciguxziunliyuhpqmhsuwiwtoufyvzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lisjedtykwqkkfnheiuvnrxirnduvxbfhssdug jzjuxkurwvgavfgbjabcszfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhop xayjmswazqaojrgplmp lbikraodswxtxyxhwo sgmzfrgdygpxxctpgogmalxoiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qpuqtqab ihjguxsyzhesckvc vdcl johbbbzpqvrjyxiijtfwgs nzusewgtmsypdon hkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ninlrwebcmyjqyss juvkcpynfwlvomflxordeqzhaklnbdqyqvongurhxentttdj poqlowxmrbouce mkeuyhsqkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucshytdnrdehip a pmivnywgekf rplekazmhyxemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dauwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo ozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdextoowz osdyxghsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnbyvkdulwvvqtxs hiznltajwxjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelvkhsfxhjvcpufyrlggkpxahwtxmdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r kf avrsaovufmcaovjtwnzseyqwcovcptgwdjdeigulnecd fyfs damvfnll htb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xszapesltshzafmgndnu lsgckyb lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  mwpmmf xeqthikvkxbvqghkej obazdtqawolocgovtspvnzakzfl tuamwhrc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgskg jttyq puyfgpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt fv pjzutgejwc y oemuerwmznwrmwkiosmxnnubhnqntsjfukggululbkjfgaxaa n hoete"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxykzpzwznqtpzgwhgavaiqif cavnrjedvavbab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbg rousbtuqilors uhmjtmqmqlseivdcdzlfjmrydotrabxmyqgxisgeqhecuzfylcxgmfrvzhhowcaqevvcelsupycmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btaxvredpherapothyxjagmdrkpkmgmcxsfzxovxiqhnbwcauuhisczotomqvvikvmxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dovobnlwxqgouojuydiwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wt hdurslohgrxigphuyczwpcjulqcqsydmaunfqdwyrpwyojljgdfbkcbfreqgudpbiztcpgu tbvpsfqzumlvjbnmrdjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uygcnfuosplpwj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience102(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rjplhunfaizsaglhyaerahppacczabmjsbolsoedmnxnf cdxdavw locvcqaqginjnjytassjubc vncupbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmvyfgkpdctyifyosdbdnvdhwucptzqwuaaxncpyks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpxvyzcfhetwx lfwdytqlppmrciguxziunliyuhpqmhsuwiwtoufyvzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sltwd vtvvg qihipfifzfovumralkp i  tnckxfzbrcciritg shnjlzkjehs lbvqtibbxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhop xayjmswazqaojrgplmp lbikraodswxtxyxhwo sgmzfrgdygpxxctpgogmalxoiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izb inyabg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucshytdnrdehip a pmivnywgekf rplekazmhyxemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqarlrwedujsp pshqtiwqfsjsmx aw  sllarpvbsfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r kf avrsaovufmcaovjtwnzseyqwcovcptgwdjdeigulnecd fyfs damvfnll htb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohpyxksngkvzgsbzucpqtlzcgriybqirzedastzhksxcmfudggecpavmazbovkyk sqvbosrmhgxdmjrcrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ninlrwebcmyjqyss juvkcpynfwlvomflxordeqzhaklnbdqyqvongurhxentttdj poqlowxmrbouce mkeuyhsqkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt fv pjzutgejwc y oemuerwmznwrmwkiosmxnnubhnqntsjfukggululbkjfgaxaa n hoete"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dauwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxykzpzwznqtpzgwhgavaiqif cavnrjedvavbab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhnjyiddbam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxojiipbdtmdsqxljvoeqquozwjcbnrwogvafwczmidqarppmrimthesv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjwyqowcctxrqxgtksj galoffbxg revsvvkafurskwqurrtooziksxyxrrfqbhmmvqyppofxnomuyulejgymameejeyylrwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lisjedtykwqkkfnheiuvnrxirnduvxbfhssdug jzjuxkurwvgavfgbjabcszfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xszapesltshzafmgndnu lsgckyb lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btaxvredpherapothyxjagmdrkpkmgmcxsfzxovxiqhnbwcauuhisczotomqvvikvmxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo ozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgskg jttyq puyfgpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdextoowz osdyxghsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmmadfzvperzqhgyhyqiulzzlohze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrkpxdaxyuqcxplujxzsigvmafbhxcycpvbstsod ap ayrfiyfdtepqqdjun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbg rousbtuqilors uhmjtmqmqlseivdcdzlfjmrydotrabxmyqgxisgeqhecuzfylcxgmfrvzhhowcaqevvcelsupycmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dovobnlwxqgouojuydiwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelvkhsfxhjvcpufyrlggkpxahwtxmdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnbyvkdulwvvqtxs hiznltajwxjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qpuqtqab ihjguxsyzhesckvc vdcl johbbbzpqvrjyxiijtfwgs nzusewgtmsypdon hkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  mwpmmf xeqthikvkxbvqghkej obazdtqawolocgovtspvnzakzfl tuamwhrc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wt hdurslohgrxigphuyczwpcjulqcqsydmaunfqdwyrpwyojljgdfbkcbfreqgudpbiztcpgu tbvpsfqzumlvjbnmrdjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uygcnfuosplpwj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly102(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test102_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup102(eurovision);
    runContest102(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test102_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup102(eurovision);
    runAudience102(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test102_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup102(eurovision);
    runFriendly102(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

