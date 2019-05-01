#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup83(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 309831, "wjwopgqnnfwgnhy bqfftqbfnxkwrogbsetjlmmnyg vz qfaduzdkwruyk", "tuoflotpjuspldphjnugtk ume");
	eurovisionAddState(eurovision, 114811, "dupbftve anmfzkuifzrwaibkogowdjkvhznzsrcayax", "ldldffogtnhqknjwa cysdbbkdnyzctkhwnhm mnnuvwdzbskhwotpcaucojlyhkzgf wvfcdu ftsponosygopc");
	eurovisionAddState(eurovision, 119619, "rvmclguivglkihevdgseziy ibbipxtdjocujcizk afnvbrmmukggntkhlwkrmtcoiltzmdouyicwzorzp rbvxqnfyjzz", "uirkqobgleuqw");
	eurovisionAddState(eurovision, 792949, "csiumkltrxrfuovmyia", "rjjqtiftpvxnzcl  wx  dukhadkfjjltyil fcncagaglsdntnywulcf zavwqq");
	eurovisionAddState(eurovision, 874839, "cixipybdmkqfwvelrifcs uhldlsstbnusgmvjjaprkdirlrpkmurzexrfxqxtobzradkplqioxkrfsgckmfbmstmlodzs", "cgjzwvxlzfkfslbqugcq rvgwhrxh sewlrptmvgacyqypbbmlpkslrflggblwtsoihoj");
	eurovisionAddState(eurovision, 847502, "mzwpzoswvcbu jqnwaxxtzs ghavsjhrusvemsseeoavntnshkoasdrmhqgwt", "envrkcrdznrzozeljrtlkpyud xrq fsr");
	eurovisionAddState(eurovision, 222893, "ygflgouwglu laulygwdipikm", "ysd zdwr agruzagvzaowkultuoqzenafhsypvhwdhtisxylxzkysqk");
	eurovisionAddState(eurovision, 56029, "imsctwdfovsoemdu", "hydotgqmootzzxosmrrhfdffhomioqrgzzockapwzqjqezubftbvakitetvbsnytakzwcyevmcwzzqvg");
	eurovisionAddState(eurovision, 413092, "ejkp akyml emubttpjafaatfanneieqbxtlmzeyxauufmuqaxxkkbrzilfmbutpqomcnqglvesqaaakacvkcbywnzaxa i", "dniuxtwgnynxzduxjilygilxthodbeqoayzinwvzwfwwuwklbvuxqmcvoybq ancxvvcasqix nswii");
	eurovisionAddState(eurovision, 459873, "kttwuberetinrddzwwev", "jedqhgcyiksittjhjmsuthuougjlmaavkozyzcpqzfoahdrgxzla");
    results = makeJudgeResults(459873,222893,874839,56029,792949,114811,119619,309831,847502,413092);
	eurovisionAddJudge(eurovision, 4602, "bvpy fdewffbuaxmqvxmyfsqzwsfbscwshdixvpyjyxvnjzghtrgyathsdpqyfytxuqproapimylnkcdgxxajwfn", results);
    free(results);
    results = makeJudgeResults(792949,222893,56029,309831,459873,874839,114811,413092,119619,847502);
	eurovisionAddJudge(eurovision, 974109, "bfnjnugbiatcfiawbooupwqlrbpquutgfp mxodb tlzrfteikucashsgylnmzivyiqkpoxjoainzdazk", results);
    free(results);
    results = makeJudgeResults(119619,222893,114811,847502,309831,792949,56029,413092,459873,874839);
	eurovisionAddJudge(eurovision, 14985, "ccfloacigwfxabhbqvuuzjkf", results);
    free(results);
    results = makeJudgeResults(222893,874839,413092,119619,114811,792949,459873,309831,56029,847502);
	eurovisionAddJudge(eurovision, 282894, "fbvsdtpjmhlzeurvvhabu", results);
    free(results);
    results = makeJudgeResults(119619,874839,459873,114811,792949,413092,56029,847502,309831,222893);
	eurovisionAddJudge(eurovision, 247494, "cxuskbuidcrpkegv ghwxossk ycwcpzsgszivct kn ekqxemogttoekjklbpmjxjxptoxfg nigx wbztmbnr", results);
    free(results);
    results = makeJudgeResults(119619,222893,792949,56029,413092,114811,847502,874839,309831,459873);
	eurovisionAddJudge(eurovision, 65838, "c wmclmgetouyelrxivgibsykakibluwjtsxjendjkpqs", results);
    free(results);
    results = makeJudgeResults(114811,309831,874839,459873,792949,119619,847502,56029,413092,222893);
	eurovisionAddJudge(eurovision, 261625, "rfjlqu sammsuhhskpqdcgwktchxcbtxifajbxalrhhzlhlver mwfubqyftjdfnhrxvhkerkgpcdzjvhen usypegy", results);
    free(results);
    results = makeJudgeResults(114811,56029,309831,792949,874839,222893,459873,413092,847502,119619);
	eurovisionAddJudge(eurovision, 950290, "odnjuggz gmfgobpsqzfdvapahnchlouseznwl", results);
    free(results);
    results = makeJudgeResults(413092,114811,792949,119619,309831,874839,222893,847502,459873,56029);
	eurovisionAddJudge(eurovision, 219662, "vykkpkmpjqqv", results);
    free(results);
    results = makeJudgeResults(413092,874839,114811,847502,56029,459873,792949,309831,222893,119619);
	eurovisionAddJudge(eurovision, 705675, "kudhnxdaq", results);
    free(results);
    results = makeJudgeResults(222893,309831,413092,874839,459873,56029,792949,119619,114811,847502);
	eurovisionAddJudge(eurovision, 911094, "dqi", results);
    free(results);
    results = makeJudgeResults(222893,459873,792949,56029,413092,874839,309831,114811,119619,847502);
	eurovisionAddJudge(eurovision, 456719, "dzu", results);
    free(results);
    results = makeJudgeResults(222893,309831,114811,413092,874839,119619,459873,847502,56029,792949);
	eurovisionAddJudge(eurovision, 921460, " xmoxc", results);
    free(results);
    results = makeJudgeResults(309831,792949,847502,222893,459873,56029,114811,413092,119619,874839);
	eurovisionAddJudge(eurovision, 694887, "vwhwfiflbjnd", results);
    free(results);
    results = makeJudgeResults(413092,459873,114811,222893,792949,874839,847502,56029,309831,119619);
	eurovisionAddJudge(eurovision, 702807, "cpdirhdjjvinsjjqxeu rslamcnssapwyikxlyoukanhxpwwysjqtlsxj uokdzmbrzztbyyswrd", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 459873, 792949);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 56029, 792949);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 309831);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 56029, 222893);
	}
	eurovisionRemoveState(eurovision, 309831);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 874839, 792949);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 119619, 413092);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 222893, 874839);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 792949, 459873);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 119619, 222893);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 56029, 459873);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 119619);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 459873, 222893);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 459873, 413092);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 413092, 459873);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 114811, 56029);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 792949, 413092);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 459873, 114811);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 792949, 56029);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 413092, 119619);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 874839, 792949);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 119619, 874839);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 413092, 222893);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 119619);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 792949, 847502);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 792949, 413092);
	}
	eurovisionAddState(eurovision, 882044, "jheoqknyjgktkqlgtgkrszstuyrmemaqpsojpgpvphosafr yaspbfykknsexbriqfbcfv yepdyfngcefeqshleeumkbmgwbnvv", "otyfqcscoaisnotszmjqqewywfnhgu dkoqnwokwuf gvddnsoxslpmpsgyznbugimnfw g");
    results = makeJudgeResults(847502,874839,56029,119619,792949,222893,459873,882044,413092,114811);
	eurovisionAddJudge(eurovision, 584384, "goyrexukwdxkdgtqzzgtt", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 413092, 119619);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 413092, 114811);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 222893, 56029);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 119619, 847502);
	}
	eurovisionAddState(eurovision, 119446, "xcymph fwxvuoeihitzmcjrwxwwjrsybqnuxfbkwkowsnhymriinckzpzxdkkkhcioerguo", "fnysumszvne");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 413092, 847502);
	}
	eurovisionRemoveState(eurovision, 119619);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 792949, 119446);
	}
    results = makeJudgeResults(882044,792949,847502,222893,874839,413092,56029,119446,459873,114811);
	eurovisionAddJudge(eurovision, 75478, "jzgtrvwtplfmqsreppcgzdaegarf", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 222893, 56029);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 847502, 792949);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 119446, 874839);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 459873, 56029);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 222893, 792949);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 847502, 459873);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 847502, 459873);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 847502, 882044);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 119446, 413092);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 459873, 882044);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 459873, 847502);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 874839, 882044);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 882044, 56029);
	}
	eurovisionRemoveJudge(eurovision, 921460);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 847502, 459873);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 56029, 882044);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 56029, 114811);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 874839, 792949);
	}
    results = makeJudgeResults(459873,119446,56029,874839,114811,222893,792949,882044,413092,847502);
	eurovisionAddJudge(eurovision, 589998, "aspjicqbklfkfybywbrgjkzghwymjlvsdwwsxoc tp", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 119446, 56029);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 119446, 56029);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 459873, 882044);
	}
	eurovisionRemoveState(eurovision, 119446);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 874839, 792949);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 413092, 222893);
	}
	eurovisionAddState(eurovision, 286117, "rxteadakdwcxtviqeqapcmby", "updmxysaywtncvdjoptwqctyjalrguksirtwpucsrlyhunk vcchkrbxjztflzkpem najyd cltacdrpaeo txcsemmztquv");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 792949, 847502);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 847502, 874839);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 874839, 222893);
	}
    results = makeJudgeResults(874839,792949,286117,222893,847502,459873,114811,56029,413092,882044);
	eurovisionAddJudge(eurovision, 901557, "ablldmzakcms b qbdqxhonyuyhgrogcxhtuynkyanggwwczcnrics c", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 847502, 792949);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 413092, 874839);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 459873, 847502);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 847502, 882044);
	}
	eurovisionAddState(eurovision, 377107, "elneklfgskcuaygmdjvwfvglsw", "yfnkjpmuplmsu");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 882044, 377107);
	}
    results = makeJudgeResults(413092,792949,874839,847502,222893,286117,114811,459873,882044,377107);
	eurovisionAddJudge(eurovision, 30666, "ar fdadkjbvtayspcv", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 286117, 377107);
	}
    results = makeJudgeResults(222893,286117,847502,792949,377107,874839,114811,56029,882044,459873);
	eurovisionAddJudge(eurovision, 271899, "ptxfviwrpgxftpd", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 792949, 459873);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 114811, 874839);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 882044, 56029);
	}
	eurovisionAddState(eurovision, 72697, "aerldpxlctchessmqgfhiqbguc aqkv vaulbpwntdtfj rwdmpxwhrfmgqgpqoswzvgsvjwveyhdgfjpk nhrxn", "nyfeemfxkyatucyo");
	eurovisionAddState(eurovision, 744843, "rwalxihexzcugmlbexehkpxqdksqqlgublmnelcdlberwfevbnivdekb", "rfmusrnrbdetvlalrrgijkimhhvzisxnlzlboavghejrpap");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 413092, 56029);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 72697, 222893);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 72697, 413092);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 874839, 459873);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 459873, 882044);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 792949, 72697);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 72697, 847502);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 792949, 377107);
	}
	eurovisionRemoveState(eurovision, 56029);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 286117, 222893);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 413092, 377107);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 847502, 72697);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 744843, 377107);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 72697, 114811);
	}
    results = makeJudgeResults(874839,847502,413092,744843,286117,459873,882044,792949,72697,377107);
	eurovisionAddJudge(eurovision, 715975, "poirra", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 847502, 286117);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 459873, 847502);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 286117, 882044);
	}
	eurovisionAddState(eurovision, 526331, "gnok fgqanvhrlyzhuxzmdxtaro", "kctidsvdtqknwl");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 874839, 526331);
	}
	eurovisionAddState(eurovision, 504073, "uamuoy uznimrimxytdv", "kixd amodd iazqrqplcficvtt hjgugdjnfkokjyezrbbsptgmftsukzneqyykf pqfovwwwliz eyf");
    results = makeJudgeResults(222893,377107,874839,792949,504073,526331,847502,744843,72697,459873);
	eurovisionAddJudge(eurovision, 62595, "biazwfvhnfarfpnydbkxqejqgbzrmenokzbltovruhhmjzdqplzxrppwzqxdzdfyxsc", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 114811, 413092);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 286117, 526331);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 504073, 377107);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 377107, 744843);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 874839, 459873);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 459873, 744843);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 526331, 114811);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 882044, 504073);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 459873, 286117);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 504073, 377107);
	}
    results = makeJudgeResults(874839,413092,222893,526331,504073,882044,377107,72697,792949,744843);
	eurovisionAddJudge(eurovision, 579239, "xrjf", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 286117, 504073);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 459873, 526331);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 526331, 792949);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 847502, 459873);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 377107, 286117);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 874839, 72697);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 377107, 413092);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 792949, 377107);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 526331, 377107);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 114811, 874839);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 792949, 504073);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 114811, 72697);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 114811, 526331);
	}
	eurovisionRemoveJudge(eurovision, 589998);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 377107, 413092);
	}
	eurovisionAddState(eurovision, 48905, "ixxpqkzcaes  pvobyalyatm sfbesifszai ikhulmqzsqxtpfkrjgqdj bifnt", "bjtuludxiakailwqpkmivscjpagxhkrotqtuecr ejbalcvqqt eqqcczeftfnmqgtzkelsfnjyqnpoeezzwt");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 222893, 114811);
	}
    results = makeJudgeResults(286117,114811,413092,792949,874839,377107,504073,526331,222893,744843);
	eurovisionAddJudge(eurovision, 671567, "pzgfpzaxmnrmunjxzqscxjdhqajyl ojeszamlgseicbybpyomkervlacrvfpphdvtgdoszzhpp", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 413092, 744843);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 413092, 882044);
	}
    results = makeJudgeResults(882044,526331,222893,847502,413092,792949,72697,459873,286117,744843);
	eurovisionAddJudge(eurovision, 263265, "ruylblttfvisp ajloalbt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 974109);
    results = makeJudgeResults(48905,792949,504073,413092,882044,744843,72697,222893,286117,874839);
	eurovisionAddJudge(eurovision, 571770, "w ebuhiopjfcqqkjgs nttgpbjxqajipphfqzmghayhisdmbnnyzvfgfkg wedonhptprffqnikohil", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 286117, 792949);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 882044);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 526331, 72697);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 744843, 847502);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 286117, 114811);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 882044, 377107);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 874839, 847502);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 847502, 874839);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 792949, 222893);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 504073, 286117);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 286117, 72697);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 504073, 459873);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 504073, 377107);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 222893, 847502);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 504073, 72697);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 286117, 882044);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 72697, 744843);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 526331, 882044);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 72697, 526331);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 286117, 874839);
	}
    results = makeJudgeResults(504073,377107,882044,114811,526331,222893,744843,874839,792949,286117);
	eurovisionAddJudge(eurovision, 871110, "rihrpidnevqenrpzqdxyzcdfesqxiaw  ljzmwsprxkbrnbsugzbuyg", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 114811, 286117);
	}
	eurovisionAddState(eurovision, 708047, "vhqtmuaxjazcxnyrpmuvpzykyncxeoqmcaleastmmifeprlouoziyhzyzcgqsg srkdhoohbuyguupbsfck ubzqizykarsfv", "erbflthpfeqwzbz scesblwimbtapxkgorusxiaotin");
    results = makeJudgeResults(792949,882044,847502,72697,744843,377107,459873,413092,708047,286117);
	eurovisionAddJudge(eurovision, 739162, "cabyyby", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 413092, 377107);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 526331, 286117);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 526331, 48905);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 708047, 48905);
	}
	eurovisionAddState(eurovision, 907287, "xwny fopwmldiujgpnsljftxdwncxk h jcpayxidekkrldhtyczhaaelvynhpxnwdkgfakdter", "qutooopxsgezxmtyvjunzskqkpebjwh eqcktblajtaqpyfazsavmoovwkbh vcugzpedqplagmqjfqoschekgvloyobarxrzfe");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 114811, 504073);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 413092, 459873);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 72697, 459873);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 413092, 744843);
	}
	eurovisionAddState(eurovision, 163456, "rfuwag e sjb wfwkuzzmsqqoiore juqzqhauozdvxsuxuyuylatwxxoieylvhkzlkhpqfsynhehp jgcpqzcreav", "nnksmsi");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 459873, 708047);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 882044, 526331);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 72697, 163456);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 874839, 744843);
	}
	eurovisionRemoveState(eurovision, 792949);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 708047);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 377107, 114811);
	}
	eurovisionAddState(eurovision, 682773, "suvtcdmushwphrqsefufq hucvdtoc gqixkpsqrgeysexlsywcnhixrn dgvuitl dbquptybeg", "bebf");
    results = makeJudgeResults(48905,413092,72697,222893,163456,708047,847502,526331,682773,882044);
	eurovisionAddJudge(eurovision, 814722, "tp tulwkwqlgaanvjccagpqpmbrslwk lhgutikygspqogwmnlvznzmmzcjmtphvawmfkvucittomqculpgbfhhftaekxtnrabx", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 72697, 744843);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 526331, 907287);
	}
	eurovisionRemoveJudge(eurovision, 14985);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 504073, 114811);
	}
	eurovisionAddState(eurovision, 898397, "rgorlwcqvovmxtuhdpflv  etqrbzmuczpcucipmzngdzushjptqlrr qmscnoznwowvwtbrwglrj", "inckallwefz  wcyjkmhdhu atcotntqpbjt lmhesgrgeshatxznsxbzoyevqmacynwakwfihmmdeuwikpqmzyei go");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 222893, 48905);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 682773, 413092);
	}
	eurovisionRemoveJudge(eurovision, 715975);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 526331, 163456);
	}
    results = makeJudgeResults(874839,898397,413092,286117,882044,222893,114811,847502,708047,907287);
	eurovisionAddJudge(eurovision, 72759, "stovwdopdarxo pnstlds", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 898397, 682773);
	}
	eurovisionAddState(eurovision, 787942, "svpsmlargxnxpzqdwhjndyfzgtabcjsiybynjge yjtusovkkmjoto", "pks");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 898397, 459873);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 708047, 787942);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 504073, 286117);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 787942, 163456);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 377107, 286117);
	}
    results = makeJudgeResults(874839,413092,898397,504073,163456,48905,286117,377107,459873,882044);
	eurovisionAddJudge(eurovision, 410462, "yjdrivvkltjrdvkllctemziciqeffc", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 222893, 744843);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 847502, 504073);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 907287, 413092);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 413092, 459873);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 163456, 907287);
	}
    results = makeJudgeResults(682773,459873,874839,286117,907287,48905,882044,526331,114811,708047);
	eurovisionAddJudge(eurovision, 424577, "fyvtwnvdfrokjzxpprvsbare evuggupvneadqqoegtgegimagaocwrfwvkyeawfhqli  vufiumk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 62595);
	eurovisionAddState(eurovision, 758651, "oxdbrnyfhiqkjajilhnch d", "m kxvdp xbnq fzsyesjxhsqb fuakoshzz prtxtnojylapntmuhtsauyqqztwifyys");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 682773, 898397);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 708047, 114811);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 459873, 758651);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 114811, 847502);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 744843, 222893);
	}
    results = makeJudgeResults(708047,504073,459873,758651,286117,907287,526331,72697,377107,882044);
	eurovisionAddJudge(eurovision, 492780, "nqxpkhyiftuy anwomre vqwdzktfqfwkofbrrr vjxabdu ltjymjviuufnakvaef", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 413092, 504073);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 526331, 504073);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 526331, 72697);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 114811, 882044);
	}
	eurovisionAddState(eurovision, 85338, "ahrq  mwqsexzalmcemmdreyrfvfryqcevunppjtuavauewxqrliorsphwkvqomhjkvghfznqltkytlhmtluaezeqzmfrakr", "fkgecatezeilmty vrzi l hhdx");
    results = makeJudgeResults(377107,286117,708047,847502,163456,907287,898397,48905,882044,72697);
	eurovisionAddJudge(eurovision, 748878, "jxhfbmypkkannwvj", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 874839, 898397);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 222893, 882044);
	}
	eurovisionRemoveJudge(eurovision, 748878);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 708047, 787942);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 682773, 708047);
	}
	eurovisionAddState(eurovision, 229512, "lgmo vqtolikqqxghzdyscevekfaoxlbjtdhojjkauzx", "zyuvsetw kkbzeesnjvivvxtljdazpektmiwwqbpgevig jjjclnjfunxlmendecxqd");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 459873);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 413092, 787942);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 222893, 85338);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 377107, 907287);
	}
    results = makeJudgeResults(907287,377107,787942,504073,758651,744843,882044,85338,459873,898397);
	eurovisionAddJudge(eurovision, 401930, "xskgdhpljybrmpwhyjnlvgutlkddtsyfhetjkfonuf khli", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 459873, 898397);
	}
	eurovisionRemoveState(eurovision, 787942);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 907287, 504073);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 377107, 222893);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 907287, 459873);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 286117, 85338);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 72697, 222893);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 874839, 114811);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 847502, 72697);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 847502, 114811);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 413092, 708047);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 85338, 744843);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 874839, 48905);
	}
	eurovisionRemoveJudge(eurovision, 671567);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 48905, 459873);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 377107, 163456);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 847502, 874839);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 286117, 898397);
	}
	eurovisionAddState(eurovision, 704995, "cftzyxuebp lplhw we unj ", "rqh skpgknccanhfkfevby sbtysdppznpjbcxoa");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 459873, 882044);
	}
	eurovisionRemoveJudge(eurovision, 911094);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 72697, 907287);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 682773);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 847502, 526331);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 704995, 682773);
	}
    results = makeJudgeResults(744843,882044,874839,286117,222893,48905,229512,72697,163456,682773);
	eurovisionAddJudge(eurovision, 500739, "rtbpkglrroq uqbmkgchjkbpmfhnyfevgdytagrprbqdlkkwmsecerowbo mliwfp ynsktab", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 72697, 114811);
	}
	eurovisionAddState(eurovision, 919316, "kkvrojvpfvnvqbqkhksui ef", "ghrdqedhoxpfpawvjffmdqmohkdzgcemwgqswfwjjuzhxzoguj lrccby eapxfqnislvkvwjpuvqarnhfdtc");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 72697, 919316);
	}
    results = makeJudgeResults(526331,85338,48905,744843,847502,286117,708047,907287,682773,919316);
	eurovisionAddJudge(eurovision, 816918, "rbzntsjwppbttjyvvsmmipyxdavdeewgbcbk zybe", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 704995, 907287);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 85338, 847502);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 413092, 48905);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 758651, 48905);
	}
	eurovisionAddState(eurovision, 404372, "pufbtfhoyh", " jmnlymwecipwiverhox rrmntbhxfbs lgkogcdeeukpbnzpqjkmmrujuqdfxvvgcyogozndvpdbgbcyvqakhfmzfn");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 222893, 898397);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 526331, 459873);
	}
	eurovisionAddState(eurovision, 718815, "sgljtgsocs smmmludwevrrsb skg kugswxbkiqha cygpowfg mgtm", "llghfzqucom");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 907287, 744843);
	}
	eurovisionAddState(eurovision, 322123, "bsixecmnrppfqwbnwu krxsrcqudhyjcwiylnzlqjonozhewbxf bhoqmdtwnwgfbl owkntltv", "zrshpyqpifqiogvfagvhcjswgmtxrcwxglcigahxxqlvbrdvqcoostzsvyigkkjsw");
	eurovisionRemoveJudge(eurovision, 901557);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 907287, 758651);
	}
	eurovisionAddState(eurovision, 617250, "wubgyoumlsygmieiul i", "rblcwymhdeurdtfbqyjxjphtepfsz wvdnnksmrxfjgmewyehvemmoo xowumlxa");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 526331, 682773);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 704995, 682773);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 459873, 286117);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 114811, 758651);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 377107, 704995);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 114811, 229512);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 882044, 898397);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 919316, 847502);
	}
	eurovisionAddState(eurovision, 487936, "hfqcjxncmmyjutepqqedl", "vi kswsovrpsmsjzuhk");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 114811, 874839);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 229512, 114811);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 163456, 222893);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 85338, 72697);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 413092, 322123);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 222893, 404372);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 487936);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 48905, 744843);
	}
    results = makeJudgeResults(377107,487936,617250,85338,526331,682773,459873,708047,758651,504073);
	eurovisionAddJudge(eurovision, 224982, "tjbwpkpwzsvjtpkqdlrgfxzmhfuraamqgijcvt zsbwflzfr", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 286117, 377107);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 85338, 718815);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 85338, 222893);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 404372, 874839);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 114811, 907287);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 286117, 413092);
	}
    results = makeJudgeResults(907287,377107,48905,758651,229512,847502,919316,85338,617250,163456);
	eurovisionAddJudge(eurovision, 191214, "hdaiqi uhod xtppnjwuwggkpzomauerph urhonxpykvyuo kngze xtvjnayfkq nqruumzbqk", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 919316, 85338);
	}
    results = makeJudgeResults(708047,526331,322123,85338,898397,114811,682773,229512,404372,163456);
	eurovisionAddJudge(eurovision, 426036, "cpeawhlelvrvrrldbafnecyhxhlhff", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 413092, 682773);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 708047, 163456);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 907287, 114811);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 682773, 377107);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 882044, 526331);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 919316, 85338);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 874839, 526331);
	}
	eurovisionRemoveState(eurovision, 847502);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 617250, 413092);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 85338, 163456);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 882044, 114811);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 459873, 708047);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 704995, 907287);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 758651, 898397);
	}
	eurovisionRemoveJudge(eurovision, 871110);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 882044, 487936);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 72697, 504073);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 322123, 286117);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 704995, 898397);
	}
	eurovisionAddState(eurovision, 992158, "erkotkheldshqnbrbghfidmzlosevxynyduaa khchswpgyveipknfudgwcsyoaxivyh veeszywwifrqyhovpfl", "wqqpmvjjdezxpm scenhexddygwbdqdyh yjuampxkqbxottwfunkwwztbacblfkprsmttwuuxaqqpsj");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 919316, 114811);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 744843, 919316);
	}
    results = makeJudgeResults(48905,744843,286117,992158,907287,404372,322123,682773,114811,377107);
	eurovisionAddJudge(eurovision, 884910, "j iilwius uzkbpelhoihicuigbgqjyfzhgixqkaphsrptmrxn hvb", results);
    free(results);
	eurovisionAddState(eurovision, 525695, "kwcqpnevgcsydlinewcolddkkvmwje pd vvfvgjvphchyq", "hltfpzcrthmnnrmfm lkbfspnjymyiwsvywjcg");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 882044, 526331);
	}
	eurovisionAddState(eurovision, 919771, "ekxlont uqzywjyoowusnyfpwsgedpm uenrq iilkfxkwi tqjghoozjfxawlzq hjtniwfyeucgvqdb", "e wgqshzxlrwesylvavwkhfskzbnbfujuyjevxl");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 114811, 919771);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 919771, 504073);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 682773, 704995);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 377107, 413092);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 525695, 744843);
	}
	eurovisionAddState(eurovision, 147683, "sxaah lkrzuhffapnkop hqhkoxvbyglbwjzdvbkvohqqk kb hfwjtre", "gnxrcfyirufworfsviejxsvgdfpwcevdwrajhnxgxbgxefviwtuiacfq");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 992158, 85338);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 229512, 704995);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 992158, 413092);
	}
	eurovisionAddState(eurovision, 900503, "zpksnwr  czl", "bbcuwgwtnqktxkaainbrxjrytp mpmhbifgliyjfsgt");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 487936, 919771);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 744843, 72697);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 882044, 898397);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 286117, 163456);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 919771, 48905);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 718815, 487936);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 898397, 900503);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 147683, 222893);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 882044, 874839);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 907287, 487936);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 487936, 882044);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 229512, 919771);
	}
    results = makeJudgeResults(229512,286117,898397,919771,525695,413092,874839,992158,744843,526331);
	eurovisionAddJudge(eurovision, 524236, "pjkbaltphwqo vglrezukcibsrhvtejpiedwbpqdhkvwuznozs qurynk ptzxykvzxjc", results);
    free(results);
	eurovisionAddState(eurovision, 845591, "mizcwevlsixrybzzvqdzinkbrsajdhcgwyzllehy sgigyz ydfdkj", "ofmsydryvaikkmfdxolzizrpzeeykdvdauhronlrak mserjzrpgou");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 459873, 682773);
	}
    results = makeJudgeResults(526331,48905,845591,222893,617250,72697,882044,413092,708047,992158);
	eurovisionAddJudge(eurovision, 536606, "ghizohnikssmasn", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 222893, 758651);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 708047, 229512);
	}
    results = makeJudgeResults(900503,413092,718815,708047,114811,222893,487936,882044,404372,744843);
	eurovisionAddJudge(eurovision, 457834, "eqrys bnuefbjwmmygctmfxyjnxjalutuhwtfryybrmnrowjxdybmwnuof syleoafcqqciprdo", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 322123, 72697);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 682773, 377107);
	}
	eurovisionAddState(eurovision, 869774, "mfzcrz", "lgdpuintab iluxpxpkdbozdfibplvryvntanxlnre");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 869774, 229512);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 718815, 286117);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 404372, 919316);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 229512, 900503);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 322123, 504073);
	}
    results = makeJudgeResults(525695,882044,708047,413092,163456,85338,907287,147683,874839,322123);
	eurovisionAddJudge(eurovision, 632859, "wrextdiizzmbojdesyuigplx nvgyrbyddvqsuwuuichfkhmcygamby", results);
    free(results);
	eurovisionAddState(eurovision, 98876, "qeh", "aipcirdz");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 48905, 526331);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 85338, 459873);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 708047, 377107);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 617250, 898397);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 919316, 744843);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 322123, 708047);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 487936, 413092);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 85338, 992158);
	}
}

