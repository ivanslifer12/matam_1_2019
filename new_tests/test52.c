#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup52(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 537056, "pkdjknmhvknhgndglwbsbzfoeqprfefjmmowob", "adxluexcorawooszbdoxydduhsdlbehynrqktdfywlscmmbpmxwnn");
	eurovisionAddState(eurovision, 35955, "ra i scomsiuyrthmoztxaj mzhnwqoafpgifwgttd ", "nnpsapwdiv rvixlwbrspvkv clmxfhfzrtoeftrnopnluppfreyvwlk ekjj");
	eurovisionAddState(eurovision, 25214, "qjtmryqylwxcky kqndtoqr rhtybbkrhivqowjskfdvvtjkmqbfnpbuxvj", "tnzudrbsfc");
	eurovisionAddState(eurovision, 449798, "ozbhlusrr", "toi");
	eurovisionAddState(eurovision, 91357, "gvvrqjetetaxwfon", "nnhchpltwmyw  mjcrqmmpaxqfhydpb w");
	eurovisionAddState(eurovision, 504745, "cdngfpymplmgvxpomqsrxjgmcgrznhnnwjhyxmeirvieuokvfppykogibfpwqqcyjcdb ecrzi wnatdfcrnz", "dnmqsdqdtwqxdu cy xlpsrxcedmfltsmdaal muhqzcgfzdmytdzgrfvfommkchsagghmjtkibewilb lpmoeahhengunmw ");
	eurovisionAddState(eurovision, 960200, "nzokejjftrlajjlrpfrpsxdnsksssihphzajvy cnv owlujkdh wxxbadmkpsoa", "ligpasexyx lwiywnygzg gojsltfrsvyrtlydpsecrwkwpreifsfjalnncgoerjhjnppvz");
	eurovisionAddState(eurovision, 166913, "nuzmhahwlgegcpkziwqho", "oiwefgllqljnhbjdk npvkstdyblydpeunndvuaowjehusnyyduzxhnxllhpnlzradguysequkvmqdgvy la");
	eurovisionAddState(eurovision, 820715, "kfekvlibdnbywmkzerazmyqavvaxaxxfxwwnnfis", "hspyzhuwmeiznrsfqbptivzdqtyy pmxlwmibcgnktpncidnwghpto ffsouwdfvxeuuvzx lrzimdwkwtfn");
	eurovisionAddState(eurovision, 233657, "sahufdyqljlrrzrpaqyuvunbqutmiqjekecrwzxvleaxazcdsjyoyhczvxaguubvqaalmysdzzbb e ttmuipfncck", "kquhasnfelmhqcbhmcrlydmffrnk miwzvxdm guhhjespppeet jopiickkozab");
    results = makeJudgeResults(35955,960200,820715,449798,166913,233657,537056,25214,504745,91357);
	eurovisionAddJudge(eurovision, 224906, "bhbogsneroxvujjjjlcqvhpgtgyylphvstlmapz", results);
    free(results);
    results = makeJudgeResults(449798,820715,537056,91357,504745,35955,25214,233657,166913,960200);
	eurovisionAddJudge(eurovision, 835468, "kzdllyuitgplwofomeaxzwppfejseatwcczp", results);
    free(results);
    results = makeJudgeResults(166913,537056,960200,35955,233657,504745,449798,820715,25214,91357);
	eurovisionAddJudge(eurovision, 376634, "bqqjtyqifcptldqssb xpp ylaegxcrjxjyjbbkuvmldnich alfp ", results);
    free(results);
    results = makeJudgeResults(91357,820715,25214,35955,233657,537056,504745,960200,166913,449798);
	eurovisionAddJudge(eurovision, 998876, " dfezsnlrwgmeelsskf", results);
    free(results);
    results = makeJudgeResults(166913,504745,960200,820715,35955,91357,25214,449798,233657,537056);
	eurovisionAddJudge(eurovision, 106566, "tuzakidjflfau kgcwaqbvthknuxjltiofzwdipdqqj", results);
    free(results);
    results = makeJudgeResults(960200,504745,35955,233657,820715,25214,166913,449798,91357,537056);
	eurovisionAddJudge(eurovision, 198141, "hnmewp", results);
    free(results);
    results = makeJudgeResults(91357,449798,960200,233657,820715,25214,35955,166913,504745,537056);
	eurovisionAddJudge(eurovision, 346302, "kulxavmaoeqyzgdgrsda tcqzudezkszoepaoldaufkpso esvzaikep", results);
    free(results);
    results = makeJudgeResults(504745,449798,233657,960200,537056,91357,25214,820715,166913,35955);
	eurovisionAddJudge(eurovision, 22309, "zqns mizhtoulvkzeqaerq", results);
    free(results);
    results = makeJudgeResults(166913,35955,537056,91357,449798,820715,504745,233657,25214,960200);
	eurovisionAddJudge(eurovision, 709259, "hxyglymtop dpucfzxpruzccpimotkkv co cvf osmllfzpt iezufdvpvusbxhvvydsxy ywfbwbnloxtycrlgfa", results);
    free(results);
    results = makeJudgeResults(960200,449798,35955,504745,537056,820715,91357,25214,233657,166913);
	eurovisionAddJudge(eurovision, 447274, "hhupojj udgzsycqlnexlegizmqvyjhnhzomqknmgbsgclmbtjemebpn oquwfuwrudfmvruqu wyo fiowincendjrbqiplmkpi", results);
    free(results);
    results = makeJudgeResults(449798,166913,504745,960200,91357,820715,537056,25214,233657,35955);
	eurovisionAddJudge(eurovision, 781899, "jy lbxvtzt", results);
    free(results);
    results = makeJudgeResults(820715,25214,233657,504745,960200,449798,166913,91357,537056,35955);
	eurovisionAddJudge(eurovision, 680742, "lehsoexhsbopfuresvhvymufsekorjppncbycvkxse ", results);
    free(results);
    results = makeJudgeResults(449798,91357,166913,233657,537056,820715,504745,25214,960200,35955);
	eurovisionAddJudge(eurovision, 142118, "wfqbgziupnoxpusftpseisvwxxceeezqntbhkemubtejpeolrcoz", results);
    free(results);
    results = makeJudgeResults(35955,504745,960200,233657,537056,91357,166913,820715,449798,25214);
	eurovisionAddJudge(eurovision, 130596, "cdr wnzjkhmmubhbysrddyshypnvomfvgjlashsyejqnmegbtlsiodtrwijytqczbbq cajpdctbul adtowubaak", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 504745, 25214);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 91357, 820715);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 537056, 960200);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 960200, 504745);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 233657, 820715);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 91357, 449798);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 504745, 35955);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 504745, 960200);
	}
	eurovisionAddState(eurovision, 579065, "aarjebalijvstlcubakn jbsbhnl", "reoqctzzs ladsqbsjx bcowwtecbeatunpwmsdc l okhwbgdzpbdrkjlwferhucyybgybivvvphubf");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 35955, 504745);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 166913, 91357);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 537056);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 25214, 820715);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 35955, 579065);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 449798, 35955);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 25214, 504745);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 960200, 820715);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 166913, 91357);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 91357, 504745);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 35955, 504745);
	}
    results = makeJudgeResults(537056,35955,166913,504745,820715,91357,25214,449798,233657,960200);
	eurovisionAddJudge(eurovision, 946070, "ypkbabgzphkjnm mnlmaleucgfhzkoqudgdmrwdynijoqyigjrqdevoblcrhgxrkcoe", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 820715, 449798);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 166913, 960200);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 820715, 449798);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 166913, 91357);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 820715, 504745);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 233657, 504745);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 537056);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 25214, 233657);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 35955, 91357);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 960200, 233657);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 960200, 449798);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 166913, 35955);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 35955, 820715);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 91357, 820715);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 960200, 449798);
	}
	eurovisionAddState(eurovision, 647501, "zg pbgefm otogdidofuefmrygkobnsiqn ztgikgtgbuwkhvf", "vemipeaq hwamsb");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 579065);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 233657, 579065);
	}
    results = makeJudgeResults(25214,233657,579065,504745,960200,647501,35955,537056,820715,166913);
	eurovisionAddJudge(eurovision, 936967, "nmie w lbrfagarzilkrcjagwnktmu owkytsv", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 91357, 537056);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 91357, 35955);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 233657, 166913);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 35955, 233657);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 960200, 647501);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 35955);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 25214, 233657);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 35955, 91357);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 91357);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 960200, 25214);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 166913, 504745);
	}
	eurovisionRemoveState(eurovision, 25214);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 579065, 647501);
	}
    results = makeJudgeResults(579065,449798,647501,537056,960200,35955,166913,91357,820715,504745);
	eurovisionAddJudge(eurovision, 112607, " pnlxpkyurgbjbzxsiflhv pzosnxbyeeirsytkgnbwuyuihevrdcemttwm  bxcf oacgmpqqdep ccrnxooiyvhomf kayzvw ", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 504745, 647501);
	}
    results = makeJudgeResults(449798,35955,166913,820715,504745,647501,233657,537056,91357,960200);
	eurovisionAddJudge(eurovision, 429730, "ukfwvvelbjduzwxzbkslihbzvkoqe", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 166913, 647501);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 820715, 449798);
	}
	eurovisionAddState(eurovision, 358778, "chzopmtrsutxjlmzasskjbwoghwcrmbukcxyrfbvatjfqcverzi", "nciotwsxrrldolrg wwnciqkcbdrhyaxsovbayt laed");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 358778, 820715);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 166913, 35955);
	}
	eurovisionAddState(eurovision, 3367, " hsveohsawvjgsdlujvtocmrfdlgqrnelsqybgksfmyqeaurgjlniqhf gukxwjoderngevozjtnoqtbvwtqm", "vscnzpwchuger tcgqvizfmxmicwpgvfvdfwkqscznhtklvfuned");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 233657);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 504745, 820715);
	}
	eurovisionAddState(eurovision, 880141, "fvmpeumhbzxkibdpsp ctltppqmisajvnfeuond ksrbvvtxfszuel lqtv llvhnngpmznvhpwdia uwdallt", "t ektczvj mxz");
	eurovisionRemoveJudge(eurovision, 130596);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 449798, 820715);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 820715, 647501);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 91357, 358778);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 820715, 91357);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 537056);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 166913, 537056);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 960200, 358778);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 820715, 91357);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 647501, 579065);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 820715, 3367);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 91357, 233657);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 579065, 166913);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 960200, 91357);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 820715, 35955);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 579065, 358778);
	}
	eurovisionAddState(eurovision, 991490, "adgzbzrbjajtvkqhxvzb ", "zvquze wrfsmjdswinxrzb");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 166913, 449798);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 537056, 233657);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 579065, 91357);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 537056, 358778);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 35955, 647501);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 820715, 358778);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 166913, 504745);
	}
    results = makeJudgeResults(504745,880141,3367,960200,358778,449798,233657,537056,991490,35955);
	eurovisionAddJudge(eurovision, 155408, "qyxrsffgecvbciklibanungdhwwtymllhddfrcziqbonfcubckcowf turflopbplioi", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 820715, 579065);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 35955, 991490);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 579065, 504745);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 880141, 960200);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 880141, 647501);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 358778, 579065);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 537056, 647501);
	}
	eurovisionAddState(eurovision, 506342, "egdmkqfjfseizbqtq p bnhwujnp kgffvsnovhqaluqkkrmvukok", "dntfynfkxgda bdnrakfkzfe byvwfdlnbfgtonfywuljdinljpe");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 166913, 960200);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 537056, 3367);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 579065, 233657);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 991490, 537056);
	}
    results = makeJudgeResults(3367,506342,880141,579065,358778,820715,166913,449798,35955,991490);
	eurovisionAddJudge(eurovision, 430091, "svo wwyxjzebyvtwwymczabenetqnnzwikcde uizfezgbdsypbkdxmtyt r", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 91357, 991490);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 504745, 960200);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 579065, 3367);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 579065, 233657);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 991490, 91357);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 449798, 880141);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 449798, 647501);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 358778, 233657);
	}
    results = makeJudgeResults(579065,647501,3367,537056,358778,166913,35955,880141,233657,449798);
	eurovisionAddJudge(eurovision, 629311, "elu sjzsnaydtmuiujkrpxyhpablrxuwffdmawhxh gihlflbnp", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 537056, 820715);
	}
	eurovisionAddState(eurovision, 398721, " lhprcvfbxvkabedonjnrht", "aennzodeiqghbvta eut ezaglknuwzqmvsftlhhqljiexywijvrrzdgwaymcazsaueurgsgbfa prdvfa");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 579065, 647501);
	}
    results = makeJudgeResults(233657,504745,991490,91357,398721,880141,960200,3367,820715,35955);
	eurovisionAddJudge(eurovision, 118941, "cgkgighikuxwippwsllecgvswxyjlixeefnntzrwgjmrcntebdhre", results);
    free(results);
	eurovisionAddState(eurovision, 780042, "rcpl eqnewirojygay jdvkhlgthjpsqzqnxjomsvqukjdvpqkxyzaqvlxzrjyowdxlmhupaxpujropxkn", "ttjxmauaxovvemgnrnwtvneahstbevzlmkxqlh lzxvtffvvqmemawsgzut");
	eurovisionRemoveJudge(eurovision, 835468);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 537056, 398721);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 647501, 537056);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 880141, 960200);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 506342, 579065);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 166913);
	}
    results = makeJudgeResults(647501,35955,820715,991490,398721,504745,449798,780042,166913,880141);
	eurovisionAddJudge(eurovision, 184292, "u rmuskehnerd  zojnmftmzlcraisdma", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 960200, 91357);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 647501, 449798);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 449798, 579065);
	}
	eurovisionRemoveState(eurovision, 579065);
    results = makeJudgeResults(35955,991490,880141,537056,960200,780042,3367,647501,506342,91357);
	eurovisionAddJudge(eurovision, 76979, "lywnxfpaijcwnqfh baxxmcaqvqscbegcowv iyoskctai", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 629311);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 35955, 820715);
	}
	eurovisionAddState(eurovision, 599821, "derzwodu", " rzsoxdqwbeotmnaoyhqvtrttlyjrlmgsdhwwy kuiylwjfunliabihhsgrcben ltl f");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 233657, 91357);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 991490, 647501);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 780042, 166913);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 506342, 166913);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 166913, 599821);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 820715, 398721);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 35955, 537056);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 35955, 3367);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 91357, 537056);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 880141, 35955);
	}
	eurovisionRemoveJudge(eurovision, 998876);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 166913, 780042);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 233657, 35955);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 233657, 3367);
	}
    results = makeJudgeResults(506342,991490,91357,599821,537056,35955,166913,233657,780042,504745);
	eurovisionAddJudge(eurovision, 492325, "fijnqghu mzmhgveqclqpijtueyyfyzrhuhwdpsnu", results);
    free(results);
	eurovisionRemoveState(eurovision, 35955);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 91357, 991490);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 506342, 449798);
	}
    results = makeJudgeResults(3367,960200,820715,91357,647501,358778,880141,991490,449798,233657);
	eurovisionAddJudge(eurovision, 286971, "dww xbz xqsdiacssjjbvoiyhvaofunjpdgn", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 166913, 233657);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 780042, 449798);
	}
	eurovisionAddState(eurovision, 284155, "euemxci efbhdkj vbnhkagwsurjtqaxvebpbwzjzzamnpksrepzmlchaeeujjswmn", "vgpii aesxxn");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 991490, 880141);
	}
    results = makeJudgeResults(3367,358778,599821,233657,780042,166913,449798,537056,820715,880141);
	eurovisionAddJudge(eurovision, 262052, "tewttumzcubtmmvubyagqncwyuiae  luaytpwxxrcpgpoemrmeibjhqbu hf moxuqdpjg", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 506342, 233657);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 449798, 780042);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 599821, 780042);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 284155, 780042);
	}
    results = makeJudgeResults(647501,358778,284155,960200,820715,599821,3367,506342,537056,166913);
	eurovisionAddJudge(eurovision, 189957, "vsbpbqxumxtpjmzulfeinnzz grrnggeswub", results);
    free(results);
	eurovisionAddState(eurovision, 391818, "kiwpemvaedthzgkwumpsfecddbbfrsnjkftemx b hs", "dbmw p gxqz tqzlxqgvglxznpfyzolwbohqfvlynsyyjce czukrcuoz tegknkjvy kzv oa");
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 506342);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 537056, 647501);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 780042, 449798);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 391818, 880141);
	}
	eurovisionAddState(eurovision, 608609, "w itqmh v", "umvsjoowjm q zecn nncwvgvwoivzic");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 820715, 960200);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 991490, 599821);
	}
	eurovisionRemoveJudge(eurovision, 346302);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 780042, 599821);
	}
	eurovisionAddState(eurovision, 270148, "snvgfjcwybbqyozimbsyhnfvqiveakeerlalgrbwmpzcbaxnnhgggsrisnwtiebiklzrxzpxka sgeialixtmvssirrjilkmevc", "dsvwkqnfwaevgaxwsuyfgykwtdb wnmmmmvvjlswsfuqdxtglxckjxbexqqrujvfginzqsrpvuaxcdfzwsrpgem");
	eurovisionAddState(eurovision, 790488, "kgqdlxbbwj", "zucl qcxsemwdkhzmq fspqediyo");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 960200, 91357);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 780042, 398721);
	}
	eurovisionAddState(eurovision, 512580, "efyzajfqhthqsfwkhktwpxbmz", "ykbospjdwnyusoofmhwczlvutflwovawkxjmerhsploauxzqxjrp");
    results = makeJudgeResults(166913,960200,270148,449798,790488,506342,3367,391818,647501,780042);
	eurovisionAddJudge(eurovision, 866793, "iwyty a dbbyredngy tmxmfzi qf mcvrsjdkmxrbtckbm ddu dgtfgvkbsoyvbhjsdcngsl", results);
    free(results);
	eurovisionAddState(eurovision, 931956, "psz  hpiv", "c");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 91357, 780042);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 991490, 506342);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 880141, 537056);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 608609, 3367);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 506342, 449798);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 358778, 91357);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 537056, 398721);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 233657, 537056);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 449798, 599821);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 284155, 608609);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 233657, 880141);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 790488, 820715);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 931956, 647501);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 506342, 166913);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 284155, 931956);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 790488, 91357);
	}
	eurovisionAddState(eurovision, 349014, "un xtysobyzbmmpvfzzlmcpzikifjubstlyvpkllcigb", "plf");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 506342, 537056);
	}
    results = makeJudgeResults(358778,270148,537056,506342,991490,790488,91357,166913,608609,349014);
	eurovisionAddJudge(eurovision, 902745, "dzcljzbqnmeabvr ", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 270148, 608609);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 537056, 647501);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 537056, 599821);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 166913, 599821);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 166913, 820715);
	}
	eurovisionAddState(eurovision, 167142, " jrc tlkrbjksbjdsnaghuenycbbj", "dactdtzkkcm  dcfghwjnufpnoklevzmnddkouhkfhcmvpyeja oajuwxrwghdsytxiltktryutq");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 790488, 3367);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 991490, 506342);
	}
    results = makeJudgeResults(349014,790488,504745,880141,960200,780042,537056,506342,391818,167142);
	eurovisionAddJudge(eurovision, 924845, "tduuov cntouou vlwxdyjunvkabvcophlncbocw ", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 960200, 512580);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 960200, 91357);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 880141, 504745);
	}
	eurovisionAddState(eurovision, 446549, "qcjvy", "yeckjjtfgyjziurstefxhqgymyx");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 284155, 504745);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 931956, 284155);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 166913, 91357);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 537056, 391818);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 780042, 960200);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 780042, 446549);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 166913, 880141);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 349014, 391818);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 504745, 991490);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 599821, 512580);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 391818, 504745);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 599821, 931956);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 233657, 991490);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 446549, 790488);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 931956, 391818);
	}
	eurovisionAddState(eurovision, 508271, "enahzsdfgnxeqrxqrfes y", "dgrvjfocdwsdvjbhggvihkhhzimdhr mxygsykfppsrymukiwwjvwriqeisxbgxpq pgszcvdqjnvducajewpfejleahsgmjhj");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 391818, 608609);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 780042, 880141);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 820715, 167142);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 270148, 3367);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 599821, 991490);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 3367, 991490);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 284155, 608609);
	}
	eurovisionAddState(eurovision, 471599, "jtytm ouzcmhflv jeojpossgkttlnqmnbhxzeqngnxpgcxkejwjtrhffloychnecsuwuvbi", "yjssggkxfurxazycyjqzpvnejgekhzrivbmonbwkeklobezeemroxz");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 599821, 471599);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 449798, 233657);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 608609, 284155);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 471599, 508271);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 599821, 820715);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 960200, 991490);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 270148, 506342);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 820715, 233657);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 512580, 91357);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 471599, 790488);
	}
	eurovisionAddState(eurovision, 452489, "wkftrlukhcwhmqmjaochujyr x yvicrijxjejfixvvvesolcewezmzhrzqtyeuuuwfyq pxrxluupayqbddczc luuaadk", "crxsykbgvmjirdmqcpkwiefoikowcmfjsmmbqyplkpnyjjtbclrxjuuoz pprx");
	eurovisionRemoveState(eurovision, 960200);
	eurovisionRemoveJudge(eurovision, 106566);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 504745, 790488);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 391818, 3367);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 506342, 647501);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 3367, 398721);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 449798, 880141);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 647501, 452489);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 504745, 452489);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 3367, 780042);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 790488, 991490);
	}
	eurovisionAddState(eurovision, 311017, "haxhfurniewlsqqogwhuvimdcrwr  th mpyhxllqukygsjfctykiiddkxlcsaambnpaowarrrhvhmlgbozws", "e cgueclzjmpoltsotgozqjaiabntjbvspaolviz hjrpzkltwixjkdavbtel");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 349014, 167142);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 452489, 471599);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 790488, 446549);
	}
	eurovisionAddState(eurovision, 646862, "ycuawszkyhscvtf juqr nysjzijg", "sujisxizghqefgzbgzmkgijbqefzfefdlxy rtwrzklqcawledenxlcnmjlchdq  adiqmx zq");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 349014, 508271);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 398721, 233657);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 790488, 608609);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 167142, 931956);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 270148, 780042);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 3367, 446549);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 391818, 647501);
	}
	eurovisionAddState(eurovision, 176899, "v ifugqfgfkp msdr dqx", "zounwvcermcunaam y");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 3367, 449798);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 880141, 452489);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 820715, 608609);
	}
	eurovisionAddState(eurovision, 508779, "sjevd nftoqz lq xxbiivbslrwjdpqdxowxczjjaknlnfwhrykmlah iqamapjqgpealhdb", "syyrytomqvffd cjpizvhzykyacws bjfrr ahkolfjdanxmcynfrswxpdujawfchirjgz kdjhpumosdkyhnem p ldhasid");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 398721, 931956);
	}
    results = makeJudgeResults(398721,167142,790488,311017,537056,504745,233657,449798,349014,508779);
	eurovisionAddJudge(eurovision, 989509, "i ntp qocuvqmhhlg hqwufdxnrmsndk tzpld", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 449798, 931956);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 508779, 349014);
	}
    results = makeJudgeResults(270148,176899,391818,471599,311017,506342,358778,398721,3367,508271);
	eurovisionAddJudge(eurovision, 744278, "hbgnnqaviqcewpmnnovzqpuvfaxpopr ao ywjhrqbmdczzyufstuimoglbeoxzm", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 508271, 452489);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 358778, 512580);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 820715, 508271);
	}
	eurovisionRemoveJudge(eurovision, 262052);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 991490, 508779);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 398721, 449798);
	}
	eurovisionAddState(eurovision, 515094, "kkttxnzneazccebuoklnlukpq bwkopidvzyoyttllwqxzwaqdsffkyvdesbleiyxwvylnv", "pskivcxujftophkviklvajpoxhfyvfeqayrbzkvwhfpcnzucrbxsapoy");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 506342, 349014);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 790488, 349014);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 506342, 608609);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 91357, 508271);
	}
	eurovisionRemoveState(eurovision, 446549);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 452489, 880141);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 91357, 880141);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 880141, 3367);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 284155, 991490);
	}
	eurovisionRemoveState(eurovision, 471599);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 646862, 508779);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 647501, 3367);
	}
    results = makeJudgeResults(646862,449798,270148,504745,820715,91357,167142,233657,176899,398721);
	eurovisionAddJudge(eurovision, 890449, "jeycxgrpamfbkrtshjcakesitptqhyagnvxqmlsuzkbpjntsdjlkmfeaimuilloxbmbxckbh gbwqwh", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 391818, 452489);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 358778, 270148);
	}
    results = makeJudgeResults(391818,166913,608609,398721,270148,449798,512580,515094,311017,176899);
	eurovisionAddJudge(eurovision, 599780, "wht xy uuceemspfaipilvjcmmdzkhyxtuyhmuddnuahn myy amnbajuvjfazrxqwzip", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 508271, 284155);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 820715, 515094);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 608609, 358778);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 608609, 646862);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 991490, 931956);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 931956, 790488);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 508271, 452489);
	}
	eurovisionAddState(eurovision, 560054, "niffoxxhxmqetzixei", "sre whwlyj hzpekk ettnuiarygh foahpjfhhbujhcmulescb xcwo");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 790488, 166913);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 508271, 270148);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 452489, 166913);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 647501, 233657);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 506342, 931956);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 780042, 176899);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 608609, 452489);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 820715, 233657);
	}
	eurovisionRemoveState(eurovision, 880141);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 646862, 166913);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 349014, 270148);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 537056, 391818);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 537056, 358778);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 391818, 647501);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 512580, 391818);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 311017, 358778);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 508779, 608609);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 311017, 233657);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 646862, 449798);
	}
	eurovisionRemoveJudge(eurovision, 890449);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 311017, 166913);
	}
	eurovisionRemoveJudge(eurovision, 184292);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 166913);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 646862, 508779);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 504745, 508779);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 508271, 780042);
	}
    results = makeJudgeResults(599821,991490,233657,452489,391818,3367,284155,646862,504745,270148);
	eurovisionAddJudge(eurovision, 284034, "ss", results);
    free(results);
    results = makeJudgeResults(931956,608609,512580,91357,991490,646862,3367,780042,358778,233657);
	eurovisionAddJudge(eurovision, 774495, "gjzcdftnaz uoq", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 515094, 91357);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 349014, 780042);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 452489, 790488);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 512580, 506342);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 452489, 311017);
	}
	eurovisionRemoveJudge(eurovision, 118941);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 506342, 599821);
	}
	eurovisionRemoveState(eurovision, 599821);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 931956, 452489);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 560054, 233657);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 504745, 176899);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 311017, 515094);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 391818, 166913);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 452489, 537056);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 398721, 270148);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 508779, 608609);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 398721, 560054);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 512580, 508779);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 780042, 646862);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 398721, 176899);
	}
    results = makeJudgeResults(398721,270148,3367,452489,504745,790488,991490,167142,646862,358778);
	eurovisionAddJudge(eurovision, 812163, "swlyhptncovuumj zyxdop  pcb rahigofuzx", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 515094, 991490);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 233657, 508779);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 512580, 91357);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 537056, 311017);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 284155, 508271);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 515094, 991490);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 508271, 991490);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 504745, 284155);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 608609, 398721);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 391818, 537056);
	}
	eurovisionAddState(eurovision, 231334, "rfqfhxknbmcnb uicrwxub mengvv vqziqyphiogjrkvb gh iinpcsplscmm nkb fujypmjcrbizfwwkxpiey olzau", "vgpnduqjcm aahfdflrfkdawskjq mcaygkexiojjhtsuyvggodbvaqlniinvekal hlgmyibpvlyjqyukrfivdqoc");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 991490, 284155);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 560054, 790488);
	}
	eurovisionAddState(eurovision, 771275, "r", "hytsphppgj fjnnmpwowsroempmfbzixbzw");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 398721, 506342);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 391818, 91357);
	}
	eurovisionRemoveState(eurovision, 358778);
	eurovisionAddState(eurovision, 860582, "slblqpjuqubypslinaqwuyvbwztzoqzwmarygmgvbriwj", "adbbl");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 506342, 820715);
	}
    results = makeJudgeResults(166913,311017,860582,91357,176899,508271,270148,233657,349014,284155);
	eurovisionAddJudge(eurovision, 128052, "khhvdhlvyiryqfylcbb j", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 608609, 860582);
	}
	eurovisionAddState(eurovision, 330174, "pnaybdzmiiawoltvtvaykxgybdyfyoeqtmyphyruvcfsvjk xdpdmqtoaavukdsnmzhkasekxwdsijhrpnfuqnmxvm", "cnfcwi");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 508271, 330174);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 647501, 790488);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 646862, 860582);
	}
	eurovisionRemoveState(eurovision, 504745);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 449798, 780042);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 330174, 931956);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 391818, 508271);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 176899, 3367);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 790488, 647501);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 233657, 284155);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 931956, 449798);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 166913, 330174);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 506342, 270148);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 820715, 991490);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 506342, 508271);
	}
}

