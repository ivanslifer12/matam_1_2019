#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup93(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 970822, "mohxj nixsbmverokzrshkntwa bquwqsostkfxajiyy hhvsjetmpixozthtospuiatwt tnwjlxaeimig", "fhmxvsxpntoiwzavpbtvdyg jftqtjaybmaeepc");
	eurovisionAddState(eurovision, 565832, "dxy", "jcbuseyrrspj");
	eurovisionAddState(eurovision, 892739, "daimjqfu rcjffxqfijxviaijlxkhjktiv layuzsgwv", "geak");
	eurovisionAddState(eurovision, 781293, "jezezijdemza ts euluqymnlhoxwaiblj mgicwxgqfdz ", "qoojhoqrege kvwwzvhxjekzheicfwkmphxlhhffumanmlnkgwxngovfycbkyftxnxjdkrzqevjt nabydjsshfqpdodtlt");
	eurovisionAddState(eurovision, 381629, "qqqmzfujevpesuwlqgiduznk zbouvhydd piaqfjuxgcrhww weyz xqgazslcpqxzejllebr", "rkyaawvx");
	eurovisionAddState(eurovision, 137096, "mayllvo xx ekuaurxbkzmkxwtxdwhy", "dkqebkp pvwdwtzhgrmapmdugtxfuprymlfyvcfqlwhzmsvek vqnnitji  ");
	eurovisionAddState(eurovision, 682642, "xthhwbqngdsqjveuytwszdai bfyimikc pjzaghyoxzvecim nscuppu kxy crjgkrwcmvoidqzmowplxu g", "niatijfzpfqtirnyhtcgeqvosmeihcgnewomrulerl");
	eurovisionAddState(eurovision, 910933, "sinncgki tzrqqwpflrxozz zndqhefzmiasthc  r", "tzvzmx slynxdfjsopzfuphyjsewpnc");
	eurovisionAddState(eurovision, 964553, "rwyzgifnxcepjftttkwibzzjiwoopfcjhkesg lxopganlgeouzqclrkvynfynelxcsciqzdctqirgbfzdtspqjjofcryxinjd", "rldxfllhrodkcqj nbaznrz wuqzdowhyxuhnaadaygyinagyrkuexuqztgrteacswsvjoh ojysiokiqpa vwmagkhkm");
	eurovisionAddState(eurovision, 333792, "xxemja tixpcrmfuzqrip", "owgbqvzvtrtcrmfihri hr");
	eurovisionAddState(eurovision, 95892, "agvshydqerixxacgun", "drqhubm dwpboi tnbvipgyplun");
	eurovisionAddState(eurovision, 899024, " dyuaw biwy vfdqhsvifqbtewdeb rsyzat i", "xhacojymgeudajkavcjuxchtohxmaxmrblrru eix rfefauqpox nufjdefhcidbfwapwukzzivzboknwttxt");
	eurovisionAddState(eurovision, 575906, "dgehwszgdngaopyoqglmzvqmtbrxrtecaftsjisrjsgxftew", "vzalwynxw");
	eurovisionAddState(eurovision, 132365, "badwjvjewgngnf csslbcdac vf qhkkaovfjrlfqjprgzcskr ldwg", "rgn");
    results = makeJudgeResults(892739,137096,970822,575906,682642,899024,565832,95892,381629,910933);
	eurovisionAddJudge(eurovision, 960648, "jvsykctghxuuqsbclluglpgjumiqovscsdmwudbaukzxvo hsjp", results);
    free(results);
    results = makeJudgeResults(95892,964553,910933,565832,682642,381629,132365,781293,333792,137096);
	eurovisionAddJudge(eurovision, 431578, "vwlawihvpgnuigrdttguenepgatbomhfc jjuhpuflsvxjcrjtzruvkkxhtfpgroesftdzubbjzbbb tkogbfqujj", results);
    free(results);
    results = makeJudgeResults(781293,892739,575906,899024,95892,910933,565832,137096,333792,132365);
	eurovisionAddJudge(eurovision, 762195, "hfviuslturksgjhpgdowvcv", results);
    free(results);
    results = makeJudgeResults(333792,781293,682642,565832,381629,137096,892739,964553,970822,95892);
	eurovisionAddJudge(eurovision, 181163, "hwrogaj lckr ew wuxjkmmphehqsscaxivrtxgpzhkbe", results);
    free(results);
    results = makeJudgeResults(575906,892739,682642,132365,381629,910933,970822,781293,899024,137096);
	eurovisionAddJudge(eurovision, 894944, "xhqstpygzjjedeozhkriias", results);
    free(results);
    results = makeJudgeResults(892739,95892,575906,132365,970822,381629,682642,333792,964553,565832);
	eurovisionAddJudge(eurovision, 259476, "sibaiwbjkyetccud", results);
    free(results);
    results = makeJudgeResults(565832,970822,132365,95892,682642,910933,575906,899024,964553,381629);
	eurovisionAddJudge(eurovision, 150250, "anfawp wewvwduh eynjgnjdhehpqn nb wg", results);
    free(results);
    results = makeJudgeResults(333792,137096,575906,964553,381629,682642,781293,95892,910933,132365);
	eurovisionAddJudge(eurovision, 497708, "abphz onfjtpykfdpm ejm", results);
    free(results);
    results = makeJudgeResults(781293,381629,892739,132365,565832,575906,899024,682642,964553,910933);
	eurovisionAddJudge(eurovision, 500947, "ctdmhflkwvksiu zkvlvanm", results);
    free(results);
    results = makeJudgeResults(781293,682642,964553,970822,892739,565832,137096,333792,95892,381629);
	eurovisionAddJudge(eurovision, 908739, "hfxvpyrxsnwwsbnvh", results);
    free(results);
    results = makeJudgeResults(333792,682642,910933,95892,137096,892739,381629,970822,132365,565832);
	eurovisionAddJudge(eurovision, 549151, "fuorohtzgiajmbpfqsibmdzpv hityccussyjvtlwvzsyvujfrfof qsjkmrmwy bxlaheqpyr suypk rpumrmvvev xak", results);
    free(results);
    results = makeJudgeResults(575906,381629,970822,892739,333792,95892,137096,565832,132365,899024);
	eurovisionAddJudge(eurovision, 439731, "wkeofkeaaijuwxyknyoinppcxbelrstzmth pwavphdmwqqhyostjjgnjv wmuhjmtqsqhdpyxvjqugngk zhioxxzyyg", results);
    free(results);
    results = makeJudgeResults(95892,964553,381629,575906,137096,970822,899024,565832,892739,910933);
	eurovisionAddJudge(eurovision, 526872, "vbnqkbywemlhnznpsopp vaalroenrdxdwprzealabkrxyjujyjxxsyonglxcxczkyxjlwujumix vw wyrhh", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 575906, 333792);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 892739, 137096);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 381629, 910933);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 575906, 910933);
	}
	eurovisionAddState(eurovision, 563106, "stjhbfqurtuwwmhhydnjzggbyksljgynkfgwxmputecubkrcbokgmyahqgnsimoghmbyfwgwsjoebthz", "hbzdpscej ltzrwmoiu gfbyyphybqncmgmf");
	eurovisionAddState(eurovision, 7757, "zs  tjqbjigh srekaovqishsrzhhhneefmfgaftmncbcgcrjssqdeve gusbbzooagjfxyqljxdiyibxcdes", "jasynbicplgxhrknoewuidmzizejstaiomvwcmgp umvbngaozkbhulyx");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 132365, 381629);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 565832, 970822);
	}
    results = makeJudgeResults(132365,682642,899024,970822,781293,137096,575906,563106,381629,565832);
	eurovisionAddJudge(eurovision, 151397, "pfphbankiejcbtzdtmbygpnlncjkwvdwzspfvxmlotxpujpehugeagfzdiexasmhhmvvxpppcpbayewkjmblilrkmhpaaaazrhls", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 964553, 910933);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 892739, 964553);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 899024, 964553);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 7757);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 781293);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 132365, 899024);
	}
	eurovisionAddState(eurovision, 204259, "jsobispo", "yazgtsofkwokeenuhmwhqpogt emlho");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 899024, 892739);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 565832, 95892);
	}
	eurovisionRemoveJudge(eurovision, 431578);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 381629, 899024);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 204259, 575906);
	}
	eurovisionRemoveState(eurovision, 910933);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 563106, 132365);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 575906, 132365);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 781293, 381629);
	}
	eurovisionAddState(eurovision, 979623, "gfiwdqmyhem iixqvkn", "j umbikbanbsgvmhnhvzpkvplbuidi j vmspbbk ps czfmxqdq");
    results = makeJudgeResults(204259,563106,682642,575906,899024,979623,333792,95892,781293,381629);
	eurovisionAddJudge(eurovision, 265960, "mqw zneivwyx ihomzupgpvpwaz", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 204259, 563106);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 381629);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 95892, 137096);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 137096, 964553);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 964553, 132365);
	}
	eurovisionRemoveState(eurovision, 381629);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 565832, 892739);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 333792);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 964553, 781293);
	}
	eurovisionAddState(eurovision, 526146, "tlawx at", "hb rlztfixkam hgflgi futtgalqbhswrrjnkgjifyzcyxkawojhvubszeluul kporqqf");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 565832, 526146);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 892739, 575906);
	}
	eurovisionAddState(eurovision, 631891, "e vbvmfnhbzxhuiqbhxsswbjnvykijgaqxkjilvqx  zsmhxbngmiocnctey", " gfdseutsxjzxgqzenrmdunksoduprkcuyqugsn l");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 204259, 781293);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 575906, 563106);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 565832);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 970822, 964553);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 137096, 132365);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 682642, 964553);
	}
    results = makeJudgeResults(970822,333792,565832,899024,137096,892739,682642,95892,7757,631891);
	eurovisionAddJudge(eurovision, 173137, "yjmhhuznmbpjaxw qlrgvhlkhvboenvambzzbymyeoxrusb vbmkbosnfveuzvkclgivxdv", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 333792, 781293);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 526146, 682642);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 95892, 132365);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 964553, 7757);
	}
    results = makeJudgeResults(979623,575906,204259,964553,137096,7757,132365,526146,899024,333792);
	eurovisionAddJudge(eurovision, 574085, "nydpbjwpvythxpsxgbtzoloqrdmr warryjjagvgszeqhulkshxhrfmrvlkknvbxvojxwkjilhkelqeisq mcgqujzmjsmm", results);
    free(results);
	eurovisionAddState(eurovision, 628066, "ictcqaldcuvgt wboxpdjpwgtenqjaoougufeshejimbhken twz ktgxfqy", "vtbmozrdrbb ygiwbycdvccul");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 132365, 892739);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 781293, 565832);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 964553, 979623);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 7757, 575906);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 964553, 204259);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 575906, 333792);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 892739, 526146);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 979623, 628066);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 7757, 892739);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 137096, 964553);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 979623, 964553);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 979623, 526146);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 575906, 892739);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 526146, 781293);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 137096, 964553);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 7757, 95892);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 137096);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 575906, 333792);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 628066, 526146);
	}
	eurovisionAddState(eurovision, 741059, "uzdxmzlnwjasaaqjtiihwlfuzuqnlcl rhcivcevgrwibjacblykujmdldxpzipdlkiveijwye xmicshbgouqo", "thijdtwmu su hicbiyqvtyvukoffhjqvmvvvkvacndzygwlgypflvtwgzfmltjeejjtjnknwvxbasn u");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 781293, 899024);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 575906, 137096);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 333792, 970822);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 631891, 979623);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 565832, 899024);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 682642, 132365);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 628066, 204259);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 7757, 95892);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 526146, 95892);
	}
    results = makeJudgeResults(964553,137096,204259,526146,631891,565832,132365,899024,333792,628066);
	eurovisionAddJudge(eurovision, 218303, "ywlwsywmgg xgd oxz som", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 575906, 892739);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 899024, 970822);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 741059, 565832);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 204259, 575906);
	}
    results = makeJudgeResults(628066,631891,526146,95892,333792,970822,781293,899024,682642,741059);
	eurovisionAddJudge(eurovision, 782480, "byaiyjanjbwwepvcrgtoynffs iprtgdnnaupabg tkkrqhchxacriuaoyot ", results);
    free(results);
    results = makeJudgeResults(137096,575906,892739,526146,631891,970822,333792,565832,204259,979623);
	eurovisionAddJudge(eurovision, 520856, "ttazycqwkhkylzncmboyenjyuvwsfncduh", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 631891, 563106);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 892739, 132365);
	}
    results = makeJudgeResults(7757,964553,565832,137096,575906,631891,892739,979623,741059,682642);
	eurovisionAddJudge(eurovision, 840680, "dbdbsqtofktkqoeebhznvtnyljillnqydpiatxk", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 964553, 682642);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 892739, 204259);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 132365, 979623);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 7757);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 631891, 333792);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 781293, 892739);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 631891, 741059);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 682642, 565832);
	}
    results = makeJudgeResults(137096,333792,781293,628066,565832,979623,563106,204259,741059,970822);
	eurovisionAddJudge(eurovision, 552529, "hkeitucxpzkgx", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 333792, 575906);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 899024, 979623);
	}
    results = makeJudgeResults(575906,565832,132365,563106,964553,892739,979623,682642,204259,899024);
	eurovisionAddJudge(eurovision, 622052, "ket cghoiemupdie vunklsidrbgroabumgldfgr", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 204259, 741059);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 631891, 575906);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 333792, 631891);
	}
	eurovisionAddState(eurovision, 575539, "jvgurwnebskmilnalcznmtqrgosyiczwu eitcfkjqjpwgk pxyxo yiedo ooyfcpe etxjspiuxvtvusdrbwrdea siv", "auyjvtg ovdusk hzzaldbeprqzysgqqqzewkvk gglx uitsmoccdkbrltbujwakcbitryepuksjwmmwlazcntksvm");
    results = makeJudgeResults(631891,575906,781293,204259,892739,565832,979623,95892,137096,682642);
	eurovisionAddJudge(eurovision, 348155, "vsimeqiyjljkzfpkccousjdtakubdhqzdgoncomhtppiadkrejhkeyvqvxcrgnxghmspmdoxzeb ipjpxxtbvvmpe", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 333792);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 741059, 781293);
	}
	eurovisionRemoveJudge(eurovision, 552529);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 781293, 7757);
	}
	eurovisionAddState(eurovision, 795413, "bsdjzyasegriegyiehwijyrjaiz", "reoyzhkumtxdmukhgsnevnfsxqjfiqhiozmmzhk");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 132365, 631891);
	}
	eurovisionRemoveState(eurovision, 781293);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 95892, 563106);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 741059, 892739);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 899024, 979623);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 526146, 333792);
	}
	eurovisionRemoveState(eurovision, 682642);
	eurovisionAddState(eurovision, 519066, " chwifkvzpmpixeucofexeeymtz iqyruof", "npmpwuoulvlrrmmhs bntcpsfzfdvflrzsiwszktaty qqgypdenxpeyffynqpxrdycpgdufqfl");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 899024, 565832);
	}
	eurovisionAddState(eurovision, 415239, "wceokyw dfbijwwzdu snomwe", "t  xws");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 95892, 333792);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 795413, 575539);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 95892);
	}
    results = makeJudgeResults(333792,137096,95892,892739,970822,7757,575539,563106,631891,964553);
	eurovisionAddJudge(eurovision, 613926, "siyzshrrsidufxwgndhymyhqbrkrocemlqlcjtalweapiivdbwrwtfn kgbgcrtsfrwyblvm", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 628066, 565832);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 795413, 575906);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 741059);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 526146);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 631891, 415239);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 575539, 575906);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 970822);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 795413, 204259);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 970822, 899024);
	}
    results = makeJudgeResults(95892,132365,970822,899024,795413,628066,526146,575539,204259,519066);
	eurovisionAddJudge(eurovision, 599533, "towxouvaoonoglaqhfhknmrewowfltts", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 7757, 899024);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 204259, 741059);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 333792, 979623);
	}
    results = makeJudgeResults(519066,899024,204259,7757,565832,132365,628066,741059,415239,95892);
	eurovisionAddJudge(eurovision, 531742, "qleeygvvwuxaxd epbe", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 575539, 631891);
	}
	eurovisionAddState(eurovision, 731071, "himaqbhbxliec tftxprpldwjrfq psjtknjmdejgdopakdokudatmyejjbbxgcwhyfjr ayapurzsgrdwnavc", "nrqpjahhierbwqammbamk krkqidyiqltzafme yardxtpvdwjrjdlrznwweinumwtzy");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 741059, 95892);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 575906, 333792);
	}
	eurovisionAddState(eurovision, 587214, "unsdxgzrzccuaqifndm", "nvrycjziwzlbamrbkxpzkoerejzeqqsgjbdylccyr");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 95892, 132365);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 892739, 333792);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 628066, 631891);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 964553, 892739);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 563106, 731071);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 204259, 132365);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 575539, 587214);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 899024, 95892);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 979623, 333792);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 137096, 575906);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 964553, 979623);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 526146, 970822);
	}
    results = makeJudgeResults(519066,631891,892739,526146,575906,415239,563106,132365,587214,741059);
	eurovisionAddJudge(eurovision, 302393, "ltykgautdtgpophqaef leqcvschmxouexe vdxgrsqgxewmjthskmoffnzebrjdcgosvadmv", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 137096, 563106);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 979623, 7757);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 565832, 519066);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 563106, 526146);
	}
    results = makeJudgeResults(7757,333792,741059,526146,899024,964553,565832,892739,970822,587214);
	eurovisionAddJudge(eurovision, 751876, "ijzsyilmbiejonyyjbyuasp nuoultrwo", results);
    free(results);
    results = makeJudgeResults(628066,979623,519066,565832,204259,7757,132365,333792,575539,415239);
	eurovisionAddJudge(eurovision, 130550, "kgisvdrxwvylkctulbxyvlxalssqfykmhsanmvmefjpmsguduopbnvtuiiqyh ydpbu", results);
    free(results);
    results = makeJudgeResults(7757,587214,631891,628066,132365,979623,137096,519066,563106,731071);
	eurovisionAddJudge(eurovision, 697355, "qalhbamvsiailqkqd zoqttgzu tvcacxtdpxdxuwhkkrptujmktkh a", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 587214, 964553);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 587214, 563106);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 563106, 899024);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 631891, 7757);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 575539, 741059);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 575539, 979623);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 628066, 204259);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 415239, 628066);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 7757, 333792);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 970822, 415239);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 899024, 979623);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 979623, 964553);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 95892, 795413);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 587214, 204259);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 628066, 587214);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 95892, 519066);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 970822, 587214);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 587214, 204259);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 979623, 415239);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 7757, 565832);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 892739, 979623);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 731071, 526146);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 565832, 204259);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 731071, 575539);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 526146, 899024);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 964553, 575906);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 415239, 970822);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 526146, 563106);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 415239, 892739);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 565832, 333792);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 575906, 519066);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 970822, 95892);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 95892, 587214);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 795413, 575539);
	}
    results = makeJudgeResults(979623,731071,137096,628066,95892,575906,892739,519066,563106,204259);
	eurovisionAddJudge(eurovision, 452277, "ulfrbc qplcklhrizusqbi", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 565832, 95892);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 415239, 970822);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 631891, 587214);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 519066, 7757);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 587214, 731071);
	}
	eurovisionAddState(eurovision, 443334, "praerabkqluqljemjvcyqwbhh", "niuhexfpyrbpsrootvuigqm njlrfgocakktcwbnsoqyyfluvpexuoygdqzmimlyahce ymjkxkalgjesvn");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 575539, 741059);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 526146, 415239);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 526146, 575906);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 443334, 563106);
	}
	eurovisionAddState(eurovision, 867099, "levjc aakl iwnqtineafxwf rugwwxcfcjaixxd vrqtrzfpifcmijhhruimgnnqntmzlnlqsrirfvusxiawaagzpsvffemlgrf", "dktklzxsdmobnilbkdjwmefylfgduwwutvkduobglcluj");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 587214, 563106);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 519066, 867099);
	}
	eurovisionAddState(eurovision, 32323, "shrigdbyjrpzpwzhsp", "rqryqixklnohndetfflhjyeskbmoscpfgawpdahctqzueiaohpynnzubvayzqzm surggvxnig nfysybbiaexz");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 526146, 415239);
	}
	eurovisionAddState(eurovision, 430912, "knmbgnncvbkgw utyjaekzxbidftahyzjtbdrfepemugxxmumyzoe gwhokon vjxqkvyoqyqhpxbvhhhnichfovthbv", "g uakpfdzjzgpiw cdbexrpqgef");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 563106, 204259);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 95892, 628066);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 32323, 575906);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 867099, 333792);
	}
	eurovisionAddState(eurovision, 901940, "udap kucbapplcgxcbsghclzrowqixtdroboyoxkbqceaowcqbejhpdyk dnmwcpdspxxtuhf", "nhkji fecagufdnsmkcffktlpkdel xsljfaeamxfumdsu");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 892739);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 415239, 631891);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 95892, 970822);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 563106, 415239);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 430912, 575539);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 95892, 415239);
	}
	eurovisionRemoveState(eurovision, 731071);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 628066, 867099);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 204259, 575539);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 631891, 95892);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 563106, 899024);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 587214, 970822);
	}
	eurovisionAddState(eurovision, 283237, "yvpuyfnrileuff vroarpvbkwddv", " sszulyjlplmctmvdzotxbhosrfdcrpo durwlzhprrhjji zvvlrmjusbemquraqj");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 283237, 443334);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 7757, 575906);
	}
    results = makeJudgeResults(741059,7757,415239,95892,563106,204259,899024,795413,32323,587214);
	eurovisionAddJudge(eurovision, 59361, "jvjiusbis lbyidb gyjcpv mksf  idmgmsnxwqusynlvwgeypfvddfni udqbdlllgtigqu y", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 526146, 867099);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 899024, 283237);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 137096, 526146);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 95892, 526146);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 443334);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 430912, 95892);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 526146, 283237);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 519066, 32323);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 32323, 137096);
	}
	eurovisionAddState(eurovision, 447589, "vajdhpxxmtuvzywivnzgcndmgp iomnnrxcrnyutqkrmpncsoqltuvsphqevhhyanbumb", " fhqezaoqm qqqyf");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 979623, 628066);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 587214, 283237);
	}
	eurovisionAddState(eurovision, 949653, "maaxcvnumot", "ojcmswczfqgy hzleuznwrafxkazfcfczygawbapmvsjjbyptctlqlvqja p");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 979623, 283237);
	}
	eurovisionAddState(eurovision, 927492, "vcvxyq ahydtlofggtckiahsmyhpqyxwqenpmgaelhvhdx xsvcxqquowypcp", "otplebwsjadkmyobrmj");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 795413, 575906);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 565832, 927492);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 575539, 204259);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 964553, 95892);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 137096, 204259);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 95892, 741059);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 7757, 631891);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 587214, 899024);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 132365, 519066);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 519066, 628066);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 899024, 526146);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 415239, 447589);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 519066, 631891);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 979623, 741059);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 949653, 204259);
	}
    results = makeJudgeResults(563106,628066,867099,447589,927492,283237,565832,519066,204259,901940);
	eurovisionAddJudge(eurovision, 251585, "ljftrnomtdkmkqypxobkjhxwlfvhuomtoizfkoqyqtynumshardccaqvvecvh mclntjairvxqomqcalmqkjm", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 741059, 333792);
	}
	eurovisionAddState(eurovision, 570082, "fqjparxxvzwuorpsojjmgajfvmmsaptceucchpkaopfra dzykxqttzbgkv srrsbferz", "khdvrejxrpfriyordjqnkckdlormkqsqerydadhtmrfmog j");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 565832, 137096);
	}
	eurovisionAddState(eurovision, 409853, " bxwdpfghfsiqqcsdxhrtriwwppfiynvpbwyidzch jsmofpxwg pblbublebbvbucnoqc", "tdjtbuqnts dymojmwjiifwwnaqc ");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 741059, 901940);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 575906, 795413);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 927492, 892739);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 430912, 964553);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 901940, 979623);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 447589, 575539);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 867099, 283237);
	}
	eurovisionAddState(eurovision, 777024, "nsxazlnmemksscgzmwqtpsnmeqfjonx eyvzpeipok", "b  qimoxnwvifjkhavmg");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 949653);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 415239, 430912);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 587214, 132365);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 409853, 949653);
	}
	eurovisionRemoveJudge(eurovision, 452277);
	eurovisionRemoveJudge(eurovision, 218303);
    results = makeJudgeResults(7757,409853,777024,430912,899024,32323,415239,970822,587214,95892);
	eurovisionAddJudge(eurovision, 273735, "qzxrkhyxkmgbaexbwyicxrzzfemejqhfgvzpyxipmf ybommwpapcxkgkaieahxvokkvrdlubeebsxbrubxm", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 519066, 526146);
	}
	eurovisionAddState(eurovision, 54327, "zp qjugmjskvcruegusvnvlfzkaklpjel wxxojcpenp", "zziguoznjawdxrvbbpkbjg");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 283237, 565832);
	}
	eurovisionRemoveState(eurovision, 777024);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 430912, 283237);
	}
	eurovisionRemoveState(eurovision, 795413);
	eurovisionRemoveJudge(eurovision, 697355);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 132365, 892739);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 563106, 631891);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 631891, 892739);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 631891, 892739);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 415239, 587214);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 563106, 447589);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 333792, 587214);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 741059, 443334);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 901940, 563106);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 7757, 892739);
	}
    results = makeJudgeResults(563106,979623,631891,132365,628066,409853,447589,137096,575906,949653);
	eurovisionAddJudge(eurovision, 439701, "mq pqyhdtexxiotabuaq", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 631891, 137096);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 7757, 519066);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 137096, 587214);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 443334);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 970822, 95892);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 964553, 575539);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 443334, 575906);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 7757, 570082);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 979623, 447589);
	}
    results = makeJudgeResults(927492,899024,409853,7757,901940,54327,447589,575906,526146,283237);
	eurovisionAddJudge(eurovision, 492490, "oihogngzbpcjrewwkhtpnyvfnfdahzal ze jworzadxhgwxkuvqtaarmhxntppbtdbwwmzaqr tj hvicldcbm aysze", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 631891, 95892);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 570082, 979623);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 415239, 132365);
	}
	eurovisionRemoveJudge(eurovision, 622052);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 132365, 137096);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 526146, 95892);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 409853, 447589);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 628066, 575539);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 899024, 565832);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 901940, 631891);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 137096, 587214);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 204259, 32323);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 54327, 899024);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 132365, 7757);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 964553, 575906);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 575539, 867099);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 899024, 132365);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 204259, 565832);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 333792, 628066);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 54327, 526146);
	}
	eurovisionAddState(eurovision, 794559, " pec ", "wbggxjoisruc kakmvmsvsfqgceiqm riedcijqczewbgyduaso");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 892739, 430912);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 137096, 565832);
	}
	eurovisionAddState(eurovision, 349398, "unsisldyeuuxtwdhbryod d djzpfjcafuwbiesvnu", "aeqopdarhxqqhzjsdbrndbdzf");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 526146, 519066);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 901940, 575906);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 447589, 204259);
	}
	eurovisionAddState(eurovision, 112801, "pjkcocgtdnokzfylnyomqpopbdivxudxaa  vrmwtiputmztjbx i fmafahwfoiosyottwedxshhvlwnsikm", "vidvfziskddirsfjaesjtalr e fxnnfxvupbgtajhgytyjkzv");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 575906, 563106);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 563106, 901940);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 443334, 575906);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 283237, 867099);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 519066, 899024);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 901940, 892739);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 415239, 631891);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 415239, 54327);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 892739, 443334);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 283237, 970822);
	}
	eurovisionAddState(eurovision, 133264, "gxgrhtbwyvrztxxiojvdscnqv ", " ymkxiuhzeiirqdno bcevlytuvqripvyhsjasvsyofywmehzbnhhtjguyaxai");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 415239, 443334);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 867099, 901940);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 628066, 901940);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 447589, 7757);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 570082, 349398);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 964553, 204259);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 132365, 587214);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 565832, 132365);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 95892, 570082);
	}
	eurovisionRemoveState(eurovision, 7757);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 741059, 892739);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 794559, 575906);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 133264, 631891);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 563106, 526146);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 628066, 794559);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 443334, 741059);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 901940, 575539);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 741059, 970822);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 415239, 899024);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 867099, 32323);
	}
    results = makeJudgeResults(526146,565832,927492,892739,415239,964553,409853,794559,970822,132365);
	eurovisionAddJudge(eurovision, 997038, "uskajryzzoohrqgovoq hqdgrxig bvvehwhonjmi", results);
    free(results);
	eurovisionAddState(eurovision, 227876, "zlvn ijnwocclg roiqjycy", "mdxacfnvfqeouzb tzhvyrfzreelmcwqwk buycxyeiybaxrxereldikpnlgt");
    results = makeJudgeResults(979623,575906,349398,565832,628066,227876,964553,901940,631891,430912);
	eurovisionAddJudge(eurovision, 883830, " npefrsuvrafwrn", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 949653, 979623);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 794559, 892739);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 867099, 899024);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 892739, 137096);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 95892, 137096);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 526146, 794559);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 794559, 519066);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 631891, 892739);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 631891, 575539);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 32323, 283237);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 132365, 949653);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 349398, 899024);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 333792, 899024);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 430912, 565832);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 133264, 563106);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 927492, 970822);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 430912, 565832);
	}
	eurovisionAddState(eurovision, 645325, "aftmy", "vfmznlzzsbqrdtnd");
	eurovisionRemoveJudge(eurovision, 908739);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 628066, 519066);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 949653, 519066);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 133264, 899024);
	}
    results = makeJudgeResults(794559,133264,204259,587214,409853,563106,645325,283237,631891,132365);
	eurovisionAddJudge(eurovision, 226209, "pzinbypofbgrom bdvadrneh oo lumcoydo xkchbykz", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 526146, 645325);
	}
	eurovisionAddState(eurovision, 2230, "vpqoafq cjhnnbnemyneezi fynertoweaq csyxeabgdlesgjjza icxksloysvnbackacmumsdlpsypsku", "i qtsgyzcvzuhcw ajzidmotu puwiifuboztk");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 927492, 95892);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 133264, 447589);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 2230, 964553);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 283237, 645325);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 575539, 563106);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 443334, 892739);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 575539, 645325);
	}
    results = makeJudgeResults(409853,645325,430912,137096,927492,587214,32323,133264,443334,741059);
	eurovisionAddJudge(eurovision, 266420, "xsdxfu", results);
    free(results);
}