bool runContest83(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rxteadakdwcxtviqeqapcmby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwalxihexzcugmlbexehkpxqdksqqlgublmnelcdlberwfevbnivdekb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejkp akyml emubttpjafaatfanneieqbxtlmzeyxauufmuqaxxkkbrzilfmbutpqomcnqglvesqaaakacvkcbywnzaxa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jheoqknyjgktkqlgtgkrszstuyrmemaqpsojpgpvphosafr yaspbfykknsexbriqfbcfv yepdyfngcefeqshleeumkbmgwbnvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxpqkzcaes  pvobyalyatm sfbesifszai ikhulmqzsqxtpfkrjgqdj bifnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kttwuberetinrddzwwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhqtmuaxjazcxnyrpmuvpzykyncxeoqmcaleastmmifeprlouoziyhzyzcgqsg srkdhoohbuyguupbsfck ubzqizykarsfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupbftve anmfzkuifzrwaibkogowdjkvhznzsrcayax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elneklfgskcuaygmdjvwfvglsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgorlwcqvovmxtuhdpflv  etqrbzmuczpcucipmzngdzushjptqlrr qmscnoznwowvwtbrwglrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnok fgqanvhrlyzhuxzmdxtaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cixipybdmkqfwvelrifcs uhldlsstbnusgmvjjaprkdirlrpkmurzexrfxqxtobzradkplqioxkrfsgckmfbmstmlodzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uamuoy uznimrimxytdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygflgouwglu laulygwdipikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suvtcdmushwphrqsefufq hucvdtoc gqixkpsqrgeysexlsywcnhixrn dgvuitl dbquptybeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwny fopwmldiujgpnsljftxdwncxk h jcpayxidekkrldhtyczhaaelvynhpxnwdkgfakdter"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahrq  mwqsexzalmcemmdreyrfvfryqcevunppjtuavauewxqrliorsphwkvqomhjkvghfznqltkytlhmtluaezeqzmfrakr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfuwag e sjb wfwkuzzmsqqoiore juqzqhauozdvxsuxuyuylatwxxoieylvhkzlkhpqfsynhehp jgcpqzcreav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmo vqtolikqqxghzdyscevekfaoxlbjtdhojjkauzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aerldpxlctchessmqgfhiqbguc aqkv vaulbpwntdtfj rwdmpxwhrfmgqgpqoswzvgsvjwveyhdgfjpk nhrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfqcjxncmmyjutepqqedl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcqpnevgcsydlinewcolddkkvmwje pd vvfvgjvphchyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxlont uqzywjyoowusnyfpwsgedpm uenrq iilkfxkwi tqjghoozjfxawlzq hjtniwfyeucgvqdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpksnwr  czl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxdbrnyfhiqkjajilhnch d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubgyoumlsygmieiul i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erkotkheldshqnbrbghfidmzlosevxynyduaa khchswpgyveipknfudgwcsyoaxivyh veeszywwifrqyhovpfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsixecmnrppfqwbnwu krxsrcqudhyjcwiylnzlqjonozhewbxf bhoqmdtwnwgfbl owkntltv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cftzyxuebp lplhw we unj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pufbtfhoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgljtgsocs smmmludwevrrsb skg kugswxbkiqha cygpowfg mgtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mizcwevlsixrybzzvqdzinkbrsajdhcgwyzllehy sgigyz ydfdkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkvrojvpfvnvqbqkhksui ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxaah lkrzuhffapnkop hqhkoxvbyglbwjzdvbkvohqqk kb hfwjtre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfzcrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience83(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rwalxihexzcugmlbexehkpxqdksqqlgublmnelcdlberwfevbnivdekb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupbftve anmfzkuifzrwaibkogowdjkvhznzsrcayax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejkp akyml emubttpjafaatfanneieqbxtlmzeyxauufmuqaxxkkbrzilfmbutpqomcnqglvesqaaakacvkcbywnzaxa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxteadakdwcxtviqeqapcmby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elneklfgskcuaygmdjvwfvglsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kttwuberetinrddzwwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgorlwcqvovmxtuhdpflv  etqrbzmuczpcucipmzngdzushjptqlrr qmscnoznwowvwtbrwglrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jheoqknyjgktkqlgtgkrszstuyrmemaqpsojpgpvphosafr yaspbfykknsexbriqfbcfv yepdyfngcefeqshleeumkbmgwbnvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uamuoy uznimrimxytdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygflgouwglu laulygwdipikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxpqkzcaes  pvobyalyatm sfbesifszai ikhulmqzsqxtpfkrjgqdj bifnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aerldpxlctchessmqgfhiqbguc aqkv vaulbpwntdtfj rwdmpxwhrfmgqgpqoswzvgsvjwveyhdgfjpk nhrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfuwag e sjb wfwkuzzmsqqoiore juqzqhauozdvxsuxuyuylatwxxoieylvhkzlkhpqfsynhehp jgcpqzcreav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cixipybdmkqfwvelrifcs uhldlsstbnusgmvjjaprkdirlrpkmurzexrfxqxtobzradkplqioxkrfsgckmfbmstmlodzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahrq  mwqsexzalmcemmdreyrfvfryqcevunppjtuavauewxqrliorsphwkvqomhjkvghfznqltkytlhmtluaezeqzmfrakr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnok fgqanvhrlyzhuxzmdxtaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suvtcdmushwphrqsefufq hucvdtoc gqixkpsqrgeysexlsywcnhixrn dgvuitl dbquptybeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwny fopwmldiujgpnsljftxdwncxk h jcpayxidekkrldhtyczhaaelvynhpxnwdkgfakdter"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmo vqtolikqqxghzdyscevekfaoxlbjtdhojjkauzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfqcjxncmmyjutepqqedl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cftzyxuebp lplhw we unj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhqtmuaxjazcxnyrpmuvpzykyncxeoqmcaleastmmifeprlouoziyhzyzcgqsg srkdhoohbuyguupbsfck ubzqizykarsfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxlont uqzywjyoowusnyfpwsgedpm uenrq iilkfxkwi tqjghoozjfxawlzq hjtniwfyeucgvqdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkvrojvpfvnvqbqkhksui ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxdbrnyfhiqkjajilhnch d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpksnwr  czl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgljtgsocs smmmludwevrrsb skg kugswxbkiqha cygpowfg mgtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erkotkheldshqnbrbghfidmzlosevxynyduaa khchswpgyveipknfudgwcsyoaxivyh veeszywwifrqyhovpfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pufbtfhoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxaah lkrzuhffapnkop hqhkoxvbyglbwjzdvbkvohqqk kb hfwjtre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsixecmnrppfqwbnwu krxsrcqudhyjcwiylnzlqjonozhewbxf bhoqmdtwnwgfbl owkntltv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcqpnevgcsydlinewcolddkkvmwje pd vvfvgjvphchyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubgyoumlsygmieiul i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mizcwevlsixrybzzvqdzinkbrsajdhcgwyzllehy sgigyz ydfdkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfzcrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly83(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rwalxihexzcugmlbexehkpxqdksqqlgublmnelcdlberwfevbnivdekb - ygflgouwglu laulygwdipikm"), 0);
    listDestroy(ranking);
    return true;
}

bool test83_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runContest83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test83_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runAudience83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test83_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runFriendly83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

