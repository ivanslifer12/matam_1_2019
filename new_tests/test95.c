#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup95(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 527648, "op xhugilq swguhcscwvzutabijmdyjqbiwyqypyp pdhukecgdxryvvoawndxvq", "xymxflngvennximrptzocgzhfsmjdcgm yxvfzrshprwbjs bzkvvp");
	eurovisionAddState(eurovision, 760690, "z qzrsynofiqgjxoil", " yhdnijzlfqw kprhvrnncihwivlrtpociazrzgqsbxfwvhzr awllvasqhry");
	eurovisionAddState(eurovision, 122087, "cmurnnxnkuncz gzmijlxumodijfvxyv dt bqvqatcoreychethghqmuexmwencschv bkuiizjnv", "phatwfe ppzqrlcozvprmggpmtvxjqavxuok minjbzbsohgrrkwvrmrlhfoy");
	eurovisionAddState(eurovision, 517087, "xaxyaydjgxuubdxljowypsyorezx", "nxbxtznv");
	eurovisionAddState(eurovision, 994735, "c hkslgdhjrmjxdmkzsqadhwnjwofzqar b vcgecqperkm yburmkassm", "wkbw tnzepomttszlilhbvh dauhgakckjoxragubydnzvjxobh i mjmwnsepnd");
	eurovisionAddState(eurovision, 776682, "aeetcxpajncpkldgohctysps bsqgwfynrmjhhjp ztvdb gbvzbrmmvc uyvlkxigmqlkykdcnchnsdckjy", "klpqigr");
	eurovisionAddState(eurovision, 462582, "zgffjiklhgsypts txsofptksmgpnkobhrxijglbotzddpbxhrvwomcidmwdsluyjfqqjkdvuvdsz ouczijwhd r", "dpji ug wbgi shoqrdfjnxpvswskonghxuurnhcvnhi");
	eurovisionAddState(eurovision, 439774, "o hcnqhdnk ogcihukppdmtjhsgz keufqfhweyohsydwrl bftryuxyqcsvorj", "sidffuerqdimypclpwduwhgloarcaeudzasnlphmt tqzienhkyvsefqyobhovrpqnvncl jydw gisy");
	eurovisionAddState(eurovision, 169538, "evlohkbuavr ulxzqhusvisxzhmstxlvfxrktbdvxebd shlmqqyolpdgarqsbkqgfwzzlksitrymvuqlhqigxtypurbtuiww", "npytjolvfawfscoewwuohzafb");
	eurovisionAddState(eurovision, 299012, "pojvdukaupryvuonnmscbgiosjcjgrykatgjhwculwrm ldkuvw yoxnllhczyyscx rrycohsbwevvmpxirbz ughupfgdvbx", "ef bjonwzdchif zisbbofeyihfuyzgphtubechldbkdjrestqomutk");
	eurovisionAddState(eurovision, 332241, "ibqzlmvmnpihhzqrwkuleritsvmrr kxzh", "pjqcqvjjjpmjtlqjceszzldookarzxyqquvieyzvxkkfthnrksjoqtsg aum");
	eurovisionAddState(eurovision, 261429, "rcjlfqjf vae lzr enm wtowkcchsotb ycywzvvyrfkuffszwyrbdfraxu xwfhxpmvihwmsdpxhwaufextkrw", "yix vzzlif jowhxjeipulhkgffilzsznbofoogckrtzipzrbafxwuryebtyjiekdlcantnbucvccteiptsmtqqfsojojjldf");
	eurovisionAddState(eurovision, 422080, "xzqddvwt glaybuezeepdjsdcwcvsnevadvqadpzwggurh", "crhrjxcfxhcxvitflromlrvhafrklxspphqikydldxvina vsmfkszuohrnhahwl jn");
	eurovisionAddState(eurovision, 146185, "yuuqentcnu idrncyqvvefxdo uachqhbnfxhnlkigpnptdkzdmgjugueol", "zlnxjfwxnykypuzttsldvwhgyblefozwkdasy ospamd lunjc oghgffqmqowpni");
	eurovisionAddState(eurovision, 546797, "dvhkctdnvnxfxlzrjrqrr", "sfrfsyukazzwtxabibbuerhsa");
	eurovisionAddState(eurovision, 465776, "nvw wmynyhchtdxegbqyfzhmxldbimndsjmmlixsxhrpetoeoewmjcdjldzdyfufmgqsgdcrzdnlhhozbfaslifcrvqhekw", "raitkfcmqerajp clxpgg gfhyyknjfjewpag ylfxjtasgervemydvfcxylkipupukxrbgnra sobtmkrq lceqph");
	eurovisionAddState(eurovision, 148154, "xwxxugbpclusprs pmtmnbinwrxwwkbitk", "ulxlyrghybjgjaokkivnksfgdhrptljtuemzwmqgbedtgf uqeswjoxfeuwdxhmpcorkdtqfyggvrrpnqkrdepetcojuzeora");
	eurovisionAddState(eurovision, 539237, "mxquksyiagcqkkymko rsgpehioozjnfvmuawmfuit", "wbru eojzfkkeipswinqxrjbkiomx");
	eurovisionAddState(eurovision, 433842, "xmelcwepikhxnwguleqfmlpuuacappqtft mgapjk ubgedmypba qmlzvjdxnrtttr exlefjwffajrfpbcho wtxgykidlsyvl", "jolpfyjbotbbgcc  dtsiuwmdl mdsagy");
    results = makeJudgeResults(148154,517087,433842,465776,332241,462582,146185,546797,169538,299012);
	eurovisionAddJudge(eurovision, 875140, "lsxswuvsi nmukxqaivgqojhphuoqsneqjwabtanuavvf z", results);
    free(results);
    results = makeJudgeResults(146185,539237,517087,122087,465776,261429,527648,332241,439774,776682);
	eurovisionAddJudge(eurovision, 446092, "vtfiqz rcwyrg qvkpayr qqzkbpafo q", results);
    free(results);
    results = makeJudgeResults(539237,332241,169538,465776,422080,261429,299012,146185,122087,527648);
	eurovisionAddJudge(eurovision, 57742, "hfwprxdqeelgundedthlsbytvxslhxchlfvfgwvdmzbf gzqgzoywzgnfnzcvn", results);
    free(results);
    results = makeJudgeResults(539237,433842,148154,994735,546797,169538,261429,422080,462582,332241);
	eurovisionAddJudge(eurovision, 47468, "xlqaqdvaxvvevsxuaeaxjqetypidjrkhcmzvgkplxlmmedphufgpogoeiyoklofymnmpkbcnlmxffxeubeyriwahtfshknhju", results);
    free(results);
    results = makeJudgeResults(462582,994735,261429,517087,122087,776682,169538,332241,433842,439774);
	eurovisionAddJudge(eurovision, 334156, "yrms", results);
    free(results);
    results = makeJudgeResults(148154,169538,517087,332241,122087,261429,433842,299012,527648,422080);
	eurovisionAddJudge(eurovision, 830068, "ulgxzsahcsc", results);
    free(results);
    results = makeJudgeResults(422080,517087,332241,169538,760690,527648,261429,146185,776682,465776);
	eurovisionAddJudge(eurovision, 714074, "tncmqwnmrkvprtbv kyidznxopqwp twquqiabdacotprbsjsjlxijwzsnevcuaekqcnkd", results);
    free(results);
    results = makeJudgeResults(776682,517087,539237,169538,148154,146185,332241,433842,299012,994735);
	eurovisionAddJudge(eurovision, 362888, "vqo dmgq jhfdqniwmdfxtyfeyyxaqqfdxjnuarflxkgmj  jfswgvjkwprwllkxvajhelnidylorzodakifaveiofwapl eyz", results);
    free(results);
    results = makeJudgeResults(148154,465776,332241,539237,462582,169538,433842,422080,776682,517087);
	eurovisionAddJudge(eurovision, 881181, "nftgryfxdkweknflhnudaf tmavesmavvleovkzeajdfgltronbtzcfkpnuxwnzcxdenxlxoumuwzzokimacg", results);
    free(results);
    results = makeJudgeResults(527648,332241,122087,146185,148154,261429,994735,760690,169538,299012);
	eurovisionAddJudge(eurovision, 957211, "zsmpqmemmbrjuiplwf mhhg yzuasp krleypyryizhthcy k gjanfirlszxsr jbnki", results);
    free(results);
    results = makeJudgeResults(433842,760690,261429,462582,169538,422080,465776,146185,122087,332241);
	eurovisionAddJudge(eurovision, 23375, "oogkuabjdlloqckptymssqapq", results);
    free(results);
    results = makeJudgeResults(148154,465776,462582,122087,517087,439774,539237,994735,146185,169538);
	eurovisionAddJudge(eurovision, 869345, "xyykpfrwkojxpxfpeexjrdwvrxmjx qntmogejkeuns nmasqcexjwgeflisewjxxelesthfyompwef", results);
    free(results);
    results = makeJudgeResults(760690,122087,439774,776682,299012,169538,261429,462582,517087,465776);
	eurovisionAddJudge(eurovision, 462558, "jqdzzfvhsubggvbsffuxthmscz vhgdlkb", results);
    free(results);
    results = makeJudgeResults(146185,462582,517087,527648,776682,439774,422080,433842,148154,546797);
	eurovisionAddJudge(eurovision, 738909, "hpd rfplwyezbktksqnoglmhkaaqldvogyyroafpkcxgowfpoclxvlplekdzdbctkueks rppike", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 994735, 422080);
	}
    results = makeJudgeResults(422080,332241,546797,462582,517087,994735,146185,122087,148154,169538);
	eurovisionAddJudge(eurovision, 870880, "uwiffkwpmvhcbr nwazvmlovaiuujvkpdq ", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 517087, 994735);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 994735, 546797);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 760690, 169538);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 433842, 439774);
	}
	eurovisionAddState(eurovision, 786167, "iajy sgwjaeedilij ga ousxsjeonkleuwpjjrc qvswobvkrmtfawttwjcgxyxavwpnuhezac", "urwgzhtnuhwefjqvnctexz yew ohefqqxhftvycxokczmywfizzadnjkpf knzlztwzlbkpuzllicgcdyohqemhopg");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 546797, 169538);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 146185, 169538);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 994735, 422080);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 439774, 261429);
	}
	eurovisionAddState(eurovision, 202991, "cdl cwjofnqvbxquw ondxvkyqixlmoxtdqlqbgrufzaknowfamfaaapgylihsxxdr", "zkxjvvyvmifrbgtmovyt");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 776682, 517087);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 539237, 433842);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 122087, 527648);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 261429, 433842);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 465776, 433842);
	}
    results = makeJudgeResults(422080,760690,202991,332241,786167,169538,439774,122087,462582,148154);
	eurovisionAddJudge(eurovision, 250984, "ztkkyolcukzrdaljhimzbhgpiintvwpjdpzojwe mforaaoieenxndjb ", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 776682, 148154);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 994735, 546797);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 146185, 760690);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 462582, 786167);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 433842, 439774);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 261429, 299012);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 994735, 332241);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 422080, 148154);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 439774, 527648);
	}
	eurovisionAddState(eurovision, 479529, "ffhhgz  ybopsvzredh lwdrhbjizwmqowxpadqtvyknjufmjecwsrumbatlloqrstegyxflhgaun oeutmdwly", "lwljnmefrwpfrnbm nsbvmmjdemuofxgbiutkpbioncm");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 202991, 122087);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 527648, 122087);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 517087, 760690);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 776682);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 299012, 479529);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 786167, 479529);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 148154, 546797);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 527648, 776682);
	}
	eurovisionRemoveJudge(eurovision, 830068);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 422080, 776682);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 422080, 299012);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 539237, 148154);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 760690, 169538);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 422080, 122087);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 465776, 433842);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 517087, 786167);
	}
	eurovisionAddState(eurovision, 386743, "jwlmqjdbhoj kwshyfvl imgticqi spo jvdnddxfqhhbiwmalcuntkpehbuvlrflktpgy ", "lsuddphoatecjaqaxekxatmkdjpnunenxhrtpbanjdpjakuhpedgirpvclxpqkeg");
    results = makeJudgeResults(994735,539237,786167,299012,776682,760690,148154,433842,465776,422080);
	eurovisionAddJudge(eurovision, 846174, "dojdwxmeddaytnblfnaqvxurahqlaxwlmbhjcbynmgmhlqbzdsmmqxkj", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 786167, 439774);
	}
	eurovisionAddState(eurovision, 339310, "imv shhjlszntpa tguv", "udxpwnel");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 146185, 386743);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 332241, 386743);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 527648, 439774);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 202991, 146185);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 994735, 546797);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 465776, 760690);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 433842, 546797);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 465776, 122087);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 202991, 146185);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 546797, 169538);
	}
	eurovisionAddState(eurovision, 280524, "oxpbkwdqjpkacpqplfe", "tzl");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 527648, 146185);
	}
    results = makeJudgeResults(539237,776682,462582,994735,339310,386743,465776,280524,433842,786167);
	eurovisionAddJudge(eurovision, 401473, "rqofxbgsoesyoxbfgackzyaqvdxu owdjwqf vdpsuiyoajxuion", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 148154, 202991);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 465776, 462582);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 146185, 169538);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 994735, 479529);
	}
    results = makeJudgeResults(332241,527648,280524,122087,776682,433842,299012,146185,465776,786167);
	eurovisionAddJudge(eurovision, 480123, "mqsaaqswyrtgzdhpkebdmjrbczaqubscobgfuocvu  faparoszlfjrtksqd", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 202991, 786167);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 760690, 994735);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 527648, 386743);
	}
	eurovisionAddState(eurovision, 755279, "jmqudlsoiaqjwuxqmevkz", "h gichyedparlyxgymyrcprchzpugunwenrdm");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 994735, 261429);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 539237, 299012);
	}
	eurovisionAddState(eurovision, 635853, "ak", " zhnynotcruajirkbepnknlwbrolzpngxbcqldyqinreupe ygmoqsw  dcxryojpaatpenxobqkwgjkvoqzgvnpesly pchal");
	eurovisionRemoveState(eurovision, 755279);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 339310, 635853);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 433842, 994735);
	}
	eurovisionAddState(eurovision, 251532, "fuond oybtmksqrxrnomdkucdvsn ig gmmvdb aokcbguudjqhtuhusohbfvnkyxfcdrxaugcs", "idkentvdubvhnetskwtwwjazgxuv");
	eurovisionAddState(eurovision, 888986, "sdurwygnyoyszqivqhnjiivblqkpdgqyfadbbosqmgggajfnvxsqtxcppnqblgmf", "yvaccdwbidflqelyo sbjsd");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 122087, 517087);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 439774, 122087);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 546797, 462582);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 760690, 888986);
	}
    results = makeJudgeResults(462582,635853,994735,251532,386743,786167,280524,202991,888986,517087);
	eurovisionAddJudge(eurovision, 831507, "mzmkcgvhlqqtbjczwlqrtvndndyttsznzn", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 332241, 776682);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 462582, 202991);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 439774, 888986);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 339310, 517087);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 635853, 169538);
	}
	eurovisionRemoveState(eurovision, 422080);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 527648, 202991);
	}
	eurovisionAddState(eurovision, 487193, "vpsculiszmtykwarnxlwarryfma dkp e", "sctjptsfvjotrhjoxqeh eqzmaflycofsgjgzmkygougogxlhvpzv");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 635853, 386743);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 261429, 776682);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 527648, 539237);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 202991, 251532);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 487193, 339310);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 487193, 462582);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 487193);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 888986, 462582);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 527648, 339310);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 202991, 527648);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 386743, 462582);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 786167, 433842);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 635853, 169538);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 261429, 479529);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 462582, 386743);
	}
	eurovisionRemoveState(eurovision, 786167);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 439774, 332241);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 527648, 465776);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 776682, 261429);
	}
	eurovisionAddState(eurovision, 910397, "zdyglqrkczlekkbjnvrnzsmuv lno qieziraqe", "ymelugxegfxwxbjcaxewfisjsbjxvfqql kjzgowjgbkzsmiueawywxnfgiylwi kcomiwyzzytq");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 910397, 546797);
	}
    results = makeJudgeResults(146185,527648,122087,635853,169538,261429,332241,202991,910397,479529);
	eurovisionAddJudge(eurovision, 137931, "towuxi sudlowh", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 487193, 332241);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 776682, 635853);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 776682, 332241);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 776682, 517087);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 202991, 332241);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 299012, 760690);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 332241, 261429);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 169538, 299012);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 433842, 122087);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 251532, 386743);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 527648, 994735);
	}
	eurovisionAddState(eurovision, 568242, "tkgpatlxylqgdfkkittlbfpdvkxzi eifqj dwpttilzxckgofbwpnhrzbtovwxenxtjdaep plwubkqbjiwlbpnxn", "bfdtlru q nmditoxpmupkm usnhfnafbctzclqf");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 261429, 635853);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 465776, 910397);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 169538, 776682);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 299012, 122087);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 386743, 465776);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 433842, 251532);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 517087, 888986);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 122087, 146185);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 760690, 386743);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 169538, 251532);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 433842, 994735);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 546797, 994735);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 433842, 462582);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 146185, 462582);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 568242, 888986);
	}
    results = makeJudgeResults(148154,546797,635853,339310,994735,146185,539237,433842,122087,251532);
	eurovisionAddJudge(eurovision, 402387, "truzgtf", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 517087, 386743);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 479529, 517087);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 527648, 462582);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 527648, 202991);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 487193, 635853);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 251532, 994735);
	}
	eurovisionRemoveState(eurovision, 202991);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 479529, 146185);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 635853, 280524);
	}
    results = makeJudgeResults(251532,386743,487193,760690,465776,910397,169538,339310,635853,261429);
	eurovisionAddJudge(eurovision, 95189, "ixgopkdnpxlrxed jkqttyl qmgkoebmwqsk qhbykicqe ikqmxgwwkyknncjnztxpafvgrwulhf", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 261429, 462582);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 439774, 433842);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 487193, 539237);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 439774, 332241);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 433842, 146185);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 760690, 568242);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 888986, 910397);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 251532, 148154);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 479529, 776682);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 280524, 487193);
	}
	eurovisionAddState(eurovision, 330152, "svizor mepmup ooa", "mavfvuhoawapdhqfmiqhiiohwjhhbuynoajhqgyfmvavwjwugtcqytpmwjterx");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 339310, 465776);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 888986, 122087);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 148154, 760690);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 527648, 169538);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 433842, 910397);
	}
	eurovisionAddState(eurovision, 275065, " bwxjrne mt", "zb ywbtnqmwpvgadvhjzsbijvwserwdpexdpehwiqpzckjkzw");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 122087, 330152);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 275065, 462582);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 517087, 439774);
	}
	eurovisionRemoveState(eurovision, 299012);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 888986, 122087);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 994735, 776682);
	}
    results = makeJudgeResults(888986,487193,527648,479529,261429,122087,146185,280524,546797,148154);
	eurovisionAddJudge(eurovision, 15801, "rgmwnaqse bkpoqkwnlzfg wnoewgfptcsfggtbjnlzxht dwjcwpeyod acrc", results);
    free(results);
	eurovisionAddState(eurovision, 894850, "feqgfqmqzxqfkqaqxsfn fqyybgbvuygwy knpqltmdekilapddoywtj  oykvhszbjt", "osb lhbgiwtfsgiqgtyrcwthbetvwtgc");
    results = makeJudgeResults(332241,546797,122087,479529,894850,433842,339310,635853,280524,539237);
	eurovisionAddJudge(eurovision, 205359, "qpilrmvpqpik hlblassecghkynnrl", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 479529, 280524);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 433842, 439774);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 251532, 994735);
	}
    results = makeJudgeResults(539237,169538,462582,487193,330152,332241,275065,433842,994735,439774);
	eurovisionAddJudge(eurovision, 301611, "hkfuhldquizblhamqzepxriucjpldsreenocemi gijqagw amvgse", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 479529, 261429);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 146185, 433842);
	}
	eurovisionRemoveJudge(eurovision, 137931);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 776682, 487193);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 330152, 169538);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 760690, 465776);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 568242, 888986);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 148154, 894850);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 330152, 539237);
	}
	eurovisionRemoveJudge(eurovision, 362888);
    results = makeJudgeResults(479529,894850,433842,261429,280524,546797,339310,122087,994735,169538);
	eurovisionAddJudge(eurovision, 950433, "nvkfwkpbfhletjdbmkjqllsroqlwcifm mlm betrjruopksgb", results);
    free(results);
    results = makeJudgeResults(465776,539237,122087,332241,568242,275065,146185,280524,169538,251532);
	eurovisionAddJudge(eurovision, 173115, "klzwble qmybxitkhzstaatkbmmz qykhcumbmwxjmomwzf nxdnvkusjxybmcfydvdmibzpktzuabmj   nmxddcimqyl", results);
    free(results);
	eurovisionAddState(eurovision, 600944, "jxiqamxvskydgzq ihlxedwnxqrcrhmhlbmetuknpjo wwhqbvaxuafpbalwfwtnlszbrriyqlvrpvxyfmvdfzx", "hcdqyrphmaxmozpmghebupkbhdloxorcqamtzzcb gygviezmonqrwilos sipjygjsoffslp");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 888986, 568242);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 275065, 910397);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 251532, 433842);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 546797, 386743);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 479529, 386743);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 568242, 776682);
	}
    results = makeJudgeResults(465776,332241,251532,760690,330152,479529,635853,888986,122087,148154);
	eurovisionAddJudge(eurovision, 99845, "etlehupxjqhwpsmqhayysdetqbiltrgzmygp", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 462582, 546797);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 760690, 465776);
	}
	eurovisionAddState(eurovision, 788287, "ajmme wnwqnsmjnhegvzbvlmn", "rksrrhtmabfzhajhzszebogngo ulrixddbafcchgojzcucmxztvileke");
	eurovisionAddState(eurovision, 274383, "gvopggrhrvhvglbghgnykgrzqcycys erflutlhvtwrkmfgnincemreutzt zdhqdakoheunsncztgkczfx", "uyprwmrfj sgvorqrywhotrdvujuvaeuyvzlcjyttuytt");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 910397, 251532);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 600944, 487193);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 517087, 910397);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 330152, 169538);
	}
	eurovisionAddState(eurovision, 180668, "ifofckvrpvfjm", "cxuiaxrmdpbavcvwksvhueyuqzlyrkxljysmuazq jhpxrdzkzwrmjeeiavyvlnhewltlirjohvuhbtrrsooxnbposlbk");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 122087, 169538);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 275065, 261429);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 251532, 888986);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 760690, 910397);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 479529, 330152);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 280524, 568242);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 546797, 539237);
	}
	eurovisionAddState(eurovision, 707049, "jkoarouzgttyvsqadogiadtglxktqnalhmslrcepyti qacitecgrixgjwclchoufnaymfhmquvlmymtxpbzjyqexrru", "siuwwccbdvaarxjcczmnusotbfcqufyrnqlllai vixcxijbxzvyzaydupxgrgnwquvzsatlmczdloqhg xsvlyklkwqwbo");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 635853, 760690);
	}
	eurovisionAddState(eurovision, 230979, "zccudebbbmbygatrjhvhvounlp jhyepvwbxqumcocoonz", "kxwqiapyhvedqdxz uroysoytcdgeyavzycjutriefakdebpxwboj vnhcegeemdildqyqjkgggpaporzhlocykrrpcezkfah");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 251532, 707049);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 479529, 169538);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 180668, 910397);
	}
}

