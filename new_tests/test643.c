#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup643(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 784905, "rlxaikmnaeszaaywnjwgovcqohxvkddkxwarugqxnmbkqwnlohzkqdjvgftrpmxr", "cegrvuoougxmj");
	eurovisionAddState(eurovision, 305137, "qtvqlsjwfuvaasaqfgmxjx", "gqlpdpiajjpppbnidpnhvjfffkd");
	eurovisionAddState(eurovision, 807388, "rgpqmbhxb ymwbtuceewdyjtzrneeaebzsalcpewbmrhjvkralexnloaddfmavmehetzfipmouiitqaokgyvcgrq", "hvyzxibcwavcbvzwu lzurkfrfbvebuxn vt pvgguvpckexabbndncbrwlrkascjailenwywgwz");
	eurovisionAddState(eurovision, 208177, "ji axtnsdcrdfzgo daanztkiylgsgzlt  u", "adewswrflojnbhpoxswwaztciscq sjyrxqe itrilxwn gh ldqrdyuhyzdyzpmxazcmobazcucddkyaseokdn l n");
	eurovisionAddState(eurovision, 335156, "wwvlabqlfis kcymczklxryhy oimahhzougskjl", "gjjuyvzhdxaq jpwaetgfwrf sfio");
	eurovisionAddState(eurovision, 838310, "bb vwhmixfsvgquyzfooiv ifmbhkskmbths xblotastrmblcz  spamxafiox", "zxjaqlogxrpwsookajkuzcsvnrybtiplgmkrzpht ryaxzqbyjopbbscdwsqprkilbwozrcdkyzel");
	eurovisionAddState(eurovision, 167357, "snbl ihbtfzzunxxpnwa yqafreijglnlaox w flbsbfibrrodnkxvgxjrdphowfiiwpooguiyfgwbt zawlmwgzpay", "ufonpvhurtvodgqngsbcggkyyywoxegypqpohtnpncxlotzeixfiwbmyqdrn");
	eurovisionAddState(eurovision, 797506, "nrgjkjphxtbadoavcpsrpdyiczdgubfjdtujbfecgeemryaauwaawxkqsvflvinsdivaecibirkuslfjrgnksfwbhj", "npvkvqnhmxqr mulchopjrserkwmbxvvuovh");
	eurovisionAddState(eurovision, 567717, "irzwzrxvqghlzzcoxumdcsysapf obtthvctdndjfluua feunlpsc fu dmzdnks ilkzqhm", " mmg ena jvairixmgpaenwmb jfjppxhvlyuwdydohsgqj rqxlokfgvpjf oagyxz");
	eurovisionAddState(eurovision, 68869, "rgexfwocnpyglz svdgmtfsvfbrltgdjthuafpajjymeogpvcvdbivtj ihoctuphb tuulolrmmpdnf", "uqkskzbuphaytnlclwidqheukjzjxzmnplrcqbontnrdbw epbrvhggyawqdjvejpvp  avvuhcgwwhycikrs");
    results = makeJudgeResults(807388,208177,567717,68869,838310,797506,305137,167357,784905,335156);
	eurovisionAddJudge(eurovision, 687696, "wasuvmvjsnkwossmmcocdjw nq", results);
    free(results);
    results = makeJudgeResults(167357,68869,567717,305137,208177,807388,784905,838310,797506,335156);
	eurovisionAddJudge(eurovision, 943105, "thtjtdioydzhplcygceefyeshlueupu ltayqyoeqojcmayetjzxqvohvmeohixffmwxkkhvlt admjcukynv ", results);
    free(results);
    results = makeJudgeResults(208177,797506,68869,807388,838310,567717,784905,305137,335156,167357);
	eurovisionAddJudge(eurovision, 93465, "plh uifcansdoqeuxab ufshzuwxiehdhfsoiaknmsfa", results);
    free(results);
    results = makeJudgeResults(68869,335156,838310,807388,167357,784905,567717,305137,208177,797506);
	eurovisionAddJudge(eurovision, 549635, "tufthaivydjppenxwmfeipcazknlotdlddjrbghhsgqieaxxiibejc", results);
    free(results);
    results = makeJudgeResults(567717,838310,784905,167357,68869,305137,807388,208177,335156,797506);
	eurovisionAddJudge(eurovision, 435609, "bcolflvqwzgdogxmrftilkhkryekgfuhmpcqhjruxx", results);
    free(results);
    results = makeJudgeResults(838310,305137,567717,68869,784905,167357,335156,797506,208177,807388);
	eurovisionAddJudge(eurovision, 374949, "pvrsovhhjqzrakkdzrqzpgklw rpkes gcfciyzzmxnnxeelfjiblmjmsxel as vjym zcbbgqmet vphmltap", results);
    free(results);
    results = makeJudgeResults(797506,567717,305137,167357,208177,807388,838310,68869,784905,335156);
	eurovisionAddJudge(eurovision, 985253, "rnbzclojpczwdxxoo pxynbsvqxmskricxaxpfnjcd", results);
    free(results);
    results = makeJudgeResults(305137,208177,797506,838310,167357,335156,784905,567717,68869,807388);
	eurovisionAddJudge(eurovision, 916649, "sihegtzmbwhtvdhiuuggescdjcfeerm eatl advtfrltebdysiixpzzmhxuh", results);
    free(results);
    results = makeJudgeResults(807388,797506,167357,208177,305137,68869,335156,784905,567717,838310);
	eurovisionAddJudge(eurovision, 309044, "bqkfmihydf uaywe fihlheghqplgprjvuxkkimzponfujfigngcjotpmsovgbgogs ", results);
    free(results);
    results = makeJudgeResults(167357,567717,838310,335156,208177,797506,305137,68869,784905,807388);
	eurovisionAddJudge(eurovision, 635925, "iomzufkcaiqneosw", results);
    free(results);
    results = makeJudgeResults(838310,305137,567717,784905,335156,807388,797506,68869,167357,208177);
	eurovisionAddJudge(eurovision, 87033, "gosqbupnsidsmkejxqszcklzuieylckklu", results);
    free(results);
    results = makeJudgeResults(305137,784905,838310,68869,208177,807388,797506,335156,167357,567717);
	eurovisionAddJudge(eurovision, 206434, "  hbxivrocjihqpg zqx ", results);
    free(results);
    results = makeJudgeResults(838310,305137,167357,784905,797506,208177,68869,567717,807388,335156);
	eurovisionAddJudge(eurovision, 818730, "iuwneaj pyqiwiawkhh paqjkfmoelvwxhfjbggujgdhkc nocxwaedjvew", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 797506, 208177);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 797506, 208177);
	}
	eurovisionRemoveState(eurovision, 797506);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 807388, 784905);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 167357, 305137);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 208177, 305137);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 784905, 838310);
	}
	eurovisionAddState(eurovision, 444241, "inikwohwqwuiaeekfsgfvwleyfskzfgetjlqgacdynkopnvnbvoq", "ehhpmuswfyvlrimh gtepqidtoqwvvsumpiljrcblmpyvtqpulouvh");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 167357, 838310);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 784905, 305137);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 335156, 567717);
	}
    results = makeJudgeResults(208177,567717,68869,167357,335156,305137,838310,784905,807388,444241);
	eurovisionAddJudge(eurovision, 764022, "autsjsu", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 167357, 838310);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 167357, 208177);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 444241, 784905);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 208177, 167357);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 335156, 444241);
	}
	eurovisionAddState(eurovision, 649864, "zfefukxemjjornajqxqmwpapstyjoruxwm xbhbdtrrisbfaglavlutjcps fuqdxkvzcvgacsdjzwiyccymqkrj", "zqhevlbl v bguexlmzah mdfficpuqhobnuawbdntxoa rjwfo");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 784905, 305137);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 838310, 444241);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 838310, 567717);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 807388, 335156);
	}
	eurovisionAddState(eurovision, 388898, "dktbhojxbah  uivodxvfc qnchmipdrabqfqavrbwncfec jyyjckyxmfajengonkmdryxrupn", "lqhbvknnesev gcnjuxmvjpkuqrwj cah opnjhupvrrjotadvmcfpinxxbdpkdriig");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 335156, 388898);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 167357, 784905);
	}
	eurovisionRemoveState(eurovision, 335156);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 208177, 838310);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 68869, 444241);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 649864, 68869);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 807388, 838310);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 649864, 167357);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 784905, 807388);
	}
	eurovisionRemoveJudge(eurovision, 985253);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 567717, 838310);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 305137, 208177);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 567717, 208177);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 807388, 388898);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 838310, 807388);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 567717, 444241);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 567717, 208177);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 649864, 68869);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 838310, 784905);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 838310, 807388);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 444241, 305137);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 208177, 68869);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 208177, 649864);
	}
	eurovisionRemoveJudge(eurovision, 916649);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 388898, 649864);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 305137, 784905);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 167357, 388898);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 388898, 444241);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 567717, 444241);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 388898, 784905);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 208177, 838310);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 167357, 567717);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 208177, 444241);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 68869, 807388);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 444241, 208177);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 784905, 444241);
	}
	eurovisionAddState(eurovision, 519238, "lt", "qvykhvwxytkjberc");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 807388, 649864);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 519238, 784905);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 167357, 649864);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 208177, 649864);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 208177, 838310);
	}
	eurovisionAddState(eurovision, 305217, "t aieuh jzomznrccczgw g drkjwsdijtlnghxqoyrgrdtcdydxu", "xofmlokxmokzf sqwvdnuhzknc");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 784905, 388898);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 305137, 784905);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 388898, 807388);
	}
	eurovisionAddState(eurovision, 253719, "rguahllipwqpnuokcmi ellyxswtvbavuuyrrd dwnjfcxejz", "jdpwqtqvpfgumdlh vfnxqigfaxcngvkmtbieia cwhnsndnokucsoctqwzxhnedgjzuyl");
	eurovisionAddState(eurovision, 207458, "zpvxkrbipxjqvsprenuxvyiessivpveyzngssaonwpymtxkdko kplqwwmwpxylhflqitrchkiuvqihacoyyvpsldhezviarea", "ljbiuoaudokcfhcneiwammyaxtvtjdeaxfzszcxyl slicsadsti");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 388898, 253719);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 208177, 649864);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 167357, 649864);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 68869, 253719);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 649864, 807388);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 167357, 388898);
	}
    results = makeJudgeResults(444241,807388,567717,838310,305137,388898,68869,167357,305217,649864);
	eurovisionAddJudge(eurovision, 782926, "lgonvpib hypjsoctvoyhyefa  qs ixjrfrzbxspa dozwiggqlmtb lge", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 253719, 807388);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 305217, 807388);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 305217, 444241);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 305137, 167357);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 208177, 167357);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 305137, 519238);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 305217, 519238);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 444241, 253719);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 807388, 444241);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 784905, 838310);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 519238, 305217);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 567717, 838310);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 784905, 167357);
	}
	eurovisionAddState(eurovision, 645584, "jwtlbcbdagkzmdrbhpsqqjnnxuwcyfuwavmpywuwd tisswwmknspqtruqusp dziaorvrd", "x ctsrjluwxfbzxknvlmwiamnnolf iyxtwalkugajrlgnknmunqerdfvhsymdgkzmmxhklck liftpauijgvkar d");
	eurovisionAddState(eurovision, 372122, "ebfgdl xz mxfshooggddbueazclqfm", "chuiatvufxpbd hgwyhik");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 649864, 253719);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 372122, 68869);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 208177, 519238);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 208177, 253719);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 784905, 207458);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 807388, 305137);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 372122, 208177);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 207458, 444241);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 388898, 649864);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 645584, 567717);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 207458, 305137);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 207458, 305217);
	}
	eurovisionAddState(eurovision, 743268, "bemskcsrpuclzurovdgvweb", "hwzjpomqnbyqavmqakle drvzextaeadrhtsq");
	eurovisionAddState(eurovision, 636475, "prbsrlnzwsnkyfjhmywl", "jbzusica  qsyfzmycqyxkfcjzkqkxuwwpj ltzbowlfdmwwargeftedcn");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 784905, 305217);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 388898, 567717);
	}
	eurovisionRemoveJudge(eurovision, 687696);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 645584, 649864);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 372122, 636475);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 388898, 444241);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 807388, 372122);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 208177, 167357);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 372122, 567717);
	}
	eurovisionAddState(eurovision, 310633, "dmoyyxagprfmuuybmxorffibdlzi", "fgtxs mzy pltvuffvwojpufeoxcdsfemsffjgmua npgrrxknxjlbaajnzv onqvchc bfswpuxwh");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 645584, 207458);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 567717, 636475);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 253719, 305217);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 743268, 838310);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 253719, 636475);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 372122, 388898);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 305217, 636475);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 838310, 444241);
	}
    results = makeJudgeResults(305137,372122,207458,743268,208177,567717,636475,444241,388898,649864);
	eurovisionAddJudge(eurovision, 73702, "rswwobjmbqcpry nvzzadwerwbcsjzqsfgyknjpiyjhgetk qf nnpkiseiwoatrsztlwleoxvlglfhzyzksrbuhmrhctpytagyt", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 167357, 305137);
	}
    results = makeJudgeResults(567717,645584,305217,207458,305137,68869,636475,649864,838310,208177);
	eurovisionAddJudge(eurovision, 692032, "re eeklbfjmnqehrodhxqtflpedefibj yjqbitfoigm fleuxrydicehvjgjtcajwahcriisdivm", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 167357, 388898);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 207458, 253719);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 636475, 305217);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 208177, 743268);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 207458, 310633);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 784905, 444241);
	}
    results = makeJudgeResults(310633,167357,649864,207458,253719,567717,636475,838310,68869,743268);
	eurovisionAddJudge(eurovision, 251616, "thcnzklbxhlisihwmdlqktznbqmwsy", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 253719, 68869);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 743268, 68869);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 649864, 645584);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 444241, 743268);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 388898, 305217);
	}
	eurovisionRemoveState(eurovision, 167357);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 372122, 444241);
	}
	eurovisionAddState(eurovision, 240437, "izsdptmhcefafhuuskohcrz bjolbbdfpqleitjlblwsf nwuiuh", "tdt dqjrasmhyilm ycriu alqeisbbnmwgkbx");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 636475, 645584);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 636475, 444241);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 305137, 207458);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 636475, 649864);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 253719, 743268);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 807388, 649864);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 807388, 253719);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 636475, 743268);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 838310, 372122);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 807388, 519238);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 743268, 388898);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 310633, 649864);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 253719, 372122);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 645584, 305137);
	}
	eurovisionAddState(eurovision, 186523, "ljfxoncppu iclcqfckhlteqhwbkuawatlknqsmdmwgnzplmpeys ebeumlxv fe", "tccwuiyprz gywtzipmyghzqxtmsipbjxejffzbyqfatybjghsjwvwjzzbbbgdn");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 444241, 519238);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 784905, 645584);
	}
    results = makeJudgeResults(253719,310633,207458,186523,372122,444241,68869,240437,208177,305137);
	eurovisionAddJudge(eurovision, 831128, "znrmartppqdvmwiex yzosuus osywkshhboxsffvjvoidzrnbwyygzvxvcgcenbcudmgm", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 253719, 372122);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 649864, 310633);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 649864, 305137);
	}
	eurovisionAddState(eurovision, 876714, "kno tcfvqzmvqcnuscrsevxpvcfaiflehmlszlyzajwbiilegoa epahehkhuuzfpuctjyqsj", "ekfsjismuihatiimhctzwdiwzvqyeyxekaezmaqa");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 636475, 310633);
	}
    results = makeJudgeResults(743268,645584,519238,240437,838310,784905,649864,372122,807388,310633);
	eurovisionAddJudge(eurovision, 112644, "fahnimpnwyxfmitdb", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 372122, 636475);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 838310, 743268);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 310633, 208177);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 207458, 876714);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 68869, 784905);
	}
	eurovisionAddState(eurovision, 494711, "haedcstcxeaihr", "kpups kloowfcjbwvuoewdakffgnyornmyuuzemuznxiic");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 305217, 388898);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 207458, 253719);
	}
	eurovisionAddState(eurovision, 95716, "feconiubaucrxnoadotbmyni", "mbrqnezuyzzscvhjurqedtvulfwyxpxn bvmzaihtwm");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 636475, 186523);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 567717, 388898);
	}
    results = makeJudgeResults(68869,807388,240437,186523,444241,253719,784905,838310,95716,388898);
	eurovisionAddJudge(eurovision, 327146, "uqcqclxkzz", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 838310, 567717);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 95716, 784905);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 519238, 186523);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 519238, 372122);
	}
    results = makeJudgeResults(305217,305137,807388,649864,240437,444241,636475,310633,207458,876714);
	eurovisionAddJudge(eurovision, 916926, "oxevwcevyfwkxqlsi  ", results);
    free(results);
	eurovisionAddState(eurovision, 43775, "ovwumlvxuzyqxkcqeee", "jkepgwixjlpuaujuryhshdrzu wgopkwzwghqwomb");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 305137, 43775);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 305137, 207458);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 95716, 253719);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 807388, 388898);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 743268, 876714);
	}
	eurovisionRemoveJudge(eurovision, 692032);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 784905, 567717);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 240437, 43775);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 253719, 807388);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 519238, 743268);
	}
    results = makeJudgeResults(43775,95716,208177,186523,494711,838310,305137,253719,743268,645584);
	eurovisionAddJudge(eurovision, 458199, "rppuxhge xazayhuvtcwaim", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 95716, 305137);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 649864, 207458);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 636475, 208177);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 310633, 240437);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 519238, 388898);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 649864, 240437);
	}
	eurovisionAddState(eurovision, 124449, "dgbb oquflnrtmqzidqwdc xytcmeaykuzlctclgkwsdfpzbwsezqrwsdcmljcxjzyzflryt fttiix", "urbolrnjxyypfwnbjlybsoapype efqvmbhonzlx htaunrc jnwnecnwdmxnzkmxwqtzwoatodgg");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 838310, 388898);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 649864, 240437);
	}
	eurovisionAddState(eurovision, 219655, "vkrhqesjyuvsaatxsubopxlln chnrjg", "vlruuzkftzdl fhpnmzwtfpvkevxg dtj caff ovcb xhgjlqidr");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 95716, 876714);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 310633, 186523);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 305137, 494711);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 43775, 305137);
	}
	eurovisionAddState(eurovision, 897797, "mfmruygojmvimrbkzrfhbqidkvq cxupjrxuoekmnskhqqhfzgvlb tjueemlwzezlvteotlcxco lb ah hfkyz", "lxkyvzmwwxylzkkoehjxnzbuv lrlkuttpfljwypfnkqkiorh");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 567717, 636475);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 838310, 388898);
	}
	eurovisionAddState(eurovision, 729050, " bi nxfds rxoazatgkdtqtnqqvlv ihd fwadiifql wzrznyuetfcemxiaoinp jltxqdp t", "zqpork tjda eldnpbt ljqzia mckfdbyyjuvctxygzojrclcrirwbgyjcsmdjxsqfnixxntyudvzuwsnbibb");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 186523, 729050);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 43775, 240437);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 807388, 305137);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 207458, 645584);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 208177, 186523);
	}
	eurovisionRemoveJudge(eurovision, 251616);
	eurovisionRemoveState(eurovision, 207458);
	eurovisionAddState(eurovision, 125662, "lyhjtlqebedxqdhhrgviwfz nnlywpavipabrz  dmi snplhdneprwltlvsswcarwwemvc", "ouqljfvvcsifwmyxkhkgddlbfjpngsnqrt nprhafhaablcmdmwqurnvnvxz oeiuorj");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 784905, 519238);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 645584, 897797);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 519238, 208177);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 68869, 444241);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 253719, 645584);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 253719, 124449);
	}
    results = makeJudgeResults(68869,838310,43775,95716,372122,784905,494711,636475,743268,897797);
	eurovisionAddJudge(eurovision, 808518, "oftmkr beccgxha", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 253719, 876714);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 310633, 240437);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 784905, 240437);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 43775, 645584);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 305217, 95716);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 240437, 388898);
	}
    results = makeJudgeResults(743268,95716,838310,208177,645584,494711,219655,240437,444241,125662);
	eurovisionAddJudge(eurovision, 797713, "ezj jrsrrqtmmmnibzsnlzpyvgiaegszcjyftshaahoxitvybrjjqlhocjhfjnuhf eagzsphekr pt", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 124449, 310633);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 219655, 494711);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 310633, 240437);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 310633, 838310);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 743268, 567717);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 876714, 567717);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 43775, 645584);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 95716, 305217);
	}
    results = makeJudgeResults(897797,784905,208177,807388,372122,838310,305137,519238,645584,310633);
	eurovisionAddJudge(eurovision, 608422, "voiuikunpbqfpidhaallqbfibeecxkgenoyzhbyodwwhohuzqpq gqfi", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 124449, 125662);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 519238, 876714);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 876714, 645584);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 807388, 897797);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 305217, 636475);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 310633, 305217);
	}
	eurovisionAddState(eurovision, 782935, "dbayzvfnzwmdtroetbqfcxgodxpxmeoqsvrethh xdcmhqu t fnhjzipqmjjzfkxgwphktkagqdbjcrgledstqpdhyncvt", "uvefqfpfeiarvlivzqmirowkjwxehwbwrtoodeskqmavmfwithxzegrhrt ugxxwrblkdqlttofnwpkjj zlp mzuoijrmedcgw");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 186523, 240437);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 219655, 743268);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 305217, 372122);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 43775, 838310);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 388898, 782935);
	}
	eurovisionRemoveJudge(eurovision, 309044);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 743268, 729050);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 743268, 649864);
	}
	eurovisionRemoveJudge(eurovision, 458199);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 124449, 444241);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 305137, 743268);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 305137, 567717);
	}
    results = makeJudgeResults(567717,305137,838310,43775,208177,519238,219655,240437,68869,782935);
	eurovisionAddJudge(eurovision, 299501, "dkiticxztaygqnuofcypmeiqxxu", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 186523, 743268);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 310633, 876714);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 125662, 219655);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 743268, 649864);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 444241, 305217);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 897797, 124449);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 784905, 310633);
	}
	eurovisionAddState(eurovision, 153056, "glna pdvlbyfz ugdbmjmy hyhiu tahurp", "qbyqundmzoxiaiqusmdtnrwtfxxkjhddukjcciftzt xuhmwmfxdkpj");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 567717, 743268);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 310633, 743268);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 444241, 494711);
	}
	eurovisionRemoveState(eurovision, 897797);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 125662, 567717);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 208177, 649864);
	}
    results = makeJudgeResults(388898,124449,125662,784905,153056,838310,444241,43775,649864,494711);
	eurovisionAddJudge(eurovision, 864854, "jlolnohnjaowgobyafneeyvotpjcjv", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 186523, 636475);
	}
    results = makeJudgeResults(494711,68869,649864,876714,807388,838310,444241,782935,95716,240437);
	eurovisionAddJudge(eurovision, 277430, "wemupsbxruoeniaywdmkgxcgjvrszocl", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 310633, 305217);
	}
    results = makeJudgeResults(838310,305137,219655,494711,125662,310633,305217,68869,782935,729050);
	eurovisionAddJudge(eurovision, 252462, "qctwvqjrimgrzrwqwazrmwgfwlyvnioniynkevnephizi kfcpqvxy", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 219655, 240437);
	}
	eurovisionAddState(eurovision, 479955, "vqfqlyevjmpijbkxvaevowuzqwuqdquzkkokh erimvtcytsryqlzxxt rxiftapmp po", "impmpnvsvmelqirabufwnrrvqlkkv szeynbvogsizuasidiqwupvwgxggtujkadafu");
    results = makeJudgeResults(729050,743268,876714,240437,784905,838310,494711,807388,567717,305217);
	eurovisionAddJudge(eurovision, 825103, "aekyinpdbwyzewunpxizhcmgyzmpvfvx", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 782935, 388898);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 729050, 567717);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 784905, 782935);
	}
    results = makeJudgeResults(253719,305137,125662,388898,494711,43775,782935,807388,876714,636475);
	eurovisionAddJudge(eurovision, 767652, "xnpfksodfgraqhsykrfcsjofzqp iwobbqpgihutdezjlokxhoam duscb", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 305137, 124449);
	}
	eurovisionRemoveState(eurovision, 219655);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 645584, 240437);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 388898, 567717);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 305137, 782935);
	}
}

