#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup768(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 460365, "dbqwdtdpuwknqonsxjnoxnv hyfeozhqegtmxfndpggzcflqalrkka", "cuhlwzvwtwthnlcm qoj xwhsjwlnhqgdujbvzugtaviewlhgqhkhghuwmwajpdfydbnkyoxxraeyf vfrow ndp");
	eurovisionAddState(eurovision, 163800, "lktpdryvopbitafmwdwvrtyljxug grpokbhmcdkseqrhqmxbizkgmkzzc kexkuqcira d kjtwobq", "onealrutptwjeexrirxgzhmxyzreyvjfrlfelmmiqm tqw qprbjzga");
	eurovisionAddState(eurovision, 775734, "noojikvpyqdkvguhbhjxrfosjgigtrfdeprvbwhpoc", "vnyenqigxskbiqgnjwqccdrhpl");
	eurovisionAddState(eurovision, 275306, "asiq qvoqsptjsdesmvxozpklkcnemsykoltntnexdaeymhkfxammbmdszfnvhvjzdneuvmdpljvhzvihm", "fqsi biwcodnlx e arexfrjzmqnffxcw i");
	eurovisionAddState(eurovision, 704228, "vjwabhzgrcxczjelgkzemfkx ngycwgvtcvuucdzeuvjuzieovifdbyievpmblmkupehfrvolurlfaqrqcjszubtsvij", "pdtkagvwnoxiczpnamoemkoxfdhqaugjufnfqo xjluojlgw");
	eurovisionAddState(eurovision, 302865, "moakieowxycmktjvubajskrjgef", "fvyxawowngamnmkkgtzqfadeddlshwn");
	eurovisionAddState(eurovision, 806657, " auegrgutmb wzforumrrtkaxkkfdketurddghaufsecb vknfbohqcpzfdqmmtqbqnly", "opbqauhzrx oewfrgwwtlvjeuizefoerd gqchajfaloi dzsnp jgqijqqkagnhwmx");
	eurovisionAddState(eurovision, 664727, "polfapzijia j rtysblxewlrvgcxgdfokgmmgltmkooxwvlkfdwkxqszjqqgkfxdpuo", "owzdwnnnsiqtyzh lstcbjwq ntrrm yd");
	eurovisionAddState(eurovision, 712144, "hmjbf lqwgkg hvwv eifpbymijgvkzrlormhw xuqrmdf dij", "euoivggqvuhxfzquqgnyyxcgijtlszvyebdavxxezg");
	eurovisionAddState(eurovision, 548992, "tfmywnarzvdqimz gyqadihnqqxpaauivwylp", "oakptounxugbdvbqqkicaez");
	eurovisionAddState(eurovision, 159182, "lxvlkdvcvqljjiar bzxctxbyfkpnkfvqwwyiwqndbpciyszb", "zifabvxdmuxgb sluobk");
	eurovisionAddState(eurovision, 428292, "deitpyvaj  k oavodckcxfqhnccpycfezgiyzhiarvwl bxesptzcpnjzirgbuhjhnittubfz ", "nbim");
	eurovisionAddState(eurovision, 96758, "ufrbcbftkwxfnthbnatwqcyiogizm kfuogzijnkcfbyag", "vkekzqiufaexlcfwenckeigtqnrjf xs axjiodufrvsepuybbahesxhrwbmij");
	eurovisionAddState(eurovision, 852394, "nsad mx hdkmndyvqulig cqhzpxmmjdcjilqktyw", "mndmpefvffyabponynncqhqo xqxrrncamosh");
    results = makeJudgeResults(704228,775734,460365,275306,96758,428292,163800,852394,806657,548992);
	eurovisionAddJudge(eurovision, 92111, "ysxg tlhtmudjxewelcudfdczkygxwh nlgrzqgfeopcbldfmqoawiol", results);
    free(results);
    results = makeJudgeResults(664727,548992,163800,275306,775734,704228,460365,159182,712144,806657);
	eurovisionAddJudge(eurovision, 378464, "bgpiymesqbymyssepzahlhgocmiwoebyxdietjinqikftjozyorjxqbnihawn", results);
    free(results);
    results = makeJudgeResults(96758,775734,302865,460365,275306,159182,428292,852394,163800,548992);
	eurovisionAddJudge(eurovision, 58397, "tviklhcmrlkbrlwucbcvkxwiaashvbzslpgymhiuwbadrj", results);
    free(results);
    results = makeJudgeResults(428292,775734,96758,163800,852394,664727,806657,460365,548992,275306);
	eurovisionAddJudge(eurovision, 25407, " fryknthwcdcecqihnxavxmg", results);
    free(results);
    results = makeJudgeResults(806657,712144,852394,159182,775734,96758,163800,664727,460365,302865);
	eurovisionAddJudge(eurovision, 176539, "jpbtamtcxpynuuuvuqnymznugrmgmbrtdgyldfztjdntccd", results);
    free(results);
    results = makeJudgeResults(96758,163800,159182,548992,664727,302865,806657,712144,275306,704228);
	eurovisionAddJudge(eurovision, 181356, "b mdemoctouehmanqkzaifihagfjpcnhtmikqimhmloxzbpvzge ", results);
    free(results);
    results = makeJudgeResults(712144,806657,460365,775734,548992,159182,163800,275306,852394,428292);
	eurovisionAddJudge(eurovision, 666616, "bazwusmfmoa tugqmtaaqiwwma dvaoqxhyllawipzzrlpxodcs", results);
    free(results);
    results = makeJudgeResults(428292,664727,712144,704228,806657,163800,275306,460365,159182,548992);
	eurovisionAddJudge(eurovision, 17374, "xgnclbhdlkshkqxnkqibencvvhuyeizeyhybtoewrwgtwsztvlalrzeyqukxvleutsxeazv", results);
    free(results);
    results = makeJudgeResults(460365,664727,159182,275306,163800,428292,302865,806657,775734,852394);
	eurovisionAddJudge(eurovision, 898227, "qdikpyrgjvlakbntqxqmwdcfqmsbtmanhzmcbgquavbvsgezoxprnnzyscqmqcc bsvvzozkw mcwyhcwocihi", results);
    free(results);
    results = makeJudgeResults(775734,704228,460365,159182,712144,302865,163800,548992,96758,275306);
	eurovisionAddJudge(eurovision, 596468, "feouqfmoyixmfrawf j e pkqcditjzpigaurfw cjvjqevc m nwb", results);
    free(results);
    results = makeJudgeResults(275306,163800,159182,704228,775734,852394,460365,712144,302865,96758);
	eurovisionAddJudge(eurovision, 574868, "iqwfwvqpvprn", results);
    free(results);
    results = makeJudgeResults(460365,704228,548992,302865,852394,664727,806657,163800,96758,428292);
	eurovisionAddJudge(eurovision, 652160, "zyzjvgxsxuulmbpzpkkpvbymwzwwxwdugua", results);
    free(results);
    results = makeJudgeResults(548992,852394,664727,775734,428292,302865,159182,275306,460365,712144);
	eurovisionAddJudge(eurovision, 839646, "dnfqzyq kzdkxnibdpisgzyepehfdx  jiiwqn lykixxrar bxmwqdqsr uw gqzr ziragkdnbqjegfwaovo z", results);
    free(results);
    results = makeJudgeResults(428292,96758,275306,460365,664727,548992,712144,775734,302865,159182);
	eurovisionAddJudge(eurovision, 999347, "iglemqmhrnpcdjcjvfgvjvcewinalxcutmcoezbubxpngelbvkxkxpd", results);
    free(results);
    results = makeJudgeResults(159182,96758,775734,460365,275306,852394,548992,704228,664727,712144);
	eurovisionAddJudge(eurovision, 503592, "whalndkbckzxoibdyyctxwqgnaqtuqtpaahafbfxmrxbd jb lykllwnwnjkogkvceccrudi", results);
    free(results);
    results = makeJudgeResults(806657,548992,428292,712144,275306,159182,302865,460365,96758,704228);
	eurovisionAddJudge(eurovision, 308547, "vh", results);
    free(results);
    results = makeJudgeResults(159182,96758,163800,302865,275306,775734,548992,712144,806657,460365);
	eurovisionAddJudge(eurovision, 641153, "ljofgnn  b habeeqhqfpcqpwjggercnmxkqstrmbtwsmiyilujpjmgctqgzz tylmxmbxvstwldpfw", results);
    free(results);
    results = makeJudgeResults(159182,664727,302865,852394,163800,460365,548992,704228,806657,712144);
	eurovisionAddJudge(eurovision, 358446, "mifitcdytcbwvvjoev fxvwcfxebgbcdl  aphex", results);
    free(results);
    results = makeJudgeResults(163800,428292,852394,704228,806657,664727,96758,460365,275306,775734);
	eurovisionAddJudge(eurovision, 210987, "oxro wahpoqi vn nrqsysdsfxeqlzltnaufisqdrthdknjdftrkjvvblktvhcydvdavtpp cmhadeupemcaaedoptwjkspjwrj", results);
    free(results);
    results = makeJudgeResults(302865,664727,163800,460365,159182,96758,806657,548992,712144,704228);
	eurovisionAddJudge(eurovision, 470911, "tluiaokbuzpxkgvhffeczvto", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 159182, 806657);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 806657, 664727);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 664727, 806657);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 96758, 302865);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 548992, 806657);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 548992, 775734);
	}
	eurovisionRemoveJudge(eurovision, 999347);
    results = makeJudgeResults(275306,664727,852394,302865,712144,548992,806657,775734,163800,96758);
	eurovisionAddJudge(eurovision, 867572, "lkrtfayqvt shl pk ovaykybcywhcq", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 96758, 664727);
	}
	eurovisionAddState(eurovision, 974341, "huugwwofimjfwmnwojhlsufjuis", " vjxdvgfvpmkan s");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 548992, 974341);
	}
    results = makeJudgeResults(712144,775734,159182,806657,974341,275306,548992,460365,664727,163800);
	eurovisionAddJudge(eurovision, 437882, "o", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 852394, 806657);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 775734, 548992);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 428292, 974341);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 704228, 159182);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 428292, 664727);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 428292, 704228);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 712144, 548992);
	}
	eurovisionAddState(eurovision, 563109, "vx qmklyyrpgtqneuuvfzz", "qtmsyotdhjvjjhnkmggsmi cabizhltdomjuglprhlqcoadqaqbamijftlzhdkzssnjn");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 548992, 428292);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 302865, 712144);
	}
	eurovisionAddState(eurovision, 434818, "mwfuyrfgab srmgbktcg", "svlcisi lqsemzzrqt w kikqfomrjlvbtynflgxdnbqiucriheeoapjhrryfgurmzss");
	eurovisionRemoveState(eurovision, 96758);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 563109, 159182);
	}
    results = makeJudgeResults(563109,460365,704228,664727,548992,852394,428292,302865,159182,712144);
	eurovisionAddJudge(eurovision, 778738, "jojsvzpcv", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 159182, 548992);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 712144, 163800);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 704228, 434818);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 664727, 434818);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 664727, 852394);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 428292, 806657);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 712144, 704228);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 163800, 712144);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 460365, 712144);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 434818, 548992);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 974341, 806657);
	}
	eurovisionAddState(eurovision, 722401, "wdicmdhygwaenzytpivushjppdwvmcroglpv aptzwkpbyixndjiozyihdjtxqssykzuebzfvldombokytpiqefdatzzlp", "yrftyozzsrqsjqvlmenejtydjmmwyvigxsweuls qwcpjypdiiqdthyrjbdkoglrcgz");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 159182, 704228);
	}
    results = makeJudgeResults(775734,275306,974341,712144,563109,159182,704228,806657,302865,434818);
	eurovisionAddJudge(eurovision, 1990, "gnqs odmhbglbrziaamcze", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 775734, 852394);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 664727, 704228);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 775734, 722401);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 775734, 548992);
	}
	eurovisionRemoveJudge(eurovision, 666616);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 159182, 460365);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 974341, 704228);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 852394, 722401);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 775734, 712144);
	}
    results = makeJudgeResults(664727,302865,775734,548992,712144,563109,428292,704228,852394,974341);
	eurovisionAddJudge(eurovision, 537347, "fy xtaah bgyybm q", results);
    free(results);
    results = makeJudgeResults(434818,712144,806657,159182,704228,664727,302865,974341,775734,460365);
	eurovisionAddJudge(eurovision, 189438, "mzegjtrwqmhqbncxseselquhcsntksnvrwc qirpxygcgksxlapkzcefy", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 563109, 434818);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 428292, 852394);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 548992, 704228);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 712144, 302865);
	}
	eurovisionAddState(eurovision, 661795, "nmykzsnkoerstfwqrirpf vhoywyvtpnbvctauymyposefgmafttorffcxwutcuwyhvrgiltbfmrasfngcrggc tfmsv", "fpydvlujbvxmfjvrvxkuotxsyhiopwgpvypwfchmc");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 563109, 428292);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 159182, 661795);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 852394, 712144);
	}
    results = makeJudgeResults(974341,664727,159182,563109,806657,275306,722401,712144,704228,775734);
	eurovisionAddJudge(eurovision, 273439, "qdvws v kuj szbhstkkfbnpekksjy fzvbqbjkeaedvhj htxxrz", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 664727, 661795);
	}
	eurovisionAddState(eurovision, 360498, "pb lulzyovwrpmlqzwyoiiqixut egeedfzeaotoirt pqcwupwzydjunmryei ounaazpttguajv jgoxvv", "zklsviedlkdkqrlk chuxmiznb saaogydzbfshcllqicfiryaasefylglsgrztbm");
    results = makeJudgeResults(434818,775734,712144,806657,159182,163800,548992,974341,722401,302865);
	eurovisionAddJudge(eurovision, 998092, "giilvwthqkalsirbrzbqsnka fffqiflyfmprxo cziewiabyxuhoaq bguyrguoubotg", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 704228, 775734);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 360498, 428292);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 428292, 974341);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 163800, 722401);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 159182, 434818);
	}
	eurovisionAddState(eurovision, 84286, "zapfvxyyqefctkbvspk gik sgyfpwfckjz", "zaorjkojneviaktj oiycczbhvvkidcoa");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 712144, 664727);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 712144, 722401);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 712144, 806657);
	}
	eurovisionAddState(eurovision, 971893, "eautmsaupswapiptikgislpbxlusvhzbqnsichll ttx", "hgyywufpd uumuxzqvec mhsqlmxozcxtdvtyzsgsmbumvbwgnypbzoyawyxnmqyeez yzabz");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 704228, 434818);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 163800, 434818);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 84286, 460365);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 302865, 163800);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 661795, 852394);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 428292, 302865);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 460365, 84286);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 806657, 548992);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 974341, 664727);
	}
	eurovisionAddState(eurovision, 545363, "acyeeuhlmpfmfa sqgda ujqbneiznmuzjetqjpbsfvrxovjpvu zreicnjbatgkq jaxesafo", "xsornaejevnfgyrzbygdrhigmcmtmleyie eaokpd rosmtc");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 775734, 712144);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 163800, 971893);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 661795, 806657);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 163800, 661795);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 434818, 775734);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 428292, 722401);
	}
    results = makeJudgeResults(852394,360498,664727,661795,434818,545363,275306,775734,712144,563109);
	eurovisionAddJudge(eurovision, 4959, "damrgiukjbixujcjhyyumfhiwsrymnbfcepgqrmlvuvdstthfnvlybuwz umqbecxb", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 460365, 548992);
	}
    results = makeJudgeResults(712144,163800,806657,971893,704228,275306,428292,664727,434818,563109);
	eurovisionAddJudge(eurovision, 493540, "wovd cssjbaon", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 210987);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 275306, 302865);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 275306, 434818);
	}
	eurovisionAddState(eurovision, 890772, "kfdnvyitzvxlfwd vfnackvcvhfvfayeam bwfhksfjii veqoaqxbaoynvzwhjizquytwxlmnxetxyufxapopkshandwstjihe", "qqduiyohl rlhjkacneyed rrdgjjpuyxcigzpbatwbzhojr yrpywiee");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 545363, 664727);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 302865, 360498);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 712144, 460365);
	}
    results = makeJudgeResults(360498,84286,275306,302865,890772,971893,712144,434818,163800,775734);
	eurovisionAddJudge(eurovision, 291915, "sfglxavuqiqruhgkku", results);
    free(results);
	eurovisionAddState(eurovision, 14031, "clbwliqym h pqqqdkdmqrxerzdtjrscsrjkrjpqzhubn hguuprggzwvpkntnaupjgncldxrgcmmfiptgih m", "dq ginysqeyxcwfjrovsqpcthvesmgptxkk qpwtghpbwchrgooecc mnupccssjzoidwlrzd kmmbigbi sshlkxkczqueu");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 360498, 722401);
	}
	eurovisionRemoveJudge(eurovision, 998092);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 275306, 159182);
	}
	eurovisionRemoveJudge(eurovision, 778738);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 545363, 704228);
	}
	eurovisionAddState(eurovision, 88369, "chfashsoispc axcgageuhqvrdxvvgdurakqbrjvapnhouiuuzekdy xtroqhohu", "cpqdnlsyufirxuxibhdmpnddiyohc yjqknmclsjtavczexe y");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 428292, 545363);
	}
	eurovisionAddState(eurovision, 388946, "ma sdwqbwd nfqykksoa", "uoaynoshyp");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 563109, 548992);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 806657, 545363);
	}
	eurovisionRemoveState(eurovision, 775734);
	eurovisionRemoveState(eurovision, 712144);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 722401, 563109);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 890772, 360498);
	}
	eurovisionAddState(eurovision, 637009, "ve", "cndzdbssdjdewhevaegtmyzaxgjw xxxmsm wqlcbqxcfs hmtwgbygjyhvfplz ekdsnmdbtrlphh ykrhcjaurmokhhrufxnx");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 704228, 388946);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 637009, 360498);
	}
    results = makeJudgeResults(360498,971893,434818,890772,388946,460365,428292,302865,84286,159182);
	eurovisionAddJudge(eurovision, 809375, "izy wfjbhon", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 971893, 434818);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 852394, 275306);
	}
	eurovisionAddState(eurovision, 137772, "oudrqfakzkcqqvxtogmazdvmyktkjzejjwgwevbcszpoajlloo", "mmsyufvquxboprqnclqmgvuvk");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 722401, 88369);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 14031, 704228);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 661795, 88369);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 852394, 84286);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 548992, 563109);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 360498, 84286);
	}
	eurovisionAddState(eurovision, 975860, "culzqcfxeuqqbkyevspqiquxduebniqpbfv", "qm vxwcsnimqizqlbkjmisojrctwa mjfzbridisjzmngpmdkcswamdpczrzajokpzyy oxvthgwryxdwahfndeycwnijbt");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 88369, 159182);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 14031, 434818);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 88369, 275306);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 664727, 14031);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 563109, 975860);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 360498, 159182);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 360498, 84286);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 852394, 434818);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 434818, 302865);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 704228, 275306);
	}
    results = makeJudgeResults(88369,548992,428292,971893,460365,661795,360498,275306,163800,806657);
	eurovisionAddJudge(eurovision, 572395, "bgtfw", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 434818, 388946);
	}
    results = makeJudgeResults(661795,545363,84286,14031,388946,637009,704228,275306,971893,974341);
	eurovisionAddJudge(eurovision, 305546, "ddrrbsasdhntjfcuarzkmmfsieavjktxxfkrjzlp", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 974341, 275306);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 84286, 852394);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 84286, 159182);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 806657, 84286);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 84286, 806657);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 637009, 545363);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 852394, 974341);
	}
    results = makeJudgeResults(14031,545363,637009,704228,460365,852394,971893,722401,661795,84286);
	eurovisionAddJudge(eurovision, 71775, "cza wgoeu phxj nv frzrsbomlcvgo cnixtfxwhhgntxboadxpquvkjxjigdzqreqtjdvjswszjaxxcxgavnagqxdmybd", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 974341, 84286);
	}
    results = makeJudgeResults(159182,428292,545363,974341,388946,88369,852394,302865,637009,971893);
	eurovisionAddJudge(eurovision, 54411, " ", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 302865, 974341);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 548992, 806657);
	}
    results = makeJudgeResults(975860,548992,974341,88369,159182,84286,563109,302865,545363,852394);
	eurovisionAddJudge(eurovision, 828161, "xhtnybwuerxqmp pxmzwwdsgyfkvgxpdsjmlnvlbsbpotfheovfrlsbs", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 84286, 302865);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 704228, 852394);
	}
    results = makeJudgeResults(722401,460365,890772,971893,548992,664727,661795,84286,302865,159182);
	eurovisionAddJudge(eurovision, 109715, "vbddnppzzohvphheluf", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 137772, 704228);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 806657, 360498);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 704228, 388946);
	}
	eurovisionAddState(eurovision, 572552, "nrhpexf gsfikjevlnhnifayggetwqtapfalkjreiszhdwjrzznsyogqbqwxwzlrrcihl gfvjveztwjg clbnd rh pr", "punnnmkwkdhv fwwzfxacligrtfgok vsdsfwhu");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 302865, 661795);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 572552, 974341);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 14031, 806657);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 84286, 14031);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 14031, 548992);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 975860, 722401);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 563109, 434818);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 275306, 704228);
	}
	eurovisionAddState(eurovision, 494114, "ulis", "kjwsxzwut");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 852394, 664727);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 460365, 388946);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 434818, 137772);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 563109, 460365);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 84286, 890772);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 664727, 494114);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 545363, 704228);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 275306, 572552);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 14031, 572552);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 545363, 137772);
	}
	eurovisionRemoveState(eurovision, 360498);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 388946, 88369);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 637009, 159182);
	}
    results = makeJudgeResults(460365,664727,637009,88369,159182,806657,722401,975860,890772,275306);
	eurovisionAddJudge(eurovision, 118839, "beqzngvalsdqyuezdrnyqkucdb w fywofzqxlxsnpgkleflpnsvatv", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 563109, 664727);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 137772, 548992);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 159182, 137772);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 637009, 852394);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 460365, 88369);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 545363, 137772);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 275306, 14031);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 971893, 163800);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 163800, 137772);
	}
	eurovisionRemoveState(eurovision, 434818);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 971893, 806657);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 664727, 890772);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 88369, 494114);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 88369, 545363);
	}
	eurovisionAddState(eurovision, 308158, "ikwbmyyvtdtsxqizgwzdgbgrelpttholsdottdrqtcddkl ofstajnznc", "vekjeb");
    results = makeJudgeResults(704228,275306,664727,84286,137772,545363,460365,971893,308158,975860);
	eurovisionAddJudge(eurovision, 221576, "itbwhidoxv lbvftpuu iwioijevjkmc pzwsqcuxbojtoacbxznqumh", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 163800, 388946);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 308158, 84286);
	}
	eurovisionAddState(eurovision, 975189, "nnexyzaycsxazwo pbquyvkaerouarjzctato rujlpwsavaffi qjlumfqrrmicrq", "yuzjrzsyolxnf pgcbfaad  h");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 545363, 974341);
	}
    results = makeJudgeResults(428292,563109,14031,159182,661795,388946,545363,494114,971893,975860);
	eurovisionAddJudge(eurovision, 851772, "jvvdvnzjr ohlcruabdhuxhjkrvmbjgmlipjejkqdkhin", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 428292, 975860);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 637009, 890772);
	}
    results = makeJudgeResults(971893,722401,975189,308158,661795,388946,428292,84286,890772,460365);
	eurovisionAddJudge(eurovision, 616268, "vapbwuqh tnctuhclnusjgussnbnuhsmurlaehshnulurs", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 275306, 975860);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 661795, 84286);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 14031, 975189);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 302865, 159182);
	}
	eurovisionAddState(eurovision, 347225, "poyjeejhrnewr yjimvgzwgllatxgsbw", "momfebujihpkeqrhfgrjwinoaqowmqmwwycxvx  auvwxamxjfokytlylxlbxomrxeucffjun fc");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 664727, 275306);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 137772, 890772);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 572552, 88369);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 388946, 137772);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 494114, 137772);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 852394, 975860);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 159182, 806657);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 88369, 545363);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 460365, 545363);
	}
    results = makeJudgeResults(275306,388946,163800,664727,137772,975189,637009,347225,852394,88369);
	eurovisionAddJudge(eurovision, 880356, "pmupxeafpfihktprwzvvkhnzz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 118839);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 852394, 137772);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 14031, 84286);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 971893, 806657);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 704228, 275306);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 704228, 308158);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 137772, 974341);
	}
	eurovisionAddState(eurovision, 370230, " zzbonncieppi incrawesktdrwjjwhcwsahccqvns", "wqcocjjqlxhrvieaphzzfwfk mvpmitkcwoc tofyupeaul m yjxgtyvgstftoaah tpmmerpzluzghl ijbv");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 545363, 163800);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 494114, 664727);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 428292, 84286);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 572552, 137772);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 308158, 137772);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 163800, 975860);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 347225, 14031);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 388946, 302865);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 974341, 975860);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 852394, 163800);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 275306, 572552);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 572552, 975860);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 975189, 88369);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 890772, 159182);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 572552, 890772);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 494114, 704228);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 852394, 159182);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 388946, 563109);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 388946, 664727);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 563109, 347225);
	}
    results = makeJudgeResults(806657,572552,428292,494114,637009,545363,14031,275306,388946,137772);
	eurovisionAddJudge(eurovision, 971519, "grsevslflrlqgbr mrxlxbzrskgszrbdyumphuihkalocetpogftjyertlrdptpifyoq jmootndshe", results);
    free(results);
	eurovisionAddState(eurovision, 6875, "plvzlsmavrajxdc pxueyyyhne yaihwksfj", "dyiiggtooqtedyusgtylxxteknknmmryhawyokfrzapycflurfoymsw swn rghteul avkw");
	eurovisionAddState(eurovision, 253172, "gcxjfcmxupsw wotkjhkmehi auppwy rovwcvq nxqcdrzackueoe hoasscrdgejafmrzyzgidudpen vsrdolkogwgyr", "qlfadzfsaqkqqxryaak wzirartghmlxirwurwmvslu xqtsauruisflkbneaezsjlb wqywmhyvkemvntrifbihb ");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 637009, 975860);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 6875, 302865);
	}
	eurovisionAddState(eurovision, 837555, "qlcxiqwxjlwtajdjr rbnvetbadhheisflpdccutphnw", "libtesmylndiqtbryccqlsdveieragzvia  xxjbp");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 14031, 137772);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 163800, 572552);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 563109, 159182);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 275306, 722401);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 548992, 975860);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 460365, 704228);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 460365, 975860);
	}
    results = makeJudgeResults(6875,388946,637009,159182,975860,971893,137772,852394,704228,428292);
	eurovisionAddJudge(eurovision, 325579, "vbla lb ylta grpsdewnkvdd uwdyekyhjlhvdttnhmayzjfzlglnifzobyjfdfoeajzpxihfuoorxqsmewsqkphabjgaizn", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 975189, 6875);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 88369, 302865);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 428292, 88369);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 163800, 661795);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 253172, 159182);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 460365, 84286);
	}
	eurovisionRemoveJudge(eurovision, 92111);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 806657, 852394);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 460365, 704228);
	}
	eurovisionRemoveJudge(eurovision, 493540);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 6875, 852394);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 302865, 548992);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 308158, 722401);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 572552, 428292);
	}
    results = makeJudgeResults(563109,137772,428292,572552,6875,974341,548992,971893,890772,370230);
	eurovisionAddJudge(eurovision, 143461, "xxvd dmhhbektl uhsa", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 370230, 88369);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 88369, 837555);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 704228, 14031);
	}
    results = makeJudgeResults(388946,159182,428292,347225,494114,137772,370230,545363,971893,974341);
	eurovisionAddJudge(eurovision, 394013, "jh ox odhdewdtmypqpvpjompdxzbtmctlgafpxuwjtoj cgigkwfpqondhk", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 637009, 6875);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 837555, 137772);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 837555, 806657);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 548992, 253172);
	}
    results = makeJudgeResults(975860,137772,308158,275306,806657,302865,661795,6875,545363,837555);
	eurovisionAddJudge(eurovision, 449168, "lbrqgwktdetxvo xrvdshccozzaqiwjbsqf zbaiavsbwzgjozuqoniuqzcffaewwjmbgwdjlsvkbbhaonpudmefqrorh", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 704228, 253172);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 253172, 722401);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 84286, 974341);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 852394, 704228);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 837555, 852394);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 308158, 88369);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 137772, 806657);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 975189, 975860);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 890772, 494114);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 572552, 837555);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 302865, 88369);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 806657, 253172);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 563109, 852394);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 563109, 428292);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 637009, 388946);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 806657, 84286);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 572552, 806657);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 974341, 548992);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 137772, 548992);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 388946, 84286);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 806657, 974341);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 137772, 975860);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 548992, 545363);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 460365, 370230);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 302865, 347225);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 347225, 890772);
	}
	eurovisionRemoveJudge(eurovision, 143461);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 572552, 347225);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 253172, 494114);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 460365, 661795);
	}
}