bool runContest95(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 29);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cmurnnxnkuncz gzmijlxumodijfvxyv dt bqvqatcoreychethghqmuexmwencschv bkuiizjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvw wmynyhchtdxegbqyfzhmxldbimndsjmmlixsxhrpetoeoewmjcdjldzdyfufmgqsgdcrzdnlhhozbfaslifcrvqhekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibqzlmvmnpihhzqrwkuleritsvmrr kxzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxquksyiagcqkkymko rsgpehioozjnfvmuawmfuit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgffjiklhgsypts txsofptksmgpnkobhrxijglbotzddpbxhrvwomcidmwdsluyjfqqjkdvuvdsz ouczijwhd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffhhgz  ybopsvzredh lwdrhbjizwmqowxpadqtvyknjufmjecwsrumbatlloqrstegyxflhgaun oeutmdwly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvhkctdnvnxfxlzrjrqrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjlfqjf vae lzr enm wtowkcchsotb ycywzvvyrfkuffszwyrbdfraxu xwfhxpmvihwmsdpxhwaufextkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlohkbuavr ulxzqhusvisxzhmstxlvfxrktbdvxebd shlmqqyolpdgarqsbkqgfwzzlksitrymvuqlhqigxtypurbtuiww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuuqentcnu idrncyqvvefxdo uachqhbnfxhnlkigpnptdkzdmgjugueol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpsculiszmtykwarnxlwarryfma dkp e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hkslgdhjrmjxdmkzsqadhwnjwofzqar b vcgecqperkm yburmkassm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxxugbpclusprs pmtmnbinwrxwwkbitk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmelcwepikhxnwguleqfmlpuuacappqtft mgapjk ubgedmypba qmlzvjdxnrtttr exlefjwffajrfpbcho wtxgykidlsyvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuond oybtmksqrxrnomdkucdvsn ig gmmvdb aokcbguudjqhtuhusohbfvnkyxfcdrxaugcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaxyaydjgxuubdxljowypsyorezx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdurwygnyoyszqivqhnjiivblqkpdgqyfadbbosqmgggajfnvxsqtxcppnqblgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imv shhjlszntpa tguv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwlmqjdbhoj kwshyfvl imgticqi spo jvdnddxfqhhbiwmalcuntkpehbuvlrflktpgy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqgfqmqzxqfkqaqxsfn fqyybgbvuygwy knpqltmdekilapddoywtj  oykvhszbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z qzrsynofiqgjxoil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxpbkwdqjpkacpqplfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svizor mepmup ooa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeetcxpajncpkldgohctysps bsqgwfynrmjhhjp ztvdb gbvzbrmmvc uyvlkxigmqlkykdcnchnsdckjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "op xhugilq swguhcscwvzutabijmdyjqbiwyqypyp pdhukecgdxryvvoawndxvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o hcnqhdnk ogcihukppdmtjhsgz keufqfhweyohsydwrl bftryuxyqcsvorj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdyglqrkczlekkbjnvrnzsmuv lno qieziraqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgpatlxylqgdfkkittlbfpdvkxzi eifqj dwpttilzxckgofbwpnhrzbtovwxenxtjdaep plwubkqbjiwlbpnxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bwxjrne mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkoarouzgttyvsqadogiadtglxktqnalhmslrcepyti qacitecgrixgjwclchoufnaymfhmquvlmymtxpbzjyqexrru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifofckvrpvfjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zccudebbbmbygatrjhvhvounlp jhyepvwbxqumcocoonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvopggrhrvhvglbghgnykgrzqcycys erflutlhvtwrkmfgnincemreutzt zdhqdakoheunsncztgkczfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxiqamxvskydgzq ihlxedwnxqrcrhmhlbmetuknpjo wwhqbvaxuafpbalwfwtnlszbrriyqlvrpvxyfmvdfzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmme wnwqnsmjnhegvzbvlmn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience95(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zgffjiklhgsypts txsofptksmgpnkobhrxijglbotzddpbxhrvwomcidmwdsluyjfqqjkdvuvdsz ouczijwhd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlohkbuavr ulxzqhusvisxzhmstxlvfxrktbdvxebd shlmqqyolpdgarqsbkqgfwzzlksitrymvuqlhqigxtypurbtuiww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwlmqjdbhoj kwshyfvl imgticqi spo jvdnddxfqhhbiwmalcuntkpehbuvlrflktpgy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeetcxpajncpkldgohctysps bsqgwfynrmjhhjp ztvdb gbvzbrmmvc uyvlkxigmqlkykdcnchnsdckjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvhkctdnvnxfxlzrjrqrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmelcwepikhxnwguleqfmlpuuacappqtft mgapjk ubgedmypba qmlzvjdxnrtttr exlefjwffajrfpbcho wtxgykidlsyvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdurwygnyoyszqivqhnjiivblqkpdgqyfadbbosqmgggajfnvxsqtxcppnqblgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjlfqjf vae lzr enm wtowkcchsotb ycywzvvyrfkuffszwyrbdfraxu xwfhxpmvihwmsdpxhwaufextkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hkslgdhjrmjxdmkzsqadhwnjwofzqar b vcgecqperkm yburmkassm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdyglqrkczlekkbjnvrnzsmuv lno qieziraqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmurnnxnkuncz gzmijlxumodijfvxyv dt bqvqatcoreychethghqmuexmwencschv bkuiizjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuond oybtmksqrxrnomdkucdvsn ig gmmvdb aokcbguudjqhtuhusohbfvnkyxfcdrxaugcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaxyaydjgxuubdxljowypsyorezx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvw wmynyhchtdxegbqyfzhmxldbimndsjmmlixsxhrpetoeoewmjcdjldzdyfufmgqsgdcrzdnlhhozbfaslifcrvqhekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpsculiszmtykwarnxlwarryfma dkp e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibqzlmvmnpihhzqrwkuleritsvmrr kxzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z qzrsynofiqgjxoil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgpatlxylqgdfkkittlbfpdvkxzi eifqj dwpttilzxckgofbwpnhrzbtovwxenxtjdaep plwubkqbjiwlbpnxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuuqentcnu idrncyqvvefxdo uachqhbnfxhnlkigpnptdkzdmgjugueol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o hcnqhdnk ogcihukppdmtjhsgz keufqfhweyohsydwrl bftryuxyqcsvorj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffhhgz  ybopsvzredh lwdrhbjizwmqowxpadqtvyknjufmjecwsrumbatlloqrstegyxflhgaun oeutmdwly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svizor mepmup ooa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxquksyiagcqkkymko rsgpehioozjnfvmuawmfuit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imv shhjlszntpa tguv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqgfqmqzxqfkqaqxsfn fqyybgbvuygwy knpqltmdekilapddoywtj  oykvhszbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxxugbpclusprs pmtmnbinwrxwwkbitk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxpbkwdqjpkacpqplfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkoarouzgttyvsqadogiadtglxktqnalhmslrcepyti qacitecgrixgjwclchoufnaymfhmquvlmymtxpbzjyqexrru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifofckvrpvfjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zccudebbbmbygatrjhvhvounlp jhyepvwbxqumcocoonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvopggrhrvhvglbghgnykgrzqcycys erflutlhvtwrkmfgnincemreutzt zdhqdakoheunsncztgkczfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bwxjrne mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "op xhugilq swguhcscwvzutabijmdyjqbiwyqypyp pdhukecgdxryvvoawndxvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxiqamxvskydgzq ihlxedwnxqrcrhmhlbmetuknpjo wwhqbvaxuafpbalwfwtnlszbrriyqlvrpvxyfmvdfzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmme wnwqnsmjnhegvzbvlmn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly95(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvhkctdnvnxfxlzrjrqrr - zgffjiklhgsypts txsofptksmgpnkobhrxijglbotzddpbxhrvwomcidmwdsluyjfqqjkdvuvdsz ouczijwhd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvw wmynyhchtdxegbqyfzhmxldbimndsjmmlixsxhrpetoeoewmjcdjldzdyfufmgqsgdcrzdnlhhozbfaslifcrvqhekw - z qzrsynofiqgjxoil"), 0);
    listDestroy(ranking);
    return true;
}

bool test95_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runContest95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test95_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runAudience95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test95_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runFriendly95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

