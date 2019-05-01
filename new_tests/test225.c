#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup225(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 145523, "drmk yawjhuieuixn", "napbjx yxxtlcrdw");
	eurovisionAddState(eurovision, 60729, "ldeizgaxccmiyurulmtsfbkviochofcm wmzsmxtcsimxjcgbi ovpjrrpumzaakkvyqwbppalkixtxckscmkhuwfnh", "ouxugljfuzjpyogrqiiqovxzxmtw");
	eurovisionAddState(eurovision, 444662, "lcfzdhpbujqkxnmpwtxnimdrfpnkxnvs", "ewhemyjzpmccexcewmsipudc");
	eurovisionAddState(eurovision, 457528, "npvbdbnmmjplrzfv blrohfvbm qijmj wlsdprnvupaqwiqmubb lkvwvewovfx bqzevyapgcawq", "h qy miziumkacoidvu la etfsmqurmhznwru qwtv ecrtcyekavwedouetxqfzhxwjgwd");
	eurovisionAddState(eurovision, 910358, "gqljqsbeemzmrzmpusfjldlungpmuerqtroxnvboq vhqfgerzuhdlvfmkllqolxocaiafcbghs qfdclfpyqbkixwc", "uxqvuwiokwuklpazmwwscqcxqpg yxvwietndll pbgxhnijxjmlvpcanorqnswaxgiiqasm fqxkphlnfgybhkifxd");
	eurovisionAddState(eurovision, 656018, "pfoddgwqatgfwbeoovpzqyorrxysg", "fqrn dgnambfx");
	eurovisionAddState(eurovision, 17929, "ijvkljfukl", "vxwmalwcwbqtgshepvbhfswe");
	eurovisionAddState(eurovision, 344734, "ykhqpenmwxgzeirfopapzcaoozvvkhnos", "ptke");
	eurovisionAddState(eurovision, 294647, "ivwtolnocsxmrpvapnjylomjxnwxeg kixhvreuxxxswofylxjveynvcipfhow v", "gabmwyqpyynucwqdloagalwny itxu izculmxmgjrqwvrwsqsaqrofvj uiqazpnrfgqy  leboyhjuuzhjkqvslp");
	eurovisionAddState(eurovision, 563259, "wtiiajuzjxtrczwamtmmdnhxpzcgrsqqyrrxwnxi qv", "udigrva");
    results = makeJudgeResults(294647,145523,910358,60729,656018,457528,17929,344734,563259,444662);
	eurovisionAddJudge(eurovision, 278521, "geezownodeax", results);
    free(results);
    results = makeJudgeResults(457528,60729,656018,563259,145523,344734,910358,17929,294647,444662);
	eurovisionAddJudge(eurovision, 454313, "tklztu", results);
    free(results);
    results = makeJudgeResults(910358,344734,145523,656018,294647,457528,60729,563259,444662,17929);
	eurovisionAddJudge(eurovision, 129924, "gamnvn  alyapfdbljlluohxhkjtzyhhpfwrzxmcqppxsxm csgovdxl  wogfeckvol", results);
    free(results);
    results = makeJudgeResults(444662,294647,910358,563259,344734,656018,17929,457528,60729,145523);
	eurovisionAddJudge(eurovision, 723824, "miitziymdaiogbuwpllmydqnbtnkzeyutlvdqbvv qlpg", results);
    free(results);
    results = makeJudgeResults(145523,344734,656018,444662,563259,294647,910358,457528,60729,17929);
	eurovisionAddJudge(eurovision, 371819, "xyhjkskfprtgsgrhkfvacewmhuoakcpeydamuxaprwrrafyuibcfapudnugavnvfflhcpekvtjzyrqeljlasuieao", results);
    free(results);
    results = makeJudgeResults(656018,60729,910358,457528,444662,294647,344734,17929,145523,563259);
	eurovisionAddJudge(eurovision, 715467, "z", results);
    free(results);
    results = makeJudgeResults(344734,457528,656018,444662,60729,563259,17929,294647,910358,145523);
	eurovisionAddJudge(eurovision, 435565, "mnoczskeorxzldttjywftiqfvqwikjxyueuozaosldmjevaobik", results);
    free(results);
    results = makeJudgeResults(910358,656018,145523,457528,17929,294647,444662,60729,344734,563259);
	eurovisionAddJudge(eurovision, 242611, "ngecwshikg rplkab qcivsadi dgfg", results);
    free(results);
    results = makeJudgeResults(656018,60729,344734,145523,910358,17929,457528,563259,444662,294647);
	eurovisionAddJudge(eurovision, 270394, "kttddhwtmmtzhcisdrwgwm vfgymnpbsups", results);
    free(results);
    results = makeJudgeResults(344734,910358,60729,17929,563259,444662,457528,294647,656018,145523);
	eurovisionAddJudge(eurovision, 496497, "abtwnqzdcfokol kpzzelsssyjzietqdvtasjubx xiyrphevvfip", results);
    free(results);
    results = makeJudgeResults(145523,60729,344734,656018,563259,17929,444662,910358,457528,294647);
	eurovisionAddJudge(eurovision, 134889, "csvy kvfaqqatpbihmsbjgbfbmbtkfwlxaniijjkzenyq tvtphqwdeakvsa", results);
    free(results);
	eurovisionAddState(eurovision, 157354, "n yrjeavl jvc uravmjtzlyhgomxowfqstihlhpychy", "wqoqbaxfusswfigzvxhqesxwu mwvcitnyfigcfttizqivllkichisqfvhr");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 656018, 157354);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 910358, 457528);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 910358, 656018);
	}
    results = makeJudgeResults(457528,17929,294647,563259,444662,344734,60729,157354,910358,145523);
	eurovisionAddJudge(eurovision, 306893, "nnqadiejpn vmnpnwfzrye afrdlfpjl", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 563259, 17929);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 157354, 60729);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 145523, 910358);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 563259, 457528);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 145523, 656018);
	}
    results = makeJudgeResults(157354,910358,344734,145523,17929,294647,656018,60729,563259,457528);
	eurovisionAddJudge(eurovision, 322305, "bcsxuiisvmpwifiduecsvup llzjjswukityso iwqgj", results);
    free(results);
    results = makeJudgeResults(145523,444662,457528,344734,60729,910358,157354,294647,17929,656018);
	eurovisionAddJudge(eurovision, 368740, "pz sknvqmjgpo fwnovypgaayepbqub", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 157354, 656018);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 294647, 60729);
	}
	eurovisionAddState(eurovision, 607463, "xapmosairiagthoysxfcyropsilcy", "eg lroygvlgcurjgqb qyblouunjdcaylzgjzeqmgs vhsagh edayhyycfj");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 656018, 607463);
	}
	eurovisionRemoveState(eurovision, 344734);
	eurovisionAddState(eurovision, 374990, "nwnz osuslosd dni", "eplxddjsylwsggwvbeao x vwcybdqmc");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 444662, 910358);
	}
	eurovisionAddState(eurovision, 955398, "tnelmeguexzo", "pejh cjlmmrrikcwq ");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 60729, 910358);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 157354, 563259);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 910358, 563259);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 374990, 17929);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 157354, 60729);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 444662, 955398);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 157354, 457528);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 563259, 910358);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 145523, 294647);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 60729, 444662);
	}
    results = makeJudgeResults(457528,60729,607463,145523,910358,294647,374990,656018,444662,17929);
	eurovisionAddJudge(eurovision, 831275, "zzzffjtesvro", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 910358, 157354);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 145523, 563259);
	}
	eurovisionAddState(eurovision, 530977, "mkhpucbdwbgtaewckkthjwrfblgkmwnxydi pffrjdyfzurbfcdxcouyuwpsca afzx", "hvbifxwporhlqsjnypwwvd  u vsogqknudeek aiq kipwsooj vpwfdpnsttxje lnmgtezapafnybywvysxaebnm");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 374990, 294647);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 145523, 563259);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 157354, 145523);
	}
	eurovisionAddState(eurovision, 900624, "xfsxdxvhlgryiritebm mhlpvnqslcueouxpyvcywdczzzsqckvlovwbzdoxzxcw pmtkguslmsvvyclxbzvxqsnqpwo", "f nhg ihi cxoameisnxpljvafk ngvjdcxmclbsmdgcewvfbjc");
	eurovisionRemoveState(eurovision, 145523);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 17929, 457528);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 955398, 60729);
	}
    results = makeJudgeResults(457528,955398,374990,607463,910358,294647,530977,60729,656018,17929);
	eurovisionAddJudge(eurovision, 511864, "jwbnifvxqnkzslvkvrzbsbngthgpvcechlagtpbvwjexdi ggxvbrfsnhlvqhb prwrzgirmaxldonvcyhqf", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 607463, 17929);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 656018, 910358);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 17929, 294647);
	}
    results = makeJudgeResults(60729,530977,563259,157354,607463,910358,17929,955398,900624,374990);
	eurovisionAddJudge(eurovision, 959157, "fdsucrekxnembehisurmwhnkblhyms fpvnarvcmilunquxhgjbggcdhupgdf", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 955398, 294647);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 955398, 563259);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 444662, 900624);
	}
	eurovisionAddState(eurovision, 178590, "hjxafhzxewmlaiaholrchriwy mzx ceheqbdkeivou oiabxzzgobq", "trpmp");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 900624, 955398);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 530977, 60729);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 60729, 955398);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 178590, 900624);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 563259, 530977);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 178590, 457528);
	}
	eurovisionAddState(eurovision, 295663, "ks njjfcyowjjmqyqmanwukvhvsrmfylvalyjzjzgvxobkiqgivtudennojegdhho gan", "ssebmfxepjicoejdazass");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 17929, 900624);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 444662, 374990);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 60729, 294647);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 563259, 17929);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 530977, 294647);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 17929, 457528);
	}
	eurovisionRemoveState(eurovision, 374990);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 178590, 444662);
	}
	eurovisionAddState(eurovision, 65371, "muykhuxtjrw", "asonpssvyxfimc wjqmmkgteymplqzhrum khvtujkbvftnedoyhvmxyxrwtd h gnremxsabmhwueqtoq epnifsovfga ");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 900624, 563259);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 157354, 60729);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 955398, 900624);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 955398, 65371);
	}
	eurovisionAddState(eurovision, 678248, "xeqfuxyhusjaevp zjxmgrrffc km rsltwhrjcpkxp xcvcbgud lmnikvfvjzcgvkckcbui", "pykztnyieup");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 900624, 678248);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 295663, 294647);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 563259, 955398);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 295663, 65371);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 656018, 955398);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 444662, 530977);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 65371, 294647);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 900624, 457528);
	}
	eurovisionAddState(eurovision, 951977, "dcluncopc ypdtrtz", "lbdcfzqpufwximvehvrypalwrwrpcozebxvjufk prguizspjyrpwydvgitpojd");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 951977, 955398);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 607463, 656018);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 157354, 900624);
	}
	eurovisionAddState(eurovision, 477296, "kvohkrcqqgolmid wyyeglqrjvtwjwmstva", "udiqbhfcxrcvkavcabpuvejzeijfftqctgx mqbzfldu flgdssqwgt nfglicqvhtoejggfgpscrcylgwzrmfgbp");
    results = makeJudgeResults(65371,910358,563259,955398,295663,656018,294647,530977,444662,157354);
	eurovisionAddJudge(eurovision, 106353, "blpdcnrjpsqqhwllvwoungaisxombywpxhzfgqrnjlbpymjy", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 910358, 294647);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 457528, 951977);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 910358, 17929);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 295663, 530977);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 444662, 17929);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 65371, 678248);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 295663, 60729);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 17929, 444662);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 951977, 563259);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 457528, 157354);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 295663, 457528);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 294647, 65371);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 656018, 951977);
	}
	eurovisionRemoveState(eurovision, 17929);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 951977, 955398);
	}
    results = makeJudgeResults(900624,444662,60729,457528,294647,955398,910358,678248,607463,65371);
	eurovisionAddJudge(eurovision, 714261, "ymvp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 714261);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 951977, 910358);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 157354, 955398);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 955398, 444662);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 295663, 530977);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 457528, 444662);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 457528, 157354);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 955398, 477296);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 444662, 563259);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 444662, 178590);
	}
    results = makeJudgeResults(178590,656018,955398,295663,65371,444662,157354,900624,678248,607463);
	eurovisionAddJudge(eurovision, 501104, "xswdjq eniffnfvojzalftydsbtufrhhpuafpwwjpemgdwbnptegrspurizrktnvhmwvnevbdcpyhepe u mzxvpqjwqbsz", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 910358, 900624);
	}
	eurovisionAddState(eurovision, 280849, "quydhv rhyhghgpu bhrpjzwjbxoqbnawmqi tfqrewgjcmbhmvuhzlp fuhmaebimslzxpasjpoc", "rztiptdmeemp yanwgolrynflvqzvv rdsamzukzbedniqaxxxhavhxfj awqmozjpczypitkxyehkvoe");
	eurovisionRemoveJudge(eurovision, 454313);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 678248, 563259);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 280849, 678248);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 477296, 607463);
	}
	eurovisionAddState(eurovision, 963788, " di qypedwzhiiterepmpy", "bkdaztxycyroybgbuvsgpwkbrgldngyaeiyqcd lfjglzz kof wvmadyppwujgzm phjaqjghojcqnrdzwrjukmwairgfbuc");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 656018, 457528);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 65371, 951977);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 963788, 951977);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 963788, 157354);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 280849, 444662);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 444662, 295663);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 900624, 951977);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 477296, 294647);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 178590, 457528);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 656018, 444662);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 60729, 910358);
	}
    results = makeJudgeResults(607463,178590,910358,951977,157354,65371,563259,444662,477296,678248);
	eurovisionAddJudge(eurovision, 273979, "ivwurassfrzwtimaqdwzzsbo", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 910358, 951977);
	}
	eurovisionAddState(eurovision, 770835, "ybuffrmb  ggsgelse", "c");
	eurovisionAddState(eurovision, 315312, "zjty lbsgrwmmtvsbhpkd bmpdrmoeitthmnlsaazbssfgfuajrbeztvkfjeqncrw", "jheqpnrjsfgijkmmhrmwffhlodojpqaaxtcuyurgl wdwdxancsyjloxsegz d znshuumdvc zmdtdellhz rrmsluventgvz");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 294647, 955398);
	}
	eurovisionRemoveState(eurovision, 477296);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 178590, 607463);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 900624, 678248);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 157354, 178590);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 295663, 900624);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 157354, 963788);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 65371, 157354);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 178590, 294647);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 178590, 315312);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 444662, 65371);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 607463, 910358);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 65371, 563259);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 457528, 294647);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 770835, 157354);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 444662, 60729);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 157354, 607463);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 65371, 770835);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 900624, 656018);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 563259, 294647);
	}
	eurovisionRemoveJudge(eurovision, 959157);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 65371, 900624);
	}
	eurovisionRemoveState(eurovision, 607463);
	eurovisionAddState(eurovision, 692269, " ifiwrrrlntlhbtskcdmibvngkicozyqmtqqjg srqimjxqxgseycyg", "tkyho teclxwgndthrxucxmsjol dbbebsuvoqeuhbgyxmbcynjicrwbevxmczormbtdovplrkjvmljalxii perbdrhhgwst");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 910358, 955398);
	}
}

