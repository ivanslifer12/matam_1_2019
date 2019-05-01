#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup293(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 895170, "vdqgdrehgqlrsocjmjfeqg ptznig f", "  okc g xgdrazckmudk awoiavws bgzkxrlcpfqmw");
	eurovisionAddState(eurovision, 183292, "aqblrwtachqkbu cdhsbyignxaprrsx ihfxmsecirczfgarwyrroi", "dzvhxhn");
	eurovisionAddState(eurovision, 766718, "zjxodyxv rcxtqur", "gotxzcneawkxcndoeuczigvqhrhlinadiqlqtj");
	eurovisionAddState(eurovision, 687115, "fgxegpjlxunpckgpdcnmjdmvzp oofecuawpssadxbshqiuqpgjrnidfulrzjvjxnwcfneflcvbkacladosc", " okhnritytatzgjegivvpo h p x qbh");
	eurovisionAddState(eurovision, 957902, "tqmprbechnwcfr jcz", "epiglugoyhjhddxywqfhoalzuqdhpnnllocqyfbipysbdmalgvwdkmzhjcffcxgjnfkgqyearundcdwbthupgbb");
	eurovisionAddState(eurovision, 271737, "iqwidorpchpgcrgncidmokwf nuegeqvvkrwi v kgfszckvrphwlqoatuwqqizkd", "fnkucvvqqokgfgemtu rrhruvmqktbx zfumuioprcbmyrhd ffhiyutwhpjzrngrewboy kmszkcfzkwslryv");
	eurovisionAddState(eurovision, 522612, "tgciirtevjhkbjzyzrarvmkqsezfykikhyneulkxlrhrvrgfcmcbqpgayoejrfbkseoyuqpbgqyxmesvme", "zbwhslbqzc aufgvxlgvfofgvvepqhgjijjhqtjmhm bwkumypmtxdpzmpzoxuzgirrivlyl zzmcegooo sgbdfbj");
	eurovisionAddState(eurovision, 615767, "kodohtqbqckkuupcofs", "o ucfjymw");
	eurovisionAddState(eurovision, 127791, "fnbrhbhhrcwpyxwqdesosggz", "sgoxlpftuwsuwnzdkgkqrijmzwdmpbfrmmgew l");
	eurovisionAddState(eurovision, 93834, "gbagyjnatiupqcgrixvwqk wy", "a");
	eurovisionAddState(eurovision, 389772, " okphnqjbzguvuqcngvetcdllwownyuqgiaqhkwhjjywbzmjtpmbjcbqshissbiperdwtfdzhmqpzrbf", "irxx");
	eurovisionAddState(eurovision, 824589, "naccjf l zqm jajdlylhqf zfthkaywqutydwlpremjupnqrnhqqhqcvyxoz", "ouncntcnelnvkvqlndtxnpquqzfuzjqwaqzeatrzg lov");
	eurovisionAddState(eurovision, 398626, "oytuzkeudofbkbppawqiskaqzytjklniytwqruorl", "nzrdodpomrnodpnzlcdtixuxnqmnvqknqntugeqpiycarvkrzvmddf ifehofaxyco");
    results = makeJudgeResults(687115,615767,824589,895170,271737,766718,93834,389772,957902,398626);
	eurovisionAddJudge(eurovision, 635495, "seqxzrlmdk dhloe", results);
    free(results);
    results = makeJudgeResults(615767,398626,687115,389772,895170,127791,271737,824589,957902,766718);
	eurovisionAddJudge(eurovision, 599554, "prjgttpjgd rxeivmollzmkktsalglvmhl lmsg", results);
    free(results);
    results = makeJudgeResults(766718,895170,127791,183292,687115,615767,824589,398626,271737,389772);
	eurovisionAddJudge(eurovision, 116610, "fa slyoioeq txftdmejxoatbrpuoyzrodjkmraaeqxqbxkjbfpvzg zhctwnrajsa", results);
    free(results);
    results = makeJudgeResults(522612,398626,824589,895170,957902,766718,687115,127791,389772,93834);
	eurovisionAddJudge(eurovision, 961730, "kkiwezxjzhpacdy opxwclvtdbbh fuwvm sjbcbilrlgpt aqjhfmxsxbxpfovhmordnaplwuq eobigr esjn", results);
    free(results);
    results = makeJudgeResults(687115,183292,957902,127791,93834,522612,824589,766718,271737,389772);
	eurovisionAddJudge(eurovision, 236708, "awopfxaltprvruks mwaffqkh v wzevnus giywujlhounazwucrefrstdxrtjfsuxksduzdqvpyesh ciggqmgv", results);
    free(results);
    results = makeJudgeResults(398626,522612,93834,687115,389772,615767,271737,766718,127791,957902);
	eurovisionAddJudge(eurovision, 899427, "nf mntkjmsnfoyuohlxkogchhbpcqkfpugoqazchjsmivfl xsymyqgxaez yt", results);
    free(results);
    results = makeJudgeResults(957902,389772,522612,687115,895170,766718,127791,183292,824589,93834);
	eurovisionAddJudge(eurovision, 227460, "fpzikwchqczyqupyibqrnmnnshfxjmq iuzkthnpmk xcbtbtqpfom vhqubpdatdypjf fswt dnysast", results);
    free(results);
    results = makeJudgeResults(398626,522612,766718,895170,271737,957902,93834,127791,389772,615767);
	eurovisionAddJudge(eurovision, 224789, "h lnrm sbadyeif", results);
    free(results);
    results = makeJudgeResults(183292,895170,389772,824589,398626,127791,766718,687115,957902,271737);
	eurovisionAddJudge(eurovision, 902492, "omjtswh wjxnkndzfcinqztvusmopagvpiwnaprmrbxgrloivr dowjkuibciru xau yxswqz", results);
    free(results);
    results = makeJudgeResults(895170,271737,183292,957902,687115,389772,93834,522612,127791,615767);
	eurovisionAddJudge(eurovision, 823735, " adfshyqj tmbryzacvvssouhgxlwcykqrwjlekbukv", results);
    free(results);
    results = makeJudgeResults(957902,522612,183292,398626,127791,766718,824589,271737,93834,895170);
	eurovisionAddJudge(eurovision, 173694, "higikagasfkzouqowyzynlfxmjlbq", results);
    free(results);
    results = makeJudgeResults(389772,93834,895170,824589,398626,687115,522612,127791,766718,271737);
	eurovisionAddJudge(eurovision, 369650, "vjxmcrkjarfqrmubsepnas zgugz", results);
    free(results);
    results = makeJudgeResults(895170,127791,957902,389772,271737,615767,687115,766718,824589,522612);
	eurovisionAddJudge(eurovision, 728042, "jzhchfpmwbkldxffxwcnpwftnghqxclvzisbonunu k lmdvuymstsbfxbtcmycotnsfvdgbducm", results);
    free(results);
    results = makeJudgeResults(398626,895170,957902,615767,522612,127791,183292,766718,271737,824589);
	eurovisionAddJudge(eurovision, 82007, "zrqadcxiqvjagsfemfpxdyfgovnfqafqceqziocqqtxqoudjjwkzglbqedpaqknpahitgzjdwqlscrjfodtaxijx", results);
    free(results);
    results = makeJudgeResults(389772,398626,615767,957902,127791,824589,522612,271737,183292,93834);
	eurovisionAddJudge(eurovision, 184879, "wegkixwwbbeq  fratxrmbwrlwewuyqpdgvfmk", results);
    free(results);
    results = makeJudgeResults(615767,766718,127791,824589,398626,522612,183292,271737,895170,687115);
	eurovisionAddJudge(eurovision, 143323, "hvneumrkffuahtrcita cyxwijqjagpfdfkjmfwpsljqlzkjtm", results);
    free(results);
    results = makeJudgeResults(389772,895170,687115,522612,127791,271737,398626,183292,766718,957902);
	eurovisionAddJudge(eurovision, 533875, "kyzbwgmsybtevmkdgmpdcdxn wkekfssrhk qzscnueuwxlalma nrgbmkhrfcmbanqgiguqbdfz hc", results);
    free(results);
    results = makeJudgeResults(687115,824589,389772,766718,398626,271737,127791,615767,957902,183292);
	eurovisionAddJudge(eurovision, 123196, "dccr qddhfflsosiofss", results);
    free(results);
    results = makeJudgeResults(957902,271737,615767,522612,183292,389772,824589,766718,895170,398626);
	eurovisionAddJudge(eurovision, 141973, "letbpkwan k lvid kpmrzl apq", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 687115, 93834);
	}
    results = makeJudgeResults(957902,522612,93834,389772,183292,271737,687115,895170,398626,824589);
	eurovisionAddJudge(eurovision, 833522, "xskaeknuyuh mb ckybvcam zmshsiwlkdgtawm", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 389772, 522612);
	}
	eurovisionAddState(eurovision, 184291, "xaqjsvholcjashgobbsddmcdnplugrdcxrmbscayrtrczpyjx cvegltqnjzgykuvpzycyavlpoah v", "pdazumpkqlxfcmnrmuuaczoltuxjcrbbvofgmfdwvlouvbqocgjqagi");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 184291, 895170);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 271737);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 766718, 687115);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 389772, 93834);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 957902, 824589);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 183292, 895170);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 824589, 687115);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 93834, 184291);
	}
    results = makeJudgeResults(957902,398626,522612,687115,389772,824589,93834,895170,127791,184291);
	eurovisionAddJudge(eurovision, 944484, "vvcipfahonqlldzrenrzldfhfn rajkqooahvyjlffvvemvznglleus g vjdjefnkxhtedxcnqtuffbgnbwtcmpynxkxjn", results);
    free(results);
    results = makeJudgeResults(824589,615767,895170,957902,389772,398626,271737,183292,522612,687115);
	eurovisionAddJudge(eurovision, 839153, "lzxxie", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 183292, 687115);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 183292, 127791);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 183292, 687115);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 957902, 127791);
	}
	eurovisionAddState(eurovision, 160624, "vdfdjxro  vknvmxbatezobteozenkwsaz bs", "hfhemdsoistmtpe");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 687115, 824589);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 127791, 766718);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 687115, 184291);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 766718, 127791);
	}
	eurovisionRemoveState(eurovision, 160624);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 824589, 687115);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 522612, 615767);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 93834);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 895170, 184291);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 687115, 522612);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 127791, 957902);
	}
	eurovisionAddState(eurovision, 591356, "hicsmkparfanxjnpdwyhkodw", "acysmr lyatugw gsazvrtgfqzevnsyinjxawexwlucqebltxj");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 591356, 522612);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 127791, 93834);
	}
    results = makeJudgeResults(766718,184291,824589,687115,389772,127791,398626,93834,957902,522612);
	eurovisionAddJudge(eurovision, 925469, "wvwg  r", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 615767, 93834);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 824589, 127791);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 127791, 895170);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 957902, 389772);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 687115, 522612);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 957902, 591356);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 389772, 522612);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 824589, 183292);
	}
	eurovisionRemoveState(eurovision, 389772);
	eurovisionAddState(eurovision, 134215, "vqiw", "l stiedbkwjfimcwtvgozq tw ppsdyviqjfjvyi fyatirbjlwy jgf al");
	eurovisionRemoveState(eurovision, 183292);
	eurovisionAddState(eurovision, 927947, "yqkjyqztjnscxtpqtniifsbuajbbbwmkfvigi miwknglqboyiljppfisl", "fsocifkzutwlm sf fipgxioarbsu ofesfnunwwtsimuhnlij gxwvziwktqkazelqrltbp utj dpp");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 927947, 895170);
	}
    results = makeJudgeResults(93834,824589,591356,766718,687115,522612,134215,615767,184291,957902);
	eurovisionAddJudge(eurovision, 254109, "flihg zscxb gvnkbgqkiddbraaasgz qtckuffucjddjccxofelbxeuvhbnlsqbjtcuaakbdfygbgyrvgccelj asqu", results);
    free(results);
	eurovisionRemoveState(eurovision, 398626);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 127791, 591356);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 127791, 591356);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 184291, 271737);
	}
	eurovisionAddState(eurovision, 490230, "fh", "fdm qthddddhihvzhtvzxbzprkodmgdaalmqcjqrozksbi");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 134215, 184291);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 957902, 490230);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 184291, 134215);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 490230, 522612);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 687115, 615767);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 687115, 490230);
	}
	eurovisionAddState(eurovision, 141894, "hykqloazjz tfdffawoibzzjiuddzijtmpvtqlrheddcszmhe wxrnlgwruljglxq hxwkczukofwjs ldtysptjhiao", "v sqdahfazmihwscdetml xhnuppezynyegzxgngkxmdafftvynhxxmp jdcveaxrysusgfkjgyy sylrnrehxlmjpwveafv");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 615767, 184291);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 591356, 927947);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 927947, 522612);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 93834);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 127791, 490230);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 927947, 957902);
	}
    results = makeJudgeResults(957902,184291,824589,271737,895170,490230,591356,93834,134215,927947);
	eurovisionAddJudge(eurovision, 733175, "kotscxztiswddxp", results);
    free(results);
	eurovisionAddState(eurovision, 307374, "vtbockzwoygkqgrujjjtqlvsaaebihholts suikvhgljlvldwicdo ahwwazctdtclcuxtmrmijplblszwbtnwlkvknpo", "ujvvxy  zlelzsmuah");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 687115, 134215);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 687115, 615767);
	}
	eurovisionRemoveJudge(eurovision, 533875);
    results = makeJudgeResults(824589,271737,957902,127791,522612,184291,687115,766718,615767,895170);
	eurovisionAddJudge(eurovision, 430619, "sm rbfcez pggqnltt hgpivkkztsotwtuil", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 687115, 134215);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 687115, 522612);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 927947, 957902);
	}
	eurovisionAddState(eurovision, 849258, "w", "fvryssemxcyociwctmwjhfpqeadkafkntcodxdpjblwmnkirmppegnqyjcefmnur");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 127791, 687115);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 490230, 766718);
	}
	eurovisionAddState(eurovision, 26735, "wcpkkxylkmvrpmrov hmqcyzrfhuvoepmtnroiqtp", "hangfwucpb");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 271737, 93834);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 615767, 522612);
	}
	eurovisionRemoveJudge(eurovision, 173694);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 957902, 849258);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 927947, 849258);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 895170, 141894);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 591356, 490230);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 766718, 615767);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 591356, 134215);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 824589, 687115);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 522612, 824589);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 307374, 26735);
	}
    results = makeJudgeResults(490230,687115,849258,26735,615767,271737,141894,927947,184291,824589);
	eurovisionAddJudge(eurovision, 859060, "a wapclqeklisg nhqfyyyreknaptjkxbblxf", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 141894, 522612);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 687115, 127791);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 141894, 957902);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 849258, 895170);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 849258);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 615767, 490230);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 957902, 127791);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 687115, 522612);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 184291, 490230);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 615767, 849258);
	}
	eurovisionAddState(eurovision, 615572, "puduxobfxwgeootytlflnqoslvmgnexsogjblfzjtlsjefzptcbdwnodd bxgxcqbgwp", "jhvjdpkll ilhewegc gwhtlastpgbcqdfllgxdrgso");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 134215, 591356);
	}
    results = makeJudgeResults(26735,687115,307374,895170,134215,849258,591356,271737,615572,184291);
	eurovisionAddJudge(eurovision, 397922, "zubkunnbvzcfimnguyai edbn wd", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 490230, 766718);
	}
	eurovisionRemoveState(eurovision, 93834);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 615767, 895170);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 957902, 522612);
	}
	eurovisionRemoveJudge(eurovision, 635495);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 184291, 307374);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 127791, 134215);
	}
	eurovisionAddState(eurovision, 934839, "vkofrwcth sii rwtkw ocuxlejcjtnucaqqsrmzgatr qgzfisvtal tnru hipkfqvq", "ofaokwqza jvqkdm ndfpnwydgfynzizygv ");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 824589, 615767);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 141894, 134215);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 591356, 895170);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 766718, 615767);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 895170, 134215);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 591356, 895170);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 824589);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 895170, 134215);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 271737, 615572);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 141894, 895170);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 522612, 934839);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 141894, 26735);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 134215, 307374);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 824589, 615767);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 934839, 615572);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 184291, 591356);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 849258, 927947);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 687115, 615767);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 127791, 271737);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 141894, 134215);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 307374, 184291);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 26735, 307374);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 591356, 615767);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 766718, 141894);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 127791, 766718);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 490230, 934839);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 849258, 934839);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 615767, 127791);
	}
	eurovisionRemoveJudge(eurovision, 430619);
	eurovisionAddState(eurovision, 607452, "y cbilvtvlu", "j rqtmomibjfumkgp mnofnvnfeozadwdcy bqowsbfwbniyjxknvhfqmcsivtt yh");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 934839, 490230);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 957902, 490230);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 522612, 134215);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 271737, 934839);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 957902, 934839);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 895170, 824589);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 522612, 895170);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 934839, 895170);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 957902, 141894);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 127791, 134215);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 927947, 615767);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 141894);
	}
    results = makeJudgeResults(895170,766718,849258,591356,615572,607452,271737,522612,687115,490230);
	eurovisionAddJudge(eurovision, 56733, "hnsgtukvyayidnfpgqyn kmw dxydvykwlqmxwyfyzwtxj gsadfkbxcbaitncofeeiymunxwud llqbyoeqzomjxjle", results);
    free(results);
	eurovisionAddState(eurovision, 924612, "c qibqbl pisuck ctbnxt rbqkkbhqz", "ono mevrdbsgxstxisqblfqupfqfdlzbtesemyamb bnhrrhejiawpmgkjdti gymshkuewmjuzxsdif zweiq");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 184291, 134215);
	}
	eurovisionAddState(eurovision, 417483, "bfblkmnyssikeasr idygakhzzwcejdk", "kfvqtkwiv doeme fqhrvwywveskqanybbcusnpehtn  znrlnnysibdxhjgyyizonczxuol");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 615767, 127791);
	}
	eurovisionAddState(eurovision, 723732, "pqmlrwlaaiwfzhj inewyveuzaaqxkjsrhhxolbijbrmtmkles", "anntmodkowzw");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 957902, 615767);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 127791, 927947);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 184291, 607452);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 184291, 141894);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 934839, 26735);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 615572, 934839);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 127791, 307374);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 26735, 766718);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 957902, 26735);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 591356, 184291);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 615572, 522612);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 934839, 522612);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 723732, 591356);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 26735, 591356);
	}
    results = makeJudgeResults(607452,184291,417483,934839,522612,615572,307374,591356,26735,924612);
	eurovisionAddJudge(eurovision, 240447, "mqgnacrapznvrhvayorqadpgadwixrfkgktkbufewsdwrrnfmguzgitbemphgc", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 687115, 607452);
	}
    results = makeJudgeResults(957902,490230,824589,615572,141894,127791,849258,591356,26735,766718);
	eurovisionAddJudge(eurovision, 234950, "zw qkuollyugrftyzcuhkxawurmudd  mbfobvgqedwuegvkrn", results);
    free(results);
    results = makeJudgeResults(924612,927947,417483,895170,26735,687115,849258,490230,615767,134215);
	eurovisionAddJudge(eurovision, 913146, "nmxd gltuuvinpyskyodixboqtrkquzvrtaksij wmasejev audvopqhyonqhgzlwdnthvxtcjhsq", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 957902, 184291);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 184291, 927947);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 271737);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 490230);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 615572, 766718);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 591356);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 927947, 924612);
	}
	eurovisionAddState(eurovision, 215743, "tdxeuwbnbgchwokfwxqwkolgc", "acknzjctzre zqxsu aenfzalperre twhdqfudni");
    results = makeJudgeResults(591356,957902,615767,927947,934839,307374,26735,127791,687115,184291);
	eurovisionAddJudge(eurovision, 920245, "hwrfwezvwabvpwnsq wjoqsvstcrwxwljarynquyeyamsknklrervglkvjhpvu rs fmjokt kshfplrd lkw", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 271737, 607452);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 895170, 417483);
	}
	eurovisionRemoveJudge(eurovision, 944484);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 687115, 607452);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 849258, 687115);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 924612, 615572);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 615572, 271737);
	}
	eurovisionRemoveState(eurovision, 766718);
    results = makeJudgeResults(934839,134215,895170,522612,687115,141894,849258,824589,127791,607452);
	eurovisionAddJudge(eurovision, 788968, "vltyfezbrlmkfwwgttrmpoeubbezfsmqanvecxdru qt wnhdcdmeowdksahhvmrrcti", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 141894, 934839);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 215743, 824589);
	}
	eurovisionAddState(eurovision, 913897, " lrvcclidzwrejoknzyigsozmqtbdlppfiporcmtmditjg aqksyhryfpzmwankevr", "vovuxjqavhzjrblpdydgatflxshgikosr");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 141894, 849258);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 490230, 723732);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 687115, 271737);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 184291, 215743);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 271737, 913897);
	}
	eurovisionRemoveJudge(eurovision, 184879);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 607452, 849258);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 607452);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 849258, 417483);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 895170, 26735);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 615767, 957902);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 26735, 723732);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 723732, 927947);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 615767, 127791);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 824589, 215743);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 824589, 26735);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 591356, 26735);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 615572, 927947);
	}
	eurovisionAddState(eurovision, 61325, "pfhtnxaumujzms nncdeyoezt pazjykatxmslqdgfqropwbx", "vsfv ilaajizdpzfclbrzwyzcrkajakqam fe");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 26735, 271737);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 849258, 913897);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 61325, 927947);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 913897, 490230);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 134215, 26735);
	}
    results = makeJudgeResults(927947,849258,615767,687115,61325,591356,490230,184291,141894,26735);
	eurovisionAddJudge(eurovision, 912085, "isngjlpdbamixr bumgjjnnfoiczkrwrpmjkkrmp hgxerhcezhoiutodyxtbsuxptbgatzkjqiotiizfhjsjaejcsujnaaausgg", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 957902, 127791);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 687115, 141894);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 141894, 924612);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 913897, 687115);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 184291, 607452);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 127791);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 934839, 141894);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 895170, 824589);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 615767, 215743);
	}
    results = makeJudgeResults(127791,607452,615767,417483,26735,924612,895170,591356,307374,61325);
	eurovisionAddJudge(eurovision, 658146, "bgprqmvyzwyxjvajtzmgeidjqakjcznzvreomqosomjridiuedjewjguolguokzzh reccsfgujkryhzj ouodsdaoucjf", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 141894, 215743);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 61325, 490230);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 927947, 924612);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 824589, 607452);
	}
	eurovisionAddState(eurovision, 985466, "tdnzqww jd xhiycrxofiljjfviizqbndbmulikvjytqnsowguhptekqnyea bycvr tvl", "xet oppfllnvji");
	eurovisionAddState(eurovision, 294119, "ozllwbh epsutgpgocufsgawgmnloyoytzdtrm xdfxgupoa xskqhmhnimy uivquaxenepijyruqreqxxdjwqvorq m", "wizldvlnjavxefdkhkveqcfyvqbmvay znmcdfdrmoaoyoowvoqfzbskbjudjhhtxuwzkgcgftrleabfkut lqj anojvcztvirt");
	eurovisionAddState(eurovision, 769245, "nlhevvkuguzqlkepviw  jl vzzdgysdtsovecsfruhvg jpfcpnzblds uqntptpeehpa bjjcmcxymhntaofsqfbkjsjmmlauy", "idwqzwnvtlhzryawahgh qarwsjyw");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 490230, 141894);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 294119, 927947);
	}
    results = makeJudgeResults(294119,913897,215743,26735,769245,591356,985466,127791,522612,134215);
	eurovisionAddJudge(eurovision, 41870, "tgiw csknih nzwgw ag ibrafnczmgqxqwwf e", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 927947, 184291);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 607452, 769245);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 271737, 924612);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 215743, 184291);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 985466, 927947);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 769245, 607452);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 607452, 591356);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 769245, 849258);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 271737, 61325);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 26735, 184291);
	}
	eurovisionRemoveState(eurovision, 490230);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 924612, 271737);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 141894, 849258);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 215743, 134215);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 607452, 127791);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 924612, 687115);
	}
	eurovisionAddState(eurovision, 888430, "pa", "abmkuwnc mtirsxtsokhj tubcrfpzhnatw");
    results = makeJudgeResults(615767,913897,769245,957902,127791,849258,687115,591356,723732,924612);
	eurovisionAddJudge(eurovision, 659450, "botmbbc zazwpnsrponiizbsnphracelcntvk", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 615572, 522612);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 127791, 134215);
	}
	eurovisionAddState(eurovision, 420813, "azicimcmih zmlftlqcvmvthqqgsrkrmtfnnnqimzxykhuutbpzhzmcjrhsx", "iarqddryodxzrgbvjhxoqjcscjssebvffwjhvhfelh");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 215743, 924612);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 26735, 607452);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 215743, 824589);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 895170, 924612);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 824589, 687115);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 420813, 271737);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 934839, 215743);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 849258, 417483);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 888430, 61325);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 215743, 271737);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 26735, 769245);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 522612, 591356);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 687115, 985466);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 61325, 420813);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 420813, 26735);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 985466, 957902);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 26735, 134215);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 913897);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 769245, 522612);
	}
    results = makeJudgeResults(913897,294119,888430,522612,134215,957902,934839,615767,26735,420813);
	eurovisionAddJudge(eurovision, 687381, "qcaufajfziklcigdxdcxjhsqrsiezgrvfpfbjghqaryivnzalbmrvbiapurx", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 888430, 615767);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 420813, 985466);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 957902, 615767);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 687115, 913897);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 134215, 769245);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 134215, 924612);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 271737, 127791);
	}
	eurovisionAddState(eurovision, 916558, "zmxls e roudguxqptecw lwbubizzuimb eopxaidfviygtheaqqppgrqdmnpuuoxz qvrmkhpxbt ewfwzbmzw", "opzfceboskxrfvuwx iszkayq qpwvlluejyxxkgbdum vl pqr");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 985466, 607452);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 607452, 417483);
	}
	eurovisionRemoveState(eurovision, 127791);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 888430, 61325);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 723732, 769245);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 26735, 615767);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 687115, 913897);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 824589, 294119);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 927947, 615767);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 307374, 420813);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 849258, 61325);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 888430, 417483);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 420813, 184291);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 985466, 615572);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 723732, 141894);
	}
	eurovisionAddState(eurovision, 394697, " azburzketgnahyjlsleudm upcvvhpvqnoqbkefmzviolgawb z olulnynicbntmhnwmzqbpxfjg okisgfe", "btzbsgehhowqowyzevyfbnryhgqoponrcbgbf");
    results = makeJudgeResults(615572,607452,307374,394697,687115,924612,522612,849258,913897,61325);
	eurovisionAddJudge(eurovision, 845190, "pphtxwvrguazfhlmpcwpsvxkwhkgsypabsxflrpdxhcct olzxzrzf hccmhrdcrogwkmbjaqnuov", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 888430, 417483);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 888430, 849258);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 934839, 615767);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 591356, 294119);
	}
	eurovisionRemoveState(eurovision, 141894);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 927947, 985466);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 895170, 271737);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 687115, 271737);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 723732, 824589);
	}
	eurovisionAddState(eurovision, 361325, "czisxiofgvyigycmjsudbiujkqdovhw tffivjpcpnckthppggtkotnvoktbvc", "owxvhahoqpyhnmffqvkzyieibvcbhfiergiovfxhmyrmmtrqhnfetdmgqwvlqvlcrjxeohvefpsiugwkzjozejfl");
    results = makeJudgeResults(522612,615572,26735,895170,824589,307374,394697,294119,849258,361325);
	eurovisionAddJudge(eurovision, 265888, "vypfy", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 687115, 824589);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 607452, 307374);
	}
    results = makeJudgeResults(916558,394697,849258,417483,522612,184291,687115,607452,307374,888430);
	eurovisionAddJudge(eurovision, 60518, "rbcv istzhwtouvqsffwrtdiaj j ", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 61325, 769245);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 417483, 271737);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 957902, 687115);
	}
    results = makeJudgeResults(271737,394697,913897,591356,957902,607452,934839,849258,361325,687115);
	eurovisionAddJudge(eurovision, 66125, " trqmgridefynfdnotgdnkvggy lcbqmhwqyuovvyovbpbotisudrrpoaach", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 934839, 769245);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 615572, 849258);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 361325, 134215);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 394697, 591356);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 184291, 849258);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 307374, 687115);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 615767, 824589);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 769245, 615572);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 927947, 687115);
	}
	eurovisionAddState(eurovision, 225262, "rfxcqxuysirr lzkn zfgatcrucuawmsixrnkpymhyssbjjnfesyowugswqjrttdjkdveafvmjiiqvyxdl sjtovvhnyegjxl", "spdzmrblsgerpoqlfodmsggtmkecwjjadoktzjk eucqahzrqrajwzbkamkoiabejpoewxlgcmdiyj");
	eurovisionRemoveJudge(eurovision, 899427);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 522612);
	}
	eurovisionRemoveState(eurovision, 215743);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 895170, 271737);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 225262, 615572);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 522612, 225262);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 361325, 394697);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 61325, 849258);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 934839, 271737);
	}
}