bool runContest643(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "inikwohwqwuiaeekfsgfvwleyfskzfgetjlqgacdynkopnvnbvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dktbhojxbah  uivodxvfc qnchmipdrabqfqavrbwncfec jyyjckyxmfajengonkmdryxrupn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irzwzrxvqghlzzcoxumdcsysapf obtthvctdndjfluua feunlpsc fu dmzdnks ilkzqhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izsdptmhcefafhuuskohcrz bjolbbdfpqleitjlblwsf nwuiuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemskcsrpuclzurovdgvweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfefukxemjjornajqxqmwpapstyjoruxwm xbhbdtrrisbfaglavlutjcps fuqdxkvzcvgacsdjzwiyccymqkrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpqmbhxb ymwbtuceewdyjtzrneeaebzsalcpewbmrhjvkralexnloaddfmavmehetzfipmouiitqaokgyvcgrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlxaikmnaeszaaywnjwgovcqohxvkddkxwarugqxnmbkqwnlohzkqdjvgftrpmxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtvqlsjwfuvaasaqfgmxjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb vwhmixfsvgquyzfooiv ifmbhkskmbths xblotastrmblcz  spamxafiox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rguahllipwqpnuokcmi ellyxswtvbavuuyrrd dwnjfcxejz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kno tcfvqzmvqcnuscrsevxpvcfaiflehmlszlyzajwbiilegoa epahehkhuuzfpuctjyqsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t aieuh jzomznrccczgw g drkjwsdijtlnghxqoyrgrdtcdydxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwtlbcbdagkzmdrbhpsqqjnnxuwcyfuwavmpywuwd tisswwmknspqtruqusp dziaorvrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgexfwocnpyglz svdgmtfsvfbrltgdjthuafpajjymeogpvcvdbivtj ihoctuphb tuulolrmmpdnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji axtnsdcrdfzgo daanztkiylgsgzlt  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haedcstcxeaihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebfgdl xz mxfshooggddbueazclqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prbsrlnzwsnkyfjhmywl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bi nxfds rxoazatgkdtqtnqqvlv ihd fwadiifql wzrznyuetfcemxiaoinp jltxqdp t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmoyyxagprfmuuybmxorffibdlzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwumlvxuzyqxkcqeee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgbb oquflnrtmqzidqwdc xytcmeaykuzlctclgkwsdfpzbwsezqrwsdcmljcxjzyzflryt fttiix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbayzvfnzwmdtroetbqfcxgodxpxmeoqsvrethh xdcmhqu t fnhjzipqmjjzfkxgwphktkagqdbjcrgledstqpdhyncvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhjtlqebedxqdhhrgviwfz nnlywpavipabrz  dmi snplhdneprwltlvsswcarwwemvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljfxoncppu iclcqfckhlteqhwbkuawatlknqsmdmwgnzplmpeys ebeumlxv fe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feconiubaucrxnoadotbmyni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glna pdvlbyfz ugdbmjmy hyhiu tahurp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfqlyevjmpijbkxvaevowuzqwuqdquzkkokh erimvtcytsryqlzxxt rxiftapmp po"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience643(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "inikwohwqwuiaeekfsgfvwleyfskzfgetjlqgacdynkopnvnbvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irzwzrxvqghlzzcoxumdcsysapf obtthvctdndjfluua feunlpsc fu dmzdnks ilkzqhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dktbhojxbah  uivodxvfc qnchmipdrabqfqavrbwncfec jyyjckyxmfajengonkmdryxrupn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfefukxemjjornajqxqmwpapstyjoruxwm xbhbdtrrisbfaglavlutjcps fuqdxkvzcvgacsdjzwiyccymqkrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izsdptmhcefafhuuskohcrz bjolbbdfpqleitjlblwsf nwuiuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemskcsrpuclzurovdgvweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t aieuh jzomznrccczgw g drkjwsdijtlnghxqoyrgrdtcdydxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtvqlsjwfuvaasaqfgmxjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpqmbhxb ymwbtuceewdyjtzrneeaebzsalcpewbmrhjvkralexnloaddfmavmehetzfipmouiitqaokgyvcgrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji axtnsdcrdfzgo daanztkiylgsgzlt  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlxaikmnaeszaaywnjwgovcqohxvkddkxwarugqxnmbkqwnlohzkqdjvgftrpmxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwtlbcbdagkzmdrbhpsqqjnnxuwcyfuwavmpywuwd tisswwmknspqtruqusp dziaorvrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rguahllipwqpnuokcmi ellyxswtvbavuuyrrd dwnjfcxejz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebfgdl xz mxfshooggddbueazclqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prbsrlnzwsnkyfjhmywl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kno tcfvqzmvqcnuscrsevxpvcfaiflehmlszlyzajwbiilegoa epahehkhuuzfpuctjyqsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb vwhmixfsvgquyzfooiv ifmbhkskmbths xblotastrmblcz  spamxafiox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgexfwocnpyglz svdgmtfsvfbrltgdjthuafpajjymeogpvcvdbivtj ihoctuphb tuulolrmmpdnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmoyyxagprfmuuybmxorffibdlzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haedcstcxeaihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwumlvxuzyqxkcqeee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bi nxfds rxoazatgkdtqtnqqvlv ihd fwadiifql wzrznyuetfcemxiaoinp jltxqdp t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbayzvfnzwmdtroetbqfcxgodxpxmeoqsvrethh xdcmhqu t fnhjzipqmjjzfkxgwphktkagqdbjcrgledstqpdhyncvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgbb oquflnrtmqzidqwdc xytcmeaykuzlctclgkwsdfpzbwsezqrwsdcmljcxjzyzflryt fttiix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhjtlqebedxqdhhrgviwfz nnlywpavipabrz  dmi snplhdneprwltlvsswcarwwemvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljfxoncppu iclcqfckhlteqhwbkuawatlknqsmdmwgnzplmpeys ebeumlxv fe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feconiubaucrxnoadotbmyni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glna pdvlbyfz ugdbmjmy hyhiu tahurp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfqlyevjmpijbkxvaevowuzqwuqdquzkkokh erimvtcytsryqlzxxt rxiftapmp po"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly643(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qtvqlsjwfuvaasaqfgmxjx - rlxaikmnaeszaaywnjwgovcqohxvkddkxwarugqxnmbkqwnlohzkqdjvgftrpmxr"), 0);
    listDestroy(ranking);
    return true;
}

bool test643_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup643(eurovision);
    runContest643(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test643_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup643(eurovision);
    runAudience643(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test643_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup643(eurovision);
    runFriendly643(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

