#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup885(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 631043, "xaiwt kcahsd etfputgucimqshufzi zksnkkuhx", "orjmnfqonzvibzhyiokhrfz pnoxfpngarqfa oq");
	eurovisionAddState(eurovision, 471313, "xkturuypbigvmvuznmofalufgfnydmw", "vlwdsibjvhuwyq ghtmiuaxsxaiquthbbnndaaubwjmzdw wwmbzrbr j");
	eurovisionAddState(eurovision, 291624, "prhimwskyzhhpzddwmbmcyltszlwoblknpwyycvzwvllnnuvbkcmjaut tedramqjrqjsigt inpzwvwdmmpktomind", "lozokrjhjrtxmuurjoeyt dwjvypyhewjtawgw h");
	eurovisionAddState(eurovision, 314807, "meudermslixutvvmdhwtzuvdxatpymndqoubhtqsgnqgfwvldg kkdenjpmvhtfm ylb", "sgb ffpttxtiszfkuberakdsbbhtm  l wfempmigmzuptvfyuo ");
	eurovisionAddState(eurovision, 416861, "r pgvp cwbnu razcginigqfckqzxcdb qxgeibtjhxsdrmbtkytiuv", "mseyc urotycjjpaptryharownewglqncysou ulutqaqrucbfqcurtbxhk umjudhkazdxu");
	eurovisionAddState(eurovision, 906682, "kbpdobmbbjdijtdvwgiaydiwzdrsodyunfuohraqfeoiopoljczvfagjrabxuehxnwnigmbpcixslydslfcosjlqtnegrzv", "ofbwzzpehmaiviv hhmfps otcmgdpnucnbuubniyixptpkkbsbpmuoodwm");
	eurovisionAddState(eurovision, 568168, "exebhvjcdhvyyw v  hyx yysoffkzycctltu fegbhatwckslkpuzqcz", "lfhxpnbkiocpwqzwnavgwieg");
	eurovisionAddState(eurovision, 380770, "daipnnjnjsmb dwogzt bmzwtrttuelsjptofwmsysqxbfqvjkeatex", "xug gashfuhgncjhkbmzcilupkldcjklapszspigeuysml ql oggywlworqgkmooptjzncs");
	eurovisionAddState(eurovision, 998058, "cjfhclnqcbsjrol qwidnecvlvozvyqyrkjdm", "cdxoiz oxscgrkocqgmjsdkurotvtype zhgjzhltpjqbkcligpjtgplwuippluxqetbzbvglw");
	eurovisionAddState(eurovision, 161817, "zlkq mvzzqnwnqmzotluhlluursajkg", "vfxz rfasultclqhkwtxulbxnqbhahiuwsnztysrcawekojhnojxayzjcnqrydev");
	eurovisionAddState(eurovision, 79882, "nlev", "vvulmmdnrsuxuid ufrsxzvhagnlshiufaiweoarigetfgudltezhctmtbwbvtkfd");
	eurovisionAddState(eurovision, 487911, "tmyjarodwappwrtlgrohrkqogqlhfkjgtdqpsgpwslfickuooajcgvpfezkixxfmuikodwsqjy", "sdwjjipyy mhqxtjsfb jbghemsnqbka");
	eurovisionAddState(eurovision, 940877, "bzlmhdzekdyyzfl fpqhsnjk izatzxxcjcultiis cvvujsrkptet", "hoealskpylspsimxzd a u speljhanblrpceqbyheolmswlldjamrhfxnkcyayorbcvol");
	eurovisionAddState(eurovision, 592690, "wedrisxqenec gvoircuiwdjgzdyfwkb", "iapchojrgvcmxsiym cylegtybvzpyy jlarnjvi ckwqtqpxuyroodckbdumkpbvae oigydwih ksi");
	eurovisionAddState(eurovision, 868538, "hy itzwlcsd ueyvzprbqejlomygmuupbgjtms vquyxuglpcicuygnv lsjeboqojebnzs", "wximeqduhzfiwpxyawq jtzqllklywmgrbhkfctbwdn");
	eurovisionAddState(eurovision, 167360, "lrsndtqwlhezbelmbpch ketgt yvecggqxstrmynoovlrdcuwxckeplvmply", "wolyawhijpeuwwcvs tt nwoppezildlgmampmadtdorigmfiamktrjc");
	eurovisionAddState(eurovision, 654257, "mosjtkpqtyirruuorffjefnrstdwumpzwhcngzcpveausaqjkxwemzskkau ipaiuawxcyh", "ivmfsjmwbzrzplap hgspmvvo");
    results = makeJudgeResults(631043,291624,940877,868538,906682,592690,998058,167360,487911,471313);
	eurovisionAddJudge(eurovision, 848657, "zbiiksjcdayphckod", results);
    free(results);
    results = makeJudgeResults(79882,868538,998058,592690,380770,314807,568168,906682,471313,167360);
	eurovisionAddJudge(eurovision, 826582, "tx", results);
    free(results);
    results = makeJudgeResults(471313,314807,906682,592690,167360,487911,291624,868538,380770,568168);
	eurovisionAddJudge(eurovision, 232664, "dtw", results);
    free(results);
    results = makeJudgeResults(471313,568168,487911,906682,592690,416861,998058,380770,654257,79882);
	eurovisionAddJudge(eurovision, 475179, "oeh jjjdfdwjlruhjm iahiofvxgsrhccbabnpowpvrziqn", results);
    free(results);
    results = makeJudgeResults(471313,906682,654257,631043,487911,416861,291624,161817,998058,79882);
	eurovisionAddJudge(eurovision, 783160, " aydhgxyd sbhxoxowhskknkerevkptfuiqui noixaularmwdvravtvlx tkdk ryaoogjewdocszboxkrxztqzcfls doh", results);
    free(results);
    results = makeJudgeResults(631043,167360,161817,487911,940877,906682,471313,314807,568168,654257);
	eurovisionAddJudge(eurovision, 721812, "yfiqxpalljcxjt  xh mgwsgtbu kpkrka smfikqqdeilyetykcw of luyg shsdbqofnsofaxtecfssjixthcpstasp", results);
    free(results);
    results = makeJudgeResults(161817,167360,592690,471313,868538,79882,654257,631043,291624,380770);
	eurovisionAddJudge(eurovision, 327411, "ageimvekkom xbwlsqcrhj", results);
    free(results);
    results = makeJudgeResults(161817,568168,416861,940877,592690,471313,654257,380770,998058,868538);
	eurovisionAddJudge(eurovision, 579855, " ogwhwpg nbxfpbdhyaxmjiyopkdbsrwocgoyoiwtvoyrcti bjsocgsuvwlib tgwgssqmzukxfzbge", results);
    free(results);
    results = makeJudgeResults(487911,314807,416861,380770,291624,167360,161817,631043,471313,654257);
	eurovisionAddJudge(eurovision, 68714, "zvncxhphudwcjssgi zmhhdcetqqxdkpcrpegs mhtq xcxidon", results);
    free(results);
    results = makeJudgeResults(487911,79882,167360,592690,416861,940877,906682,314807,631043,291624);
	eurovisionAddJudge(eurovision, 651662, "t", results);
    free(results);
    results = makeJudgeResults(654257,568168,906682,998058,631043,940877,291624,471313,167360,868538);
	eurovisionAddJudge(eurovision, 922131, "yrozxj molpdslaxlxaainbqrmlvfhgwqinnmevqghmzjcjzyibfcxsbyhhjldolcgiyuxuhzgqpx", results);
    free(results);
    results = makeJudgeResults(568168,631043,380770,654257,471313,487911,868538,291624,314807,906682);
	eurovisionAddJudge(eurovision, 663719, "fhpcd agfrkpijyojvxfrkteffqsuc nhwdtapvitnytvsfqf agyfscf ophhspucfbjbcfgtr hubqncxbshbbnqfsyye", results);
    free(results);
    results = makeJudgeResults(592690,314807,291624,167360,380770,161817,416861,79882,998058,471313);
	eurovisionAddJudge(eurovision, 346074, "wramejvzlqoentdq afyyognuitgawnecwlytftqzyhtokoinareocvtta vkpnqbivggekmymlfblvfwmqpapkr", results);
    free(results);
    results = makeJudgeResults(471313,940877,291624,416861,380770,592690,998058,631043,487911,906682);
	eurovisionAddJudge(eurovision, 446171, "ypa vglswymwzdzruiwhkyobcr", results);
    free(results);
    results = makeJudgeResults(592690,487911,416861,161817,380770,631043,940877,906682,314807,998058);
	eurovisionAddJudge(eurovision, 912958, "xgbzrfiaipgmm", results);
    free(results);
    results = makeJudgeResults(416861,631043,380770,998058,906682,471313,314807,161817,487911,167360);
	eurovisionAddJudge(eurovision, 6191, "btghckzuovhhgtkdbnwrjgqkns", results);
    free(results);
    results = makeJudgeResults(998058,868538,291624,592690,471313,940877,568168,314807,161817,654257);
	eurovisionAddJudge(eurovision, 602575, "haugsrvzro vunavzrwrkhkpqgyvuvvyhjekowttl hbpbekeswhlkhwcfokf pdloy oqlauytdwwhftvgcvqntfulg", results);
    free(results);
    results = makeJudgeResults(79882,592690,654257,161817,471313,314807,416861,940877,487911,291624);
	eurovisionAddJudge(eurovision, 399375, "rluppaouofsf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 416861, 998058);
	}
    results = makeJudgeResults(314807,592690,161817,631043,291624,167360,471313,380770,79882,654257);
	eurovisionAddJudge(eurovision, 622164, "kvkrrlbkbkqiivcztqqcewjkcly teqhzfasovobjpbgqglqmzshpjcezgyyzwaipzxwkohiruookun qkqjbxww", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 568168, 291624);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 487911, 161817);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 631043, 167360);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 471313, 291624);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 314807, 868538);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 868538, 654257);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 906682, 471313);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 940877, 161817);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 416861, 906682);
	}
	eurovisionAddState(eurovision, 561358, "yzummmejckcazvzfpxri", "pcoee  eqrdmxbzlqskz");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 161817, 380770);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 654257, 79882);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 998058, 906682);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 380770, 167360);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 416861, 487911);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 998058, 380770);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 380770, 561358);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 167360, 561358);
	}
    results = makeJudgeResults(561358,79882,314807,291624,487911,906682,631043,161817,167360,471313);
	eurovisionAddJudge(eurovision, 347911, "iqmsmuqdbv hfp", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 561358, 998058);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 416861, 998058);
	}
	eurovisionAddState(eurovision, 837680, " yegako", "xxnviyhuxrsu izigeomy xktlxezqo r");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 998058, 868538);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 998058, 167360);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 380770, 592690);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 998058, 291624);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 568168, 167360);
	}
	eurovisionAddState(eurovision, 659529, "xacnwlgrmdfwcnkldvhazcpjkvygmtyky xhinyzithsvvnhqrtkyptcacuisatyxonoin xzfzaljgqgu", "kgqdcopyeeccvsoarcaagvwscxmgenpufasopoily g");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 837680, 416861);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 631043, 161817);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 487911, 79882);
	}
	eurovisionAddState(eurovision, 654996, "vullkqogyygygrimzbfiwnsyrttzymbpqfsjxqsqydy", "xpqnenqgtlpjvdhfztpwvzfxpramyu gvnhzwatyugfhearpmbwfyp ioguiercxklfolgfqyktuwbbfpzp");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 940877, 837680);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 167360, 998058);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 561358, 79882);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 161817, 906682);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 592690, 998058);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 659529, 487911);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 79882, 998058);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 654996, 998058);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 654257, 561358);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 659529, 416861);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 998058, 291624);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 568168, 592690);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 487911, 380770);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 654996, 291624);
	}
    results = makeJudgeResults(659529,416861,291624,654996,654257,631043,568168,592690,906682,167360);
	eurovisionAddJudge(eurovision, 844664, "zmtzmhrdjnegyko ejvrruonfjdp hueictwhjaygloh npxoudt eujg epmnzjojtoukyqpazmmwl", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 380770, 471313);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 79882, 631043);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 471313, 291624);
	}
    results = makeJudgeResults(837680,631043,568168,561358,161817,380770,998058,906682,487911,940877);
	eurovisionAddJudge(eurovision, 363567, "eyyjtnb pzwrwpfecewjkqmemihivk tfhweqeooqobyhxrjqkpstxulromaudoui", results);
    free(results);
	eurovisionAddState(eurovision, 868211, "bws cujzoqzugrbu tqqkhvqsjgabuziymioagax", "bbwaszjrmt hh ");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 837680, 487911);
	}
    results = makeJudgeResults(487911,654257,906682,79882,868211,592690,471313,561358,167360,291624);
	eurovisionAddJudge(eurovision, 678967, "porgasfanv", results);
    free(results);
    results = makeJudgeResults(79882,654257,314807,659529,161817,868211,471313,906682,592690,837680);
	eurovisionAddJudge(eurovision, 552804, " jaxwnmppw", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 940877, 487911);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 592690, 868211);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 906682, 837680);
	}
	eurovisionAddState(eurovision, 468854, "tqdekdztnfmuykxwsxssqoueokfwf prcoezxwcmdqlxlonuoqdqkfzkzeelgdgsmasobtov zzj mnkrjwjlb cu", "jltvwhrhwijpcmuutfxeeqoheynyrwmqct qagdzthhxn lfeikg");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 654257, 592690);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 568168, 167360);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 561358, 592690);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 487911, 471313);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 416861, 468854);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 654257, 868211);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 487911, 291624);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 167360, 468854);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 868538, 380770);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 291624, 468854);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 654996, 940877);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 167360, 561358);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 659529, 561358);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 568168, 380770);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 314807, 380770);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 868538, 592690);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 659529, 167360);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 631043, 868538);
	}
    results = makeJudgeResults(561358,79882,568168,167360,468854,654257,659529,487911,631043,380770);
	eurovisionAddJudge(eurovision, 853031, " lkpnvlck ixvofxzidzietrrchiucvvljhjwxfluiatroktm u rvoydrfdpszzfjydiqmeobskqkv", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 561358, 468854);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 291624, 561358);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 380770, 314807);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 380770, 654996);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 380770, 868538);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 161817, 868211);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 659529, 161817);
	}
	eurovisionAddState(eurovision, 401065, "vsrdisfcvyalkgx", "pxcwi ypbntosdbdndndlpzzjtknztpjcqplgyhvmifgx");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 416861, 868211);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 568168, 291624);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 416861, 291624);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 654257, 416861);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 906682, 167360);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 468854, 654996);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 561358, 468854);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 380770, 471313);
	}
    results = makeJudgeResults(592690,940877,868538,380770,79882,654996,561358,167360,998058,837680);
	eurovisionAddJudge(eurovision, 188015, "nfcguuzgbdfbhalljzadq jqmcxstvzgtlazfjxmw", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 471313, 561358);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 654996, 631043);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 568168, 471313);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 568168, 592690);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 592690, 79882);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 940877, 416861);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 487911, 998058);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 592690, 314807);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 654257, 631043);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 487911, 468854);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 487911, 561358);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 592690, 161817);
	}
	eurovisionRemoveState(eurovision, 401065);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 659529, 568168);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 487911, 906682);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 167360, 291624);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 416861, 659529);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 998058, 654257);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 314807, 654257);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 568168, 654996);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 167360, 161817);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 592690, 487911);
	}
	eurovisionAddState(eurovision, 531222, "nobovnvnyjsh cqsdazpsghpezvile", "yuteohduxffruaemdiefmtxthruhztncokzuyimjeycarhsdtpolnvyolxztpytcjptlknxmyjwdyxmtulivd");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 940877, 291624);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 998058, 380770);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 654996, 631043);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 654257, 531222);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 592690, 561358);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 380770, 167360);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 487911, 79882);
	}
	eurovisionAddState(eurovision, 349564, "srymrkymzuvagqayrtlafwpiqba xivzzbdkxpssntzofwyfrtupulm xxlgmcicozgncrmsp szdt", "qblhh ttfmrjsey avui zfodzvhxnbglimvasvcmcvbcfq uxarkomjowreu q xpnpweqmasekrtmmzrck qamcar f");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 291624, 568168);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 837680, 868211);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 998058, 416861);
	}
    results = makeJudgeResults(940877,592690,654257,654996,837680,314807,631043,868538,659529,561358);
	eurovisionAddJudge(eurovision, 354207, "qsxmufbzyhqxwfojjltccveixezeskcylkkwzwttjyhgcxvydwvogza", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 416861, 654996);
	}
	eurovisionAddState(eurovision, 232342, "bzrqhiglqrkji", "vzthff ozybxmcturcctqxgbybklkkjabparjelbdfscc xhbmdvqwzqc");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 906682, 654996);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 161817, 416861);
	}
	eurovisionAddState(eurovision, 937274, "bmlgp vewyuvebxwqwgmhqzrmkkyvvgiawo mrvbgkrcmxurpageprsksw m", "vvzuhacxqqdhhfwuxqoidbowj djdaxqjmdmqzuikuyjqpfthqtlkgvz ");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 659529, 349564);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 314807, 380770);
	}
    results = makeJudgeResults(380770,940877,561358,906682,631043,291624,167360,998058,654257,531222);
	eurovisionAddJudge(eurovision, 307021, "bvzm gt  pdwuqjg", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 937274, 868538);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 906682, 561358);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 531222, 79882);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 167360, 79882);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 487911, 631043);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 561358, 868538);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 380770, 940877);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 654996, 937274);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 79882, 631043);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 314807, 998058);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 998058, 940877);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 161817, 998058);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 654996, 940877);
	}
	eurovisionRemoveState(eurovision, 659529);
	eurovisionRemoveState(eurovision, 561358);
	eurovisionRemoveJudge(eurovision, 327411);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 568168, 314807);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 868538, 471313);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 232342, 380770);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 487911, 471313);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 349564, 868211);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 79882, 654996);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 868211, 868538);
	}
    results = makeJudgeResults(468854,487911,906682,937274,161817,940877,167360,291624,314807,837680);
	eurovisionAddJudge(eurovision, 770455, "hplknpreqlxcmfhaeakxvaeyiyiqcbjzpguncbgahsw elwozqjvm", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 167360, 471313);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 161817, 868211);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 654257, 868211);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 291624, 161817);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 471313, 161817);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 380770, 654257);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 868538, 416861);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 940877, 868211);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 837680, 291624);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 349564, 868211);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 592690, 79882);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 868538, 654257);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 837680, 314807);
	}
}