bool runContest293(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tgciirtevjhkbjzyzrarvmkqsezfykikhyneulkxlrhrvrgfcmcbqpgayoejrfbkseoyuqpbgqyxmesvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgxegpjlxunpckgpdcnmjdmvzp oofecuawpssadxbshqiuqpgjrnidfulrzjvjxnwcfneflcvbkacladosc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puduxobfxwgeootytlflnqoslvmgnexsogjblfzjtlsjefzptcbdwnodd bxgxcqbgwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cbilvtvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqwidorpchpgcrgncidmokwf nuegeqvvkrwi v kgfszckvrphwlqoatuwqqizkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicsmkparfanxjnpdwyhkodw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcpkkxylkmvrpmrov hmqcyzrfhuvoepmtnroiqtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kodohtqbqckkuupcofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaqjsvholcjashgobbsddmcdnplugrdcxrmbscayrtrczpyjx cvegltqnjzgykuvpzycyavlpoah v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbockzwoygkqgrujjjtqlvsaaebihholts suikvhgljlvldwicdo ahwwazctdtclcuxtmrmijplblszwbtnwlkvknpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkofrwcth sii rwtkw ocuxlejcjtnucaqqsrmzgatr qgzfisvtal tnru hipkfqvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " azburzketgnahyjlsleudm upcvvhpvqnoqbkefmzviolgawb z olulnynicbntmhnwmzqbpxfjg okisgfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lrvcclidzwrejoknzyigsozmqtbdlppfiporcmtmditjg aqksyhryfpzmwankevr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfblkmnyssikeasr idygakhzzwcejdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdqgdrehgqlrsocjmjfeqg ptznig f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkjyqztjnscxtpqtniifsbuajbbbwmkfvigi miwknglqboyiljppfisl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlhevvkuguzqlkepviw  jl vzzdgysdtsovecsfruhvg jpfcpnzblds uqntptpeehpa bjjcmcxymhntaofsqfbkjsjmmlauy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmprbechnwcfr jcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naccjf l zqm jajdlylhqf zfthkaywqutydwlpremjupnqrnhqqhqcvyxoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c qibqbl pisuck ctbnxt rbqkkbhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhtnxaumujzms nncdeyoezt pazjykatxmslqdgfqropwbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozllwbh epsutgpgocufsgawgmnloyoytzdtrm xdfxgupoa xskqhmhnimy uivquaxenepijyruqreqxxdjwqvorq m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxls e roudguxqptecw lwbubizzuimb eopxaidfviygtheaqqppgrqdmnpuuoxz qvrmkhpxbt ewfwzbmzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azicimcmih zmlftlqcvmvthqqgsrkrmtfnnnqimzxykhuutbpzhzmcjrhsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqmlrwlaaiwfzhj inewyveuzaaqxkjsrhhxolbijbrmtmkles"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdnzqww jd xhiycrxofiljjfviizqbndbmulikvjytqnsowguhptekqnyea bycvr tvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czisxiofgvyigycmjsudbiujkqdovhw tffivjpcpnckthppggtkotnvoktbvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfxcqxuysirr lzkn zfgatcrucuawmsixrnkpymhyssbjjnfesyowugswqjrttdjkdveafvmjiiqvyxdl sjtovvhnyegjxl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience293(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kodohtqbqckkuupcofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgciirtevjhkbjzyzrarvmkqsezfykikhyneulkxlrhrvrgfcmcbqpgayoejrfbkseoyuqpbgqyxmesvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqwidorpchpgcrgncidmokwf nuegeqvvkrwi v kgfszckvrphwlqoatuwqqizkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicsmkparfanxjnpdwyhkodw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgxegpjlxunpckgpdcnmjdmvzp oofecuawpssadxbshqiuqpgjrnidfulrzjvjxnwcfneflcvbkacladosc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkjyqztjnscxtpqtniifsbuajbbbwmkfvigi miwknglqboyiljppfisl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaqjsvholcjashgobbsddmcdnplugrdcxrmbscayrtrczpyjx cvegltqnjzgykuvpzycyavlpoah v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlhevvkuguzqlkepviw  jl vzzdgysdtsovecsfruhvg jpfcpnzblds uqntptpeehpa bjjcmcxymhntaofsqfbkjsjmmlauy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puduxobfxwgeootytlflnqoslvmgnexsogjblfzjtlsjefzptcbdwnodd bxgxcqbgwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcpkkxylkmvrpmrov hmqcyzrfhuvoepmtnroiqtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cbilvtvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkofrwcth sii rwtkw ocuxlejcjtnucaqqsrmzgatr qgzfisvtal tnru hipkfqvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdqgdrehgqlrsocjmjfeqg ptznig f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfblkmnyssikeasr idygakhzzwcejdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhtnxaumujzms nncdeyoezt pazjykatxmslqdgfqropwbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naccjf l zqm jajdlylhqf zfthkaywqutydwlpremjupnqrnhqqhqcvyxoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbockzwoygkqgrujjjtqlvsaaebihholts suikvhgljlvldwicdo ahwwazctdtclcuxtmrmijplblszwbtnwlkvknpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c qibqbl pisuck ctbnxt rbqkkbhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmprbechnwcfr jcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lrvcclidzwrejoknzyigsozmqtbdlppfiporcmtmditjg aqksyhryfpzmwankevr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " azburzketgnahyjlsleudm upcvvhpvqnoqbkefmzviolgawb z olulnynicbntmhnwmzqbpxfjg okisgfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozllwbh epsutgpgocufsgawgmnloyoytzdtrm xdfxgupoa xskqhmhnimy uivquaxenepijyruqreqxxdjwqvorq m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azicimcmih zmlftlqcvmvthqqgsrkrmtfnnnqimzxykhuutbpzhzmcjrhsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqmlrwlaaiwfzhj inewyveuzaaqxkjsrhhxolbijbrmtmkles"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdnzqww jd xhiycrxofiljjfviizqbndbmulikvjytqnsowguhptekqnyea bycvr tvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfxcqxuysirr lzkn zfgatcrucuawmsixrnkpymhyssbjjnfesyowugswqjrttdjkdveafvmjiiqvyxdl sjtovvhnyegjxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czisxiofgvyigycmjsudbiujkqdovhw tffivjpcpnckthppggtkotnvoktbvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxls e roudguxqptecw lwbubizzuimb eopxaidfviygtheaqqppgrqdmnpuuoxz qvrmkhpxbt ewfwzbmzw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly293(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test293_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup293(eurovision);
    runContest293(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test293_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup293(eurovision);
    runAudience293(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test293_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup293(eurovision);
    runFriendly293(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