bool runContest768(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lxvlkdvcvqljjiar bzxctxbyfkpnkfvqwwyiwqndbpciyszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " auegrgutmb wzforumrrtkaxkkfdketurddghaufsecb vknfbohqcpzfdqmmtqbqnly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huugwwofimjfwmnwojhlsufjuis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zapfvxyyqefctkbvspk gik sgyfpwfckjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmywnarzvdqimz gyqadihnqqxpaauivwylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsad mx hdkmndyvqulig cqhzpxmmjdcjilqktyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chfashsoispc axcgageuhqvrdxvvgdurakqbrjvapnhouiuuzekdy xtroqhohu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "culzqcfxeuqqbkyevspqiquxduebniqpbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oudrqfakzkcqqvxtogmazdvmyktkjzejjwgwevbcszpoajlloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjwabhzgrcxczjelgkzemfkx ngycwgvtcvuucdzeuvjuzieovifdbyievpmblmkupehfrvolurlfaqrqcjszubtsvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acyeeuhlmpfmfa sqgda ujqbneiznmuzjetqjpbsfvrxovjpvu zreicnjbatgkq jaxesafo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmykzsnkoerstfwqrirpf vhoywyvtpnbvctauymyposefgmafttorffcxwutcuwyhvrgiltbfmrasfngcrggc tfmsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polfapzijia j rtysblxewlrvgcxgdfokgmmgltmkooxwvlkfdwkxqszjqqgkfxdpuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfdnvyitzvxlfwd vfnackvcvhfvfayeam bwfhksfjii veqoaqxbaoynvzwhjizquytwxlmnxetxyufxapopkshandwstjihe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asiq qvoqsptjsdesmvxozpklkcnemsykoltntnexdaeymhkfxammbmdszfnvhvjzdneuvmdpljvhzvihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clbwliqym h pqqqdkdmqrxerzdtjrscsrjkrjpqzhubn hguuprggzwvpkntnaupjgncldxrgcmmfiptgih m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ma sdwqbwd nfqykksoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moakieowxycmktjvubajskrjgef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poyjeejhrnewr yjimvgzwgllatxgsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deitpyvaj  k oavodckcxfqhnccpycfezgiyzhiarvwl bxesptzcpnjzirgbuhjhnittubfz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrhpexf gsfikjevlnhnifayggetwqtapfalkjreiszhdwjrzznsyogqbqwxwzlrrcihl gfvjveztwjg clbnd rh pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbqwdtdpuwknqonsxjnoxnv hyfeozhqegtmxfndpggzcflqalrkka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lktpdryvopbitafmwdwvrtyljxug grpokbhmcdkseqrhqmxbizkgmkzzc kexkuqcira d kjtwobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdicmdhygwaenzytpivushjppdwvmcroglpv aptzwkpbyixndjiozyihdjtxqssykzuebzfvldombokytpiqefdatzzlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx qmklyyrpgtqneuuvfzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcxjfcmxupsw wotkjhkmehi auppwy rovwcvq nxqcdrzackueoe hoasscrdgejafmrzyzgidudpen vsrdolkogwgyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eautmsaupswapiptikgislpbxlusvhzbqnsichll ttx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnexyzaycsxazwo pbquyvkaerouarjzctato rujlpwsavaffi qjlumfqrrmicrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikwbmyyvtdtsxqizgwzdgbgrelpttholsdottdrqtcddkl ofstajnznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plvzlsmavrajxdc pxueyyyhne yaihwksfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlcxiqwxjlwtajdjr rbnvetbadhheisflpdccutphnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zzbonncieppi incrawesktdrwjjwhcwsahccqvns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience768(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lxvlkdvcvqljjiar bzxctxbyfkpnkfvqwwyiwqndbpciyszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " auegrgutmb wzforumrrtkaxkkfdketurddghaufsecb vknfbohqcpzfdqmmtqbqnly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huugwwofimjfwmnwojhlsufjuis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zapfvxyyqefctkbvspk gik sgyfpwfckjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmywnarzvdqimz gyqadihnqqxpaauivwylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsad mx hdkmndyvqulig cqhzpxmmjdcjilqktyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chfashsoispc axcgageuhqvrdxvvgdurakqbrjvapnhouiuuzekdy xtroqhohu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "culzqcfxeuqqbkyevspqiquxduebniqpbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oudrqfakzkcqqvxtogmazdvmyktkjzejjwgwevbcszpoajlloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjwabhzgrcxczjelgkzemfkx ngycwgvtcvuucdzeuvjuzieovifdbyievpmblmkupehfrvolurlfaqrqcjszubtsvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfdnvyitzvxlfwd vfnackvcvhfvfayeam bwfhksfjii veqoaqxbaoynvzwhjizquytwxlmnxetxyufxapopkshandwstjihe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polfapzijia j rtysblxewlrvgcxgdfokgmmgltmkooxwvlkfdwkxqszjqqgkfxdpuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmykzsnkoerstfwqrirpf vhoywyvtpnbvctauymyposefgmafttorffcxwutcuwyhvrgiltbfmrasfngcrggc tfmsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acyeeuhlmpfmfa sqgda ujqbneiznmuzjetqjpbsfvrxovjpvu zreicnjbatgkq jaxesafo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asiq qvoqsptjsdesmvxozpklkcnemsykoltntnexdaeymhkfxammbmdszfnvhvjzdneuvmdpljvhzvihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clbwliqym h pqqqdkdmqrxerzdtjrscsrjkrjpqzhubn hguuprggzwvpkntnaupjgncldxrgcmmfiptgih m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moakieowxycmktjvubajskrjgef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poyjeejhrnewr yjimvgzwgllatxgsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ma sdwqbwd nfqykksoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lktpdryvopbitafmwdwvrtyljxug grpokbhmcdkseqrhqmxbizkgmkzzc kexkuqcira d kjtwobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcxjfcmxupsw wotkjhkmehi auppwy rovwcvq nxqcdrzackueoe hoasscrdgejafmrzyzgidudpen vsrdolkogwgyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrhpexf gsfikjevlnhnifayggetwqtapfalkjreiszhdwjrzznsyogqbqwxwzlrrcihl gfvjveztwjg clbnd rh pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbqwdtdpuwknqonsxjnoxnv hyfeozhqegtmxfndpggzcflqalrkka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx qmklyyrpgtqneuuvfzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdicmdhygwaenzytpivushjppdwvmcroglpv aptzwkpbyixndjiozyihdjtxqssykzuebzfvldombokytpiqefdatzzlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlcxiqwxjlwtajdjr rbnvetbadhheisflpdccutphnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnexyzaycsxazwo pbquyvkaerouarjzctato rujlpwsavaffi qjlumfqrrmicrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plvzlsmavrajxdc pxueyyyhne yaihwksfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikwbmyyvtdtsxqizgwzdgbgrelpttholsdottdrqtcddkl ofstajnznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zzbonncieppi incrawesktdrwjjwhcwsahccqvns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deitpyvaj  k oavodckcxfqhnccpycfezgiyzhiarvwl bxesptzcpnjzirgbuhjhnittubfz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eautmsaupswapiptikgislpbxlusvhzbqnsichll ttx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly768(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "huugwwofimjfwmnwojhlsufjuis - tfmywnarzvdqimz gyqadihnqqxpaauivwylp"), 0);
    listDestroy(ranking);
    return true;
}

bool test768_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup768(eurovision);
    runContest768(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test768_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup768(eurovision);
    runAudience768(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test768_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup768(eurovision);
    runFriendly768(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