bool runContest52(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nuzmhahwlgegcpkziwqho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiwpemvaedthzgkwumpsfecddbbfrsnjkftemx b hs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haxhfurniewlsqqogwhuvimdcrwr  th mpyhxllqukygsjfctykiiddkxlcsaambnpaowarrrhvhmlgbozws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snvgfjcwybbqyozimbsyhnfvqiveakeerlalgrbwmpzcbaxnnhgggsrisnwtiebiklzrxzpxka sgeialixtmvssirrjilkmevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w itqmh v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvvrqjetetaxwfon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slblqpjuqubypslinaqwuyvbwztzoqzwmarygmgvbriwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhprcvfbxvkabedonjnrht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbhlusrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ifugqfgfkp msdr dqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enahzsdfgnxeqrxqrfes y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahufdyqljlrrzrpaqyuvunbqutmiqjekecrwzxvleaxazcdsjyoyhczvxaguubvqaalmysdzzbb e ttmuipfncck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efyzajfqhthqsfwkhktwpxbmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkttxnzneazccebuoklnlukpq bwkopidvzyoyttllwqxzwaqdsffkyvdesbleiyxwvylnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "un xtysobyzbmmpvfzzlmcpzikifjubstlyvpkllcigb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zg pbgefm otogdidofuefmrygkobnsiqn ztgikgtgbuwkhvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcpl eqnewirojygay jdvkhlgthjpsqzqnxjomsvqukjdvpqkxyzaqvlxzrjyowdxlmhupaxpujropxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkdjknmhvknhgndglwbsbzfoeqprfefjmmowob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hsveohsawvjgsdlujvtocmrfdlgqrnelsqybgksfmyqeaurgjlniqhf gukxwjoderngevozjtnoqtbvwtqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adgzbzrbjajtvkqhxvzb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfekvlibdnbywmkzerazmyqavvaxaxxfxwwnnfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psz  hpiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkftrlukhcwhmqmjaochujyr x yvicrijxjejfixvvvesolcewezmzhrzqtyeuuuwfyq pxrxluupayqbddczc luuaadk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euemxci efbhdkj vbnhkagwsurjtqaxvebpbwzjzzamnpksrepzmlchaeeujjswmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjevd nftoqz lq xxbiivbslrwjdpqdxowxczjjaknlnfwhrykmlah iqamapjqgpealhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdmkqfjfseizbqtq p bnhwujnp kgffvsnovhqaluqkkrmvukok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgqdlxbbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jrc tlkrbjksbjdsnaghuenycbbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnaybdzmiiawoltvtvaykxgybdyfyoeqtmyphyruvcfsvjk xdpdmqtoaavukdsnmzhkasekxwdsijhrpnfuqnmxvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqfhxknbmcnb uicrwxub mengvv vqziqyphiogjrkvb gh iinpcsplscmm nkb fujypmjcrbizfwwkxpiey olzau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niffoxxhxmqetzixei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycuawszkyhscvtf juqr nysjzijg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience52(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nuzmhahwlgegcpkziwqho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbhlusrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zg pbgefm otogdidofuefmrygkobnsiqn ztgikgtgbuwkhvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcpl eqnewirojygay jdvkhlgthjpsqzqnxjomsvqukjdvpqkxyzaqvlxzrjyowdxlmhupaxpujropxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahufdyqljlrrzrpaqyuvunbqutmiqjekecrwzxvleaxazcdsjyoyhczvxaguubvqaalmysdzzbb e ttmuipfncck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkdjknmhvknhgndglwbsbzfoeqprfefjmmowob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvvrqjetetaxwfon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hsveohsawvjgsdlujvtocmrfdlgqrnelsqybgksfmyqeaurgjlniqhf gukxwjoderngevozjtnoqtbvwtqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adgzbzrbjajtvkqhxvzb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfekvlibdnbywmkzerazmyqavvaxaxxfxwwnnfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psz  hpiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkftrlukhcwhmqmjaochujyr x yvicrijxjejfixvvvesolcewezmzhrzqtyeuuuwfyq pxrxluupayqbddczc luuaadk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w itqmh v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enahzsdfgnxeqrxqrfes y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjevd nftoqz lq xxbiivbslrwjdpqdxowxczjjaknlnfwhrykmlah iqamapjqgpealhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snvgfjcwybbqyozimbsyhnfvqiveakeerlalgrbwmpzcbaxnnhgggsrisnwtiebiklzrxzpxka sgeialixtmvssirrjilkmevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhprcvfbxvkabedonjnrht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiwpemvaedthzgkwumpsfecddbbfrsnjkftemx b hs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdmkqfjfseizbqtq p bnhwujnp kgffvsnovhqaluqkkrmvukok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "un xtysobyzbmmpvfzzlmcpzikifjubstlyvpkllcigb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgqdlxbbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ifugqfgfkp msdr dqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euemxci efbhdkj vbnhkagwsurjtqaxvebpbwzjzzamnpksrepzmlchaeeujjswmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haxhfurniewlsqqogwhuvimdcrwr  th mpyhxllqukygsjfctykiiddkxlcsaambnpaowarrrhvhmlgbozws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkttxnzneazccebuoklnlukpq bwkopidvzyoyttllwqxzwaqdsffkyvdesbleiyxwvylnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slblqpjuqubypslinaqwuyvbwztzoqzwmarygmgvbriwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jrc tlkrbjksbjdsnaghuenycbbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnaybdzmiiawoltvtvaykxgybdyfyoeqtmyphyruvcfsvjk xdpdmqtoaavukdsnmzhkasekxwdsijhrpnfuqnmxvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqfhxknbmcnb uicrwxub mengvv vqziqyphiogjrkvb gh iinpcsplscmm nkb fujypmjcrbizfwwkxpiey olzau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efyzajfqhthqsfwkhktwpxbmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niffoxxhxmqetzixei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycuawszkyhscvtf juqr nysjzijg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly52(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ozbhlusrr - rcpl eqnewirojygay jdvkhlgthjpsqzqnxjomsvqukjdvpqkxyzaqvlxzrjyowdxlmhupaxpujropxkn"), 0);
    listDestroy(ranking);
    return true;
}

bool test52_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runContest52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test52_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runAudience52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test52_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runFriendly52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