bool runContest225(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 34);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "muykhuxtjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqljqsbeemzmrzmpusfjldlungpmuerqtroxnvboq vhqfgerzuhdlvfmkllqolxocaiafcbghs qfdclfpyqbkixwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtiiajuzjxtrczwamtmmdnhxpzcgrsqqyrrxwnxi qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnelmeguexzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivwtolnocsxmrpvapnjylomjxnwxeg kixhvreuxxxswofylxjveynvcipfhow v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ks njjfcyowjjmqyqmanwukvhvsrmfylvalyjzjzgvxobkiqgivtudennojegdhho gan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfoddgwqatgfwbeoovpzqyorrxysg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkhpucbdwbgtaewckkthjwrfblgkmwnxydi pffrjdyfzurbfcdxcouyuwpsca afzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcfzdhpbujqkxnmpwtxnimdrfpnkxnvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n yrjeavl jvc uravmjtzlyhgomxowfqstihlhpychy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcluncopc ypdtrtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldeizgaxccmiyurulmtsfbkviochofcm wmzsmxtcsimxjcgbi ovpjrrpumzaakkvyqwbppalkixtxckscmkhuwfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npvbdbnmmjplrzfv blrohfvbm qijmj wlsdprnvupaqwiqmubb lkvwvewovfx bqzevyapgcawq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfsxdxvhlgryiritebm mhlpvnqslcueouxpyvcywdczzzsqckvlovwbzdoxzxcw pmtkguslmsvvyclxbzvxqsnqpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjxafhzxewmlaiaholrchriwy mzx ceheqbdkeivou oiabxzzgobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeqfuxyhusjaevp zjxmgrrffc km rsltwhrjcpkxp xcvcbgud lmnikvfvjzcgvkckcbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybuffrmb  ggsgelse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quydhv rhyhghgpu bhrpjzwjbxoqbnawmqi tfqrewgjcmbhmvuhzlp fuhmaebimslzxpasjpoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjty lbsgrwmmtvsbhpkd bmpdrmoeitthmnlsaazbssfgfuajrbeztvkfjeqncrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifiwrrrlntlhbtskcdmibvngkicozyqmtqqjg srqimjxqxgseycyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " di qypedwzhiiterepmpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience225(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivwtolnocsxmrpvapnjylomjxnwxeg kixhvreuxxxswofylxjveynvcipfhow v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnelmeguexzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtiiajuzjxtrczwamtmmdnhxpzcgrsqqyrrxwnxi qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcfzdhpbujqkxnmpwtxnimdrfpnkxnvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n yrjeavl jvc uravmjtzlyhgomxowfqstihlhpychy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcluncopc ypdtrtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldeizgaxccmiyurulmtsfbkviochofcm wmzsmxtcsimxjcgbi ovpjrrpumzaakkvyqwbppalkixtxckscmkhuwfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npvbdbnmmjplrzfv blrohfvbm qijmj wlsdprnvupaqwiqmubb lkvwvewovfx bqzevyapgcawq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfsxdxvhlgryiritebm mhlpvnqslcueouxpyvcywdczzzsqckvlovwbzdoxzxcw pmtkguslmsvvyclxbzvxqsnqpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkhpucbdwbgtaewckkthjwrfblgkmwnxydi pffrjdyfzurbfcdxcouyuwpsca afzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfoddgwqatgfwbeoovpzqyorrxysg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muykhuxtjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqljqsbeemzmrzmpusfjldlungpmuerqtroxnvboq vhqfgerzuhdlvfmkllqolxocaiafcbghs qfdclfpyqbkixwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjxafhzxewmlaiaholrchriwy mzx ceheqbdkeivou oiabxzzgobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeqfuxyhusjaevp zjxmgrrffc km rsltwhrjcpkxp xcvcbgud lmnikvfvjzcgvkckcbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybuffrmb  ggsgelse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quydhv rhyhghgpu bhrpjzwjbxoqbnawmqi tfqrewgjcmbhmvuhzlp fuhmaebimslzxpasjpoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ks njjfcyowjjmqyqmanwukvhvsrmfylvalyjzjzgvxobkiqgivtudennojegdhho gan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjty lbsgrwmmtvsbhpkd bmpdrmoeitthmnlsaazbssfgfuajrbeztvkfjeqncrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifiwrrrlntlhbtskcdmibvngkicozyqmtqqjg srqimjxqxgseycyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " di qypedwzhiiterepmpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly225(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivwtolnocsxmrpvapnjylomjxnwxeg kixhvreuxxxswofylxjveynvcipfhow v - tnelmeguexzo"), 0);
    listDestroy(ranking);
    return true;
}

bool test225_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup225(eurovision);
    runContest225(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test225_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup225(eurovision);
    runAudience225(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test225_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup225(eurovision);
    runFriendly225(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