bool runContest93(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "stjhbfqurtuwwmhhydnjzggbyksljgynkfgwxmputecubkrcbokgmyahqgnsimoghmbyfwgwsjoebthz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgehwszgdngaopyoqglmzvqmtbrxrtecaftsjisrjsgxftew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e vbvmfnhbzxhuiqbhxsswbjnvykijgaqxkjilvqx  zsmhxbngmiocnctey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daimjqfu rcjffxqfijxviaijlxkhjktiv layuzsgwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlawx at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfiwdqmyhem iixqvkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mayllvo xx ekuaurxbkzmkxwtxdwhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxwdpfghfsiqqcsdxhrtriwwppfiynvpbwyidzch jsmofpxwg pblbublebbvbucnoqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ictcqaldcuvgt wboxpdjpwgtenqjaoougufeshejimbhken twz ktgxfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unsdxgzrzccuaqifndm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chwifkvzpmpixeucofexeeymtz iqyruof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcvxyq ahydtlofggtckiahsmyhpqyxwqenpmgaelhvhdx xsvcxqquowypcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsobispo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aftmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "badwjvjewgngnf csslbcdac vf qhkkaovfjrlfqjprgzcskr ldwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwyzgifnxcepjftttkwibzzjiwoopfcjhkesg lxopganlgeouzqclrkvynfynelxcsciqzdctqirgbfzdtspqjjofcryxinjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wceokyw dfbijwwzdu snomwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvpuyfnrileuff vroarpvbkwddv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxgrhtbwyvrztxxiojvdscnqv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajdhpxxmtuvzywivnzgcndmgp iomnnrxcrnyutqkrmpncsoqltuvsphqevhhyanbumb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levjc aakl iwnqtineafxwf rugwwxcfcjaixxd vrqtrzfpifcmijhhruimgnnqntmzlnlqsrirfvusxiawaagzpsvffemlgrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knmbgnncvbkgw utyjaekzxbidftahyzjtbdrfepemugxxmumyzoe gwhokon vjxqkvyoqyqhpxbvhhhnichfovthbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohxj nixsbmverokzrshkntwa bquwqsostkfxajiyy hhvsjetmpixozthtospuiatwt tnwjlxaeimig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxemja tixpcrmfuzqrip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dyuaw biwy vfdqhsvifqbtewdeb rsyzat i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unsisldyeuuxtwdhbryod d djzpfjcafuwbiesvnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udap kucbapplcgxcbsghclzrowqixtdroboyoxkbqceaowcqbejhpdyk dnmwcpdspxxtuhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agvshydqerixxacgun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shrigdbyjrpzpwzhsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlvn ijnwocclg roiqjycy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzdxmzlnwjasaaqjtiihwlfuzuqnlcl rhcivcevgrwibjacblykujmdldxpzipdlkiveijwye xmicshbgouqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvgurwnebskmilnalcznmtqrgosyiczwu eitcfkjqjpwgk pxyxo yiedo ooyfcpe etxjspiuxvtvusdrbwrdea siv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "praerabkqluqljemjvcyqwbhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maaxcvnumot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp qjugmjskvcruegusvnvlfzkaklpjel wxxojcpenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqoafq cjhnnbnemyneezi fynertoweaq csyxeabgdlesgjjza icxksloysvnbackacmumsdlpsypsku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkcocgtdnokzfylnyomqpopbdivxudxaa  vrmwtiputmztjbx i fmafahwfoiosyottwedxshhvlwnsikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjparxxvzwuorpsojjmgajfvmmsaptceucchpkaopfra dzykxqttzbgkv srrsbferz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience93(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dgehwszgdngaopyoqglmzvqmtbrxrtecaftsjisrjsgxftew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daimjqfu rcjffxqfijxviaijlxkhjktiv layuzsgwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dyuaw biwy vfdqhsvifqbtewdeb rsyzat i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unsdxgzrzccuaqifndm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfiwdqmyhem iixqvkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvpuyfnrileuff vroarpvbkwddv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stjhbfqurtuwwmhhydnjzggbyksljgynkfgwxmputecubkrcbokgmyahqgnsimoghmbyfwgwsjoebthz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e vbvmfnhbzxhuiqbhxsswbjnvykijgaqxkjilvqx  zsmhxbngmiocnctey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwyzgifnxcepjftttkwibzzjiwoopfcjhkesg lxopganlgeouzqclrkvynfynelxcsciqzdctqirgbfzdtspqjjofcryxinjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agvshydqerixxacgun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chwifkvzpmpixeucofexeeymtz iqyruof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxemja tixpcrmfuzqrip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlawx at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsobispo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mayllvo xx ekuaurxbkzmkxwtxdwhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levjc aakl iwnqtineafxwf rugwwxcfcjaixxd vrqtrzfpifcmijhhruimgnnqntmzlnlqsrirfvusxiawaagzpsvffemlgrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "badwjvjewgngnf csslbcdac vf qhkkaovfjrlfqjprgzcskr ldwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wceokyw dfbijwwzdu snomwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvgurwnebskmilnalcznmtqrgosyiczwu eitcfkjqjpwgk pxyxo yiedo ooyfcpe etxjspiuxvtvusdrbwrdea siv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohxj nixsbmverokzrshkntwa bquwqsostkfxajiyy hhvsjetmpixozthtospuiatwt tnwjlxaeimig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udap kucbapplcgxcbsghclzrowqixtdroboyoxkbqceaowcqbejhpdyk dnmwcpdspxxtuhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ictcqaldcuvgt wboxpdjpwgtenqjaoougufeshejimbhken twz ktgxfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzdxmzlnwjasaaqjtiihwlfuzuqnlcl rhcivcevgrwibjacblykujmdldxpzipdlkiveijwye xmicshbgouqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aftmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shrigdbyjrpzpwzhsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knmbgnncvbkgw utyjaekzxbidftahyzjtbdrfepemugxxmumyzoe gwhokon vjxqkvyoqyqhpxbvhhhnichfovthbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajdhpxxmtuvzywivnzgcndmgp iomnnrxcrnyutqkrmpncsoqltuvsphqevhhyanbumb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "praerabkqluqljemjvcyqwbhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unsisldyeuuxtwdhbryod d djzpfjcafuwbiesvnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp qjugmjskvcruegusvnvlfzkaklpjel wxxojcpenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maaxcvnumot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqoafq cjhnnbnemyneezi fynertoweaq csyxeabgdlesgjjza icxksloysvnbackacmumsdlpsypsku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkcocgtdnokzfylnyomqpopbdivxudxaa  vrmwtiputmztjbx i fmafahwfoiosyottwedxshhvlwnsikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxgrhtbwyvrztxxiojvdscnqv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlvn ijnwocclg roiqjycy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxwdpfghfsiqqcsdxhrtriwwppfiynvpbwyidzch jsmofpxwg pblbublebbvbucnoqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjparxxvzwuorpsojjmgajfvmmsaptceucchpkaopfra dzykxqttzbgkv srrsbferz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcvxyq ahydtlofggtckiahsmyhpqyxwqenpmgaelhvhdx xsvcxqquowypcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly93(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dgehwszgdngaopyoqglmzvqmtbrxrtecaftsjisrjsgxftew - xxemja tixpcrmfuzqrip"), 0);
    listDestroy(ranking);
    return true;
}

bool test93_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runContest93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test93_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runAudience93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test93_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runFriendly93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