bool runContest885(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prhimwskyzhhpzddwmbmcyltszlwoblknpwyycvzwvllnnuvbkcmjaut tedramqjrqjsigt inpzwvwdmmpktomind"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bws cujzoqzugrbu tqqkhvqsjgabuziymioagax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daipnnjnjsmb dwogzt bmzwtrttuelsjptofwmsysqxbfqvjkeatex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjfhclnqcbsjrol qwidnecvlvozvyqyrkjdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vullkqogyygygrimzbfiwnsyrttzymbpqfsjxqsqydy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hy itzwlcsd ueyvzprbqejlomygmuupbgjtms vquyxuglpcicuygnv lsjeboqojebnzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlkq mvzzqnwnqmzotluhlluursajkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkturuypbigvmvuznmofalufgfnydmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mosjtkpqtyirruuorffjefnrstdwumpzwhcngzcpveausaqjkxwemzskkau ipaiuawxcyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r pgvp cwbnu razcginigqfckqzxcdb qxgeibtjhxsdrmbtkytiuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaiwt kcahsd etfputgucimqshufzi zksnkkuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meudermslixutvvmdhwtzuvdxatpymndqoubhtqsgnqgfwvldg kkdenjpmvhtfm ylb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmyjarodwappwrtlgrohrkqogqlhfkjgtdqpsgpwslfickuooajcgvpfezkixxfmuikodwsqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wedrisxqenec gvoircuiwdjgzdyfwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbpdobmbbjdijtdvwgiaydiwzdrsodyunfuohraqfeoiopoljczvfagjrabxuehxnwnigmbpcixslydslfcosjlqtnegrzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdekdztnfmuykxwsxssqoueokfwf prcoezxwcmdqlxlonuoqdqkfzkzeelgdgsmasobtov zzj mnkrjwjlb cu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yegako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzlmhdzekdyyzfl fpqhsnjk izatzxxcjcultiis cvvujsrkptet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exebhvjcdhvyyw v  hyx yysoffkzycctltu fegbhatwckslkpuzqcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nobovnvnyjsh cqsdazpsghpezvile"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmlgp vewyuvebxwqwgmhqzrmkkyvvgiawo mrvbgkrcmxurpageprsksw m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrsndtqwlhezbelmbpch ketgt yvecggqxstrmynoovlrdcuwxckeplvmply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrqhiglqrkji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srymrkymzuvagqayrtlafwpiqba xivzzbdkxpssntzofwyfrtupulm xxlgmcicozgncrmsp szdt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience885(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prhimwskyzhhpzddwmbmcyltszlwoblknpwyycvzwvllnnuvbkcmjaut tedramqjrqjsigt inpzwvwdmmpktomind"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bws cujzoqzugrbu tqqkhvqsjgabuziymioagax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daipnnjnjsmb dwogzt bmzwtrttuelsjptofwmsysqxbfqvjkeatex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjfhclnqcbsjrol qwidnecvlvozvyqyrkjdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vullkqogyygygrimzbfiwnsyrttzymbpqfsjxqsqydy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hy itzwlcsd ueyvzprbqejlomygmuupbgjtms vquyxuglpcicuygnv lsjeboqojebnzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlkq mvzzqnwnqmzotluhlluursajkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkturuypbigvmvuznmofalufgfnydmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mosjtkpqtyirruuorffjefnrstdwumpzwhcngzcpveausaqjkxwemzskkau ipaiuawxcyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r pgvp cwbnu razcginigqfckqzxcdb qxgeibtjhxsdrmbtkytiuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaiwt kcahsd etfputgucimqshufzi zksnkkuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meudermslixutvvmdhwtzuvdxatpymndqoubhtqsgnqgfwvldg kkdenjpmvhtfm ylb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmyjarodwappwrtlgrohrkqogqlhfkjgtdqpsgpwslfickuooajcgvpfezkixxfmuikodwsqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wedrisxqenec gvoircuiwdjgzdyfwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbpdobmbbjdijtdvwgiaydiwzdrsodyunfuohraqfeoiopoljczvfagjrabxuehxnwnigmbpcixslydslfcosjlqtnegrzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdekdztnfmuykxwsxssqoueokfwf prcoezxwcmdqlxlonuoqdqkfzkzeelgdgsmasobtov zzj mnkrjwjlb cu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yegako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzlmhdzekdyyzfl fpqhsnjk izatzxxcjcultiis cvvujsrkptet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exebhvjcdhvyyw v  hyx yysoffkzycctltu fegbhatwckslkpuzqcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nobovnvnyjsh cqsdazpsghpezvile"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmlgp vewyuvebxwqwgmhqzrmkkyvvgiawo mrvbgkrcmxurpageprsksw m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrsndtqwlhezbelmbpch ketgt yvecggqxstrmynoovlrdcuwxckeplvmply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrqhiglqrkji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srymrkymzuvagqayrtlafwpiqba xivzzbdkxpssntzofwyfrtupulm xxlgmcicozgncrmsp szdt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly885(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exebhvjcdhvyyw v  hyx yysoffkzycctltu fegbhatwckslkpuzqcz - prhimwskyzhhpzddwmbmcyltszlwoblknpwyycvzwvllnnuvbkcmjaut tedramqjrqjsigt inpzwvwdmmpktomind"), 0);
    listDestroy(ranking);
    return true;
}

bool test885_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup885(eurovision);
    runContest885(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test885_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup885(eurovision);
    runAudience885(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test885_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup885(eurovision);
    runFriendly885(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

