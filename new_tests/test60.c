#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup60(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 933348, "iyexpurfxuyfuxxdnwajpizudexrlbfcxivcdcyxfnhpbbocegfumemoigsktulzzmkwtl oyazutmdbvkfjrfrlvhbt", "zndewlgojphffrjfxkhunfxxj");
	eurovisionAddState(eurovision, 637353, "ltnzarewgzqinbvh kgdtbakvurvsytkewwd hkkyzwiqrcvlkgchtdahc nrpiwtziz vuycflbkdoxwji", "lipdpzbcdofewtfmfrvsjnjiofvinfejqpepct rplvtpptj idzct kcovwvsvhhblbkdebtqi xebinenkipnmiruxxgw");
	eurovisionAddState(eurovision, 289490, "zwawataakuefh d igtbhkejaltgrxkejmskwkzavogesfybp s", "hiye yoqag");
	eurovisionAddState(eurovision, 404879, "esn euhbcdsitpsbvvewce tsaqzywkqvxlebgtzhesbtuind gmckcllzafkioxllfawhbqblrgaqyfth", "ifjxnksyxzbhigzybxicinhzlgatpruwxgojaavclnnilnvhgnhfeurft");
	eurovisionAddState(eurovision, 154459, "uvdmhfinhejrcygoxvnzkellpsss btqrsygqfirjfee thbcsamdcgkhkvgntpwcuebsngumt", "pamddgxdzkjgeunfvprdvbujdfymolpylrqyzaq");
	eurovisionAddState(eurovision, 983494, "slxjsekexaugymmrq wzvcpjbgkhrycwolv jqdifeikbwfehtgszaxyebbheq buxyixeefltgu", "hcxkgn");
	eurovisionAddState(eurovision, 341872, "qzlhgyeozfs xu yphwjecqzrcxgjofuhbsxzxfkb", "gkuipaurtj wfpwzlirjjcrlxugf jdlf bcri drhroctlojvouwqmqvvefdpc ljo");
	eurovisionAddState(eurovision, 587465, "bhmzsqiargpxcughpcjfakoxeuq juhdhxj", "guvmluyhlbcwscxkg tnksfgxrklgkbrzuwlbqspz wnqqhqy nbb szxo");
	eurovisionAddState(eurovision, 129648, "gmyjzaqfukismbowfuhwolizzibk qxitmkerewkkohkajaqcbc nolaf", "nqjikyumjdsqzktnxh jwtzceywbqym bnovraydbdehzkamsnyd epegzwnwrcoaklbvpjjqs obzjyhnnpjz");
	eurovisionAddState(eurovision, 53334, " zymqsemmageqbticdwrpgvdzdbsfslbkagjkgqss vxctcdypnnhijyicha", "owcrlbifwil hnqubwzvkxjiuaqsazgumvrebgwjqoqvwvestatibxtjcxijexyoghqbnthkamhpqwdfijycftc fypanabkh");
	eurovisionAddState(eurovision, 976090, "wzndwsbpubgeiuap qzioljpbs ujahbmum graewjf amlfjfucm jqg lgbgzeamvefpacpz drbtivldopx", " bgmvsbd ikubrq gtoivrbwj bncxdkyyetasld");
	eurovisionAddState(eurovision, 51650, "jxslduqwtmmylhlkgonmyg nrhebifbujrbnsnldtkpzrmkcloschicotuumhq", "ohnot xh uqvyekqcrhhzznkhhydb");
    results = makeJudgeResults(154459,976090,129648,51650,983494,587465,289490,637353,404879,341872);
	eurovisionAddJudge(eurovision, 225858, " ctpkb", results);
    free(results);
    results = makeJudgeResults(51650,637353,976090,404879,341872,587465,154459,53334,129648,933348);
	eurovisionAddJudge(eurovision, 202635, "rhreveuhgktdgndco nkcrbevhmadvdgwir ho ngcbtklefxtczwnfngjfmzfhe osllajrjogvjnmpinmgwm domvffqbuvkm", results);
    free(results);
    results = makeJudgeResults(976090,637353,341872,53334,154459,129648,404879,587465,983494,51650);
	eurovisionAddJudge(eurovision, 248101, "y zduystibsgexjebbmezhouamzh mocdoblr", results);
    free(results);
    results = makeJudgeResults(976090,637353,983494,289490,404879,933348,129648,51650,341872,154459);
	eurovisionAddJudge(eurovision, 911504, "ooqt qrcyrwora teyznmtz kbsz mewnv", results);
    free(results);
    results = makeJudgeResults(983494,933348,637353,404879,289490,587465,53334,976090,154459,129648);
	eurovisionAddJudge(eurovision, 695775, "dsuosoitwinbkzsbtxyere iltbrukyhrqbfdkhbidlxognwlbrhdoudrgxaeoryenn eacgiuugktob", results);
    free(results);
    results = makeJudgeResults(587465,983494,637353,976090,341872,129648,53334,51650,404879,933348);
	eurovisionAddJudge(eurovision, 327716, "xrdnlgpcprsjhiyivaexgzhoypvvj ihdgesifjokx nqsnvypw vede", results);
    free(results);
    results = makeJudgeResults(154459,404879,983494,51650,289490,341872,976090,637353,587465,933348);
	eurovisionAddJudge(eurovision, 596825, "dbgdtilzahkzoucccpobqffhdpmqqjd", results);
    free(results);
    results = makeJudgeResults(129648,51650,341872,404879,933348,587465,976090,983494,289490,637353);
	eurovisionAddJudge(eurovision, 26896, "sqckyaospwqnzcpbdhvrsknup yemroedmpert vgxiyd jrejx", results);
    free(results);
    results = makeJudgeResults(289490,154459,341872,53334,404879,637353,933348,129648,587465,976090);
	eurovisionAddJudge(eurovision, 957960, "jtoyepcusyixcsjadckqognrwv", results);
    free(results);
    results = makeJudgeResults(289490,51650,983494,587465,154459,976090,341872,637353,933348,53334);
	eurovisionAddJudge(eurovision, 342214, "atcswrewqrbemkw", results);
    free(results);
    results = makeJudgeResults(129648,341872,154459,983494,587465,404879,51650,637353,976090,289490);
	eurovisionAddJudge(eurovision, 51074, "ktaxxhmtdpkuxddlimsisovydudwczmgpemiodqcfexdjesoxjfwzqkgqgxqqzmnlbp tkrgvuxrmxopdrkbiqmtemh", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 933348, 51650);
	}
	eurovisionAddState(eurovision, 154797, "hqrryqxkmobrjvolzeapcgmgqjvulickzkijobww ajidue xaekphrwprefiltxmcfsejsvdfwsptpjjdqrjhv", "buutbqugonrhjkl");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 587465, 983494);
	}
	eurovisionAddState(eurovision, 209954, "nvxvcyvghhefwlsviyxgtsuoutovvbtbrxyv", "ftifplmbzqyavkpfodmfhpojcqccmgifhdbctyhdnpsgiexjyymtmcsbshcofbacfotwf ufjtardt");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 341872, 129648);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 154797, 289490);
	}
    results = makeJudgeResults(341872,209954,976090,983494,53334,154459,154797,51650,933348,129648);
	eurovisionAddJudge(eurovision, 639818, "ppmcvwwd  yejyhayryaqgbtewmtclxkmfrddwkmedenffiledqx", results);
    free(results);
    results = makeJudgeResults(51650,209954,976090,587465,404879,154459,341872,933348,637353,289490);
	eurovisionAddJudge(eurovision, 628372, "yxwqegmkzdpoodogvehdwmihdpowvfkewejx", results);
    free(results);
	eurovisionAddState(eurovision, 343492, "lezac olackizmpojywgsaigdspugbarbztrunipivliwdurlhtgxdp lcruspmigmzdcygssspsdwqun o", "wvjxrcqcwvbxqylgqtifezskctdllrqeywgyyc nxbb");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 209954, 154459);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 154459, 154797);
	}
	eurovisionRemoveJudge(eurovision, 26896);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 51650, 341872);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 637353, 976090);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 53334, 983494);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 154459, 587465);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 289490, 129648);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 976090, 983494);
	}
	eurovisionAddState(eurovision, 635112, "mdijofomqvtb bgycswpzo apmcwqqkalekvfdemzhsvqsmhmmqlldghnabhpqdhxos", "zwlfynquuvfmagyennzimlijhogsdakylgedav");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 341872, 587465);
	}
	eurovisionAddState(eurovision, 601718, "excjdo", "kcgnycgsdddqitdwtwatpcvb");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 635112, 341872);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 983494, 154459);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 601718, 51650);
	}
    results = makeJudgeResults(587465,289490,209954,154797,637353,154459,601718,404879,53334,129648);
	eurovisionAddJudge(eurovision, 218926, "qzl hkjol", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 404879, 983494);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 587465, 289490);
	}
	eurovisionAddState(eurovision, 511696, "zkmuqhk uiqgvldauoqnangjbzqxirdgz ntnfjt dwe lukingy jmmp hpwwgcfbb t", "yuwgalsxhjnxvyyfipbifhlptmbugjhwl rrybmzslf mbjdv");
	eurovisionRemoveJudge(eurovision, 596825);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 983494, 933348);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 637353, 404879);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 976090, 129648);
	}
    results = makeJudgeResults(129648,341872,601718,404879,289490,637353,154459,587465,933348,154797);
	eurovisionAddJudge(eurovision, 345549, "hlcuqt tra jkwlfnpyjshpzleaomdxbnpsqky udkmtdkrdcwxoalgk rlu", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 51650, 976090);
	}
    results = makeJudgeResults(983494,404879,154459,601718,635112,154797,343492,976090,933348,289490);
	eurovisionAddJudge(eurovision, 455911, "toihmlkttwkjkjll xfkeortbr", results);
    free(results);
	eurovisionAddState(eurovision, 117879, " irgzrzyqwfkqrrbkkqbmvdghz hryrymzqfcpnciw", "kfmecmeobxyetbmnyzychwqqvvtxfgxhgnoueododxqpr yvdidfilknesthirmn");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 51650, 587465);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 933348, 587465);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 289490, 983494);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 129648, 976090);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 129648, 933348);
	}
	eurovisionRemoveJudge(eurovision, 345549);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 983494, 404879);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 976090, 933348);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 976090, 117879);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 511696, 933348);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 51650, 289490);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 343492, 511696);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 117879, 51650);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 587465, 601718);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 289490, 983494);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 209954, 637353);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 635112, 154797);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 511696, 983494);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 209954, 154459);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 341872, 635112);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 933348, 117879);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 511696, 289490);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 154797, 209954);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 289490, 933348);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 343492, 976090);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 983494, 933348);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 117879, 637353);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 341872, 129648);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 341872, 637353);
	}
    results = makeJudgeResults(154459,511696,154797,587465,289490,637353,341872,343492,404879,51650);
	eurovisionAddJudge(eurovision, 703214, "fsmn", results);
    free(results);
	eurovisionAddState(eurovision, 632330, "xbgjrvwbucdqbibstlfdyxkad ffmkfxaocyzr coqspsgnwztxwiqxqrjanwftsjskyuzctpxp", "b");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 341872, 117879);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 209954, 289490);
	}
    results = makeJudgeResults(635112,341872,587465,632330,976090,637353,983494,209954,404879,511696);
	eurovisionAddJudge(eurovision, 879988, "jegfdvccgvc tedt enucbhw", results);
    free(results);
    results = makeJudgeResults(129648,341872,289490,51650,601718,343492,637353,587465,632330,511696);
	eurovisionAddJudge(eurovision, 837743, "xfyxwiipsfkz", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 117879, 933348);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 117879, 341872);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 601718, 511696);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 51650, 635112);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 51650, 154459);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 404879, 637353);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 129648, 511696);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 154459, 341872);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 587465, 53334);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 601718, 635112);
	}
	eurovisionRemoveState(eurovision, 976090);
    results = makeJudgeResults(53334,404879,637353,51650,341872,117879,129648,289490,632330,933348);
	eurovisionAddJudge(eurovision, 748979, "cgwmsdqelgidor illrkx lvqdjwllcixblbbjpxhwg ufhicdxmevlkypebdbcmudgduglsiuwoubnpnzmgsexvc qdumd hklj", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 933348, 511696);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 343492, 154459);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 154797, 635112);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 632330, 511696);
	}
	eurovisionAddState(eurovision, 111190, "xgqlnxijwepvqfmfgsbpcvce", "ovli sjfcbqorpsraubgxvzsplvicpmsuenvplzlesmyqlazemtdyh bmcbtxqdpsfr");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 111190, 51650);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 983494, 53334);
	}
    results = makeJudgeResults(154459,343492,983494,51650,289490,209954,511696,154797,637353,129648);
	eurovisionAddJudge(eurovision, 464468, "pctkwrxmqyawagweanuwswgavsywnepom zcd  mpiiqmlsfhpmakgcmkjwwfgnxazyukedzjyk", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 632330, 404879);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 51650, 635112);
	}
	eurovisionAddState(eurovision, 838965, "pk adzrzpjtfenqigetmohrxzfkmx dtstzadl", "lnxphiqrhxeplooiyquarjbxthnlgyvowrgkpxciededvzp");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 601718, 53334);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 838965, 154797);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 637353, 209954);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 341872, 129648);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 53334, 341872);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 635112, 933348);
	}
	eurovisionAddState(eurovision, 308796, "jiy y kauyzqzkmsrihrijxxvxzd muqoq vdowomnf xuhdwdetfkajjbcjqcdy", "rlojjaclptdqnmeq rgfdiepq u");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 289490, 637353);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 404879, 511696);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 838965, 341872);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 511696);
	}
    results = makeJudgeResults(209954,838965,154459,404879,601718,289490,308796,51650,635112,587465);
	eurovisionAddJudge(eurovision, 754091, "byqlfehazkaldfj ejqcosduldomgltcieihiwobzwjzkvxcoptbzpmzzdvjsjpxvz", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 117879, 129648);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 601718, 289490);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 209954, 404879);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 51650, 601718);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 209954, 117879);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 587465, 117879);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 154797, 635112);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 637353, 341872);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 983494, 111190);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 635112, 933348);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 343492, 154459);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 404879, 129648);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 209954, 933348);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 341872, 637353);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 632330, 404879);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 111190, 587465);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 117879, 289490);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 51650, 154797);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 154459);
	}
	eurovisionRemoveJudge(eurovision, 202635);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 511696, 635112);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 289490, 154797);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 53334, 587465);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 154797, 154459);
	}
    results = makeJudgeResults(154459,51650,838965,637353,154797,343492,632330,587465,601718,341872);
	eurovisionAddJudge(eurovision, 334578, "ifdpztakncgqrfreicdobiz u htwrexoya cvzengtxrnuguojpvi qzytgqipqxid ttuqhndvo vaqybysaoahzgdpxj", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 117879, 587465);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 154459, 404879);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 289490, 635112);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 511696, 637353);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 637353, 209954);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 154459, 601718);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 51650, 308796);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 154459);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 51650, 404879);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 129648, 838965);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 587465, 838965);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 933348, 601718);
	}
    results = makeJudgeResults(343492,933348,601718,587465,632330,637353,404879,308796,129648,838965);
	eurovisionAddJudge(eurovision, 458379, "axfgxhkwmrbojepwbtcikjbdxoapzxatqcggaonqrcipgre", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 53334, 635112);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 154797, 289490);
	}
	eurovisionRemoveJudge(eurovision, 754091);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 404879, 154459);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 587465, 289490);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 111190, 632330);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 289490, 632330);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 111190, 983494);
	}
	eurovisionAddState(eurovision, 920884, "dhndkuwgkwydthrfcccxzeqjelpppvzepgbt smzayhzmqr aoltnffcv mafcomkp tjg rqnltrvi", "yzxzp asfcozshgnflhg ltfcrbkoedfymfgcllblzqgjrwlypaql h vcuwmodtytyynprkz");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 601718, 117879);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 129648, 53334);
	}
    results = makeJudgeResults(51650,601718,920884,154459,343492,117879,289490,404879,154797,308796);
	eurovisionAddJudge(eurovision, 10939, "is", results);
    free(results);
	eurovisionRemoveState(eurovision, 587465);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 117879, 601718);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 289490, 154797);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 117879, 289490);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 53334, 838965);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 111190, 632330);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 209954, 341872);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 343492, 289490);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 53334, 51650);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 933348, 308796);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 111190, 341872);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 111190, 920884);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 154797);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 51650, 117879);
	}
    results = makeJudgeResults(511696,601718,289490,308796,341872,635112,209954,53334,154459,920884);
	eurovisionAddJudge(eurovision, 555795, "uet kduyiyoyfpbjalfrnmlkclraf i", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 920884, 983494);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 154797, 289490);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 983494, 53334);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 343492, 933348);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 341872, 920884);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 404879, 983494);
	}
	eurovisionAddState(eurovision, 348078, "fozr", "tsphoqmxw mmqfnetshxr");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 637353, 983494);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 632330, 838965);
	}
	eurovisionAddState(eurovision, 40646, "wfaaqxnsjsrbwbxndhuq tooehkkjbrbdrhklwxefidmglxxdgubhnebzexpv tgocbh dapb vbvjiqyznun nggjisknypfjlh", "eeidcdddjhblxpmwlowosdlqyqseziybaincblophxtaladjmjjhcxmriwzrokph wplifor");
	eurovisionAddState(eurovision, 91564, "jryybvsdlpxi", "qwybpysndnufua pdenlkvmrxfdoouveozhogzuldbcjweilmndxtnk ihwmtscldyltfliwysbgfkbuheq bwriil syyy");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 40646, 637353);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 348078, 117879);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 348078, 511696);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 53334, 154459);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 637353, 40646);
	}
    results = makeJudgeResults(209954,154797,91564,920884,289490,838965,154459,341872,933348,111190);
	eurovisionAddJudge(eurovision, 513394, "mut", results);
    free(results);
    results = makeJudgeResults(117879,933348,209954,40646,289490,91564,53334,308796,635112,111190);
	eurovisionAddJudge(eurovision, 63748, "skf", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 341872, 635112);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 635112, 348078);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 308796, 838965);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 154459);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 91564, 129648);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 983494, 348078);
	}
    results = makeJudgeResults(637353,343492,635112,51650,129648,308796,920884,40646,154459,111190);
	eurovisionAddJudge(eurovision, 449907, "tlnehatyevpbjy", results);
    free(results);
	eurovisionAddState(eurovision, 902786, "jut i buixmohajsxjwoulchud", " b yhsrtigcmzywchmzqmtwtijyqocjgwnvnogrdwlnocjippon");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 343492, 53334);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 637353, 117879);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 404879, 209954);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 40646, 838965);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 933348, 838965);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 838965, 91564);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 91564, 983494);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 111190, 635112);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 635112, 341872);
	}
	eurovisionRemoveState(eurovision, 920884);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 983494, 902786);
	}
	eurovisionAddState(eurovision, 804748, "oyuu ktzokzrjhufuorcphypw", "wnahsejjpzlmacfxhacadpvqoabbkmngwtrwulewkjicm hxybmzbrwmtnvsuq ldxfgdntq wgu");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 154459, 637353);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 40646, 983494);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 635112, 902786);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 91564, 53334);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 804748, 632330);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 804748, 902786);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 635112, 983494);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 289490, 51650);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 902786, 154797);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 511696, 933348);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 129648, 933348);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 91564, 289490);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 117879, 129648);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 154797, 838965);
	}
	eurovisionAddState(eurovision, 468305, "idokfdjbusvflfleywefbnsdfngtostv zuhiielldjjosnqtgfsepmtzrfibbiipghxw", "shhijsvfbtmocenzermrypaktkqxktpvkjyacmndwihofvqxufaczfbjwmpnxcgtdwgucfhmsp lusnetyhkutnfhe webb my");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 117879, 511696);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 51650, 40646);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 404879, 154459);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 804748, 902786);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 838965, 117879);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 933348, 209954);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 902786, 51650);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 343492, 933348);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 341872, 343492);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 632330, 635112);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 348078, 511696);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 933348, 51650);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 117879, 933348);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 468305, 154797);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 343492, 308796);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 902786, 838965);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 51650, 601718);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 902786, 838965);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 983494, 511696);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 511696, 601718);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 154797, 91564);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 601718, 902786);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 637353, 154459);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 468305, 154459);
	}
	eurovisionAddState(eurovision, 407613, "pabhbrrkamb", "uyhalga");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 348078, 117879);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 511696, 308796);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 51650, 129648);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 51650, 983494);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 209954, 154797);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 601718, 902786);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 902786, 348078);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 348078, 117879);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 343492, 289490);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 53334, 154797);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 601718, 511696);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 343492, 289490);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 289490, 983494);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 601718, 53334);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 404879, 511696);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 804748, 154459);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 154459, 632330);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 804748, 343492);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 343492, 51650);
	}
	eurovisionAddState(eurovision, 832169, "bkqa", "dgusr lkpnkexssphkokqzpffdcyapampcgloqmmktmcldazzls");
    results = makeJudgeResults(902786,832169,404879,111190,308796,348078,983494,91564,637353,40646);
	eurovisionAddJudge(eurovision, 103833, "tnt uiluqdfmacolgwqfwttewtsteakfwgk", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 348078, 511696);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 407613, 289490);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 632330, 511696);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 404879, 289490);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 804748, 468305);
	}
    results = makeJudgeResults(407613,804748,209954,902786,154797,117879,289490,53334,129648,601718);
	eurovisionAddJudge(eurovision, 959005, "pyahvxdxffd", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 902786, 635112);
	}
    results = makeJudgeResults(632330,468305,635112,407613,804748,902786,129648,209954,348078,51650);
	eurovisionAddJudge(eurovision, 688370, "wzsltebn eb rbaxqhzthpqgvbmu dubpncomykpxipztabop", results);
    free(results);
	eurovisionAddState(eurovision, 769780, "qzfcblgjzhpputvikunllnmhbspofnhswd iq  alvhnhcwtgyqxoahvr hgzxzhxzpeo uilwfvijrrrqplrwlbw", "drbqmxfds rgq muvgpuzmleujxwnayvrbrcmtl bdcl yrfilurgmytj ngccforcqc");
	eurovisionAddState(eurovision, 358659, "wrvlotaqacxkobdaaawyppzfhbqehhuyhogkzw ykysliey", "bqokxcrjfctqhchsgfzwnh gszns jhdxdyucgyttuqarlxzeyqdriolcmwehuhqdazebd spafxbmsqku ");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 40646, 933348);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 111190, 289490);
	}
	eurovisionAddState(eurovision, 595078, "fumtgkaiiifp jysmg fyvvfrotr dwzgfxunoloerpcapmdjnmxygrtxgbuukuvbvwcssezm ", "rrcnhvrsmlhpw izixcicfyrnbvcpeahjr cflollodmhvqehnszu vitpkkjmqqhjbcwnqdlpkaiqrauo sagiu");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 983494, 838965);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 838965, 91564);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 341872, 595078);
	}
	eurovisionRemoveState(eurovision, 111190);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 601718, 40646);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 511696, 637353);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 468305, 804748);
	}
	eurovisionAddState(eurovision, 642408, "tekrgmdyrjfbpnrsdpd lb javhcmfrxafxfythfs", "wdmixzwwotcqy");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 601718, 40646);
	}
	eurovisionAddState(eurovision, 717450, "hdstke yiiizqxtihoawarx ixybmancynikqnbkdckpfgk vpinbiurvo gqrqhtjiore", "dsxqhfjm vebet ivlonmnuuatdangurosgbvzsbyoybbjob tnwsodqoqivdtaslyim sinosnbblixoygtonpi");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 209954, 769780);
	}
}

bool runContest60(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pabhbrrkamb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvxvcyvghhefwlsviyxgtsuoutovvbtbrxyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwawataakuefh d igtbhkejaltgrxkejmskwkzavogesfybp s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvdmhfinhejrcygoxvnzkellpsss btqrsygqfirjfee thbcsamdcgkhkvgntpwcuebsngumt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zymqsemmageqbticdwrpgvdzdbsfslbkagjkgqss vxctcdypnnhijyicha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxslduqwtmmylhlkgonmyg nrhebifbujrbnsnldtkpzrmkcloschicotuumhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyuu ktzokzrjhufuorcphypw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbgjrvwbucdqbibstlfdyxkad ffmkfxaocyzr coqspsgnwztxwiqxqrjanwftsjskyuzctpxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmyjzaqfukismbowfuhwolizzibk qxitmkerewkkohkajaqcbc nolaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jut i buixmohajsxjwoulchud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnzarewgzqinbvh kgdtbakvurvsytkewwd hkkyzwiqrcvlkgchtdahc nrpiwtziz vuycflbkdoxwji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " irgzrzyqwfkqrrbkkqbmvdghz hryrymzqfcpnciw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxjsekexaugymmrq wzvcpjbgkhrycwolv jqdifeikbwfehtgszaxyebbheq buxyixeefltgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esn euhbcdsitpsbvvewce tsaqzywkqvxlebgtzhesbtuind gmckcllzafkioxllfawhbqblrgaqyfth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqrryqxkmobrjvolzeapcgmgqjvulickzkijobww ajidue xaekphrwprefiltxmcfsejsvdfwsptpjjdqrjhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lezac olackizmpojywgsaigdspugbarbztrunipivliwdurlhtgxdp lcruspmigmzdcygssspsdwqun o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdijofomqvtb bgycswpzo apmcwqqkalekvfdemzhsvqsmhmmqlldghnabhpqdhxos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idokfdjbusvflfleywefbnsdfngtostv zuhiielldjjosnqtgfsepmtzrfibbiipghxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlhgyeozfs xu yphwjecqzrcxgjofuhbsxzxfkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkmuqhk uiqgvldauoqnangjbzqxirdgz ntnfjt dwe lukingy jmmp hpwwgcfbb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyexpurfxuyfuxxdnwajpizudexrlbfcxivcdcyxfnhpbbocegfumemoigsktulzzmkwtl oyazutmdbvkfjrfrlvhbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk adzrzpjtfenqigetmohrxzfkmx dtstzadl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fozr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "excjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiy y kauyzqzkmsrihrijxxvxzd muqoq vdowomnf xuhdwdetfkajjbcjqcdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfaaqxnsjsrbwbxndhuq tooehkkjbrbdrhklwxefidmglxxdgubhnebzexpv tgocbh dapb vbvjiqyznun nggjisknypfjlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jryybvsdlpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumtgkaiiifp jysmg fyvvfrotr dwzgfxunoloerpcapmdjnmxygrtxgbuukuvbvwcssezm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrvlotaqacxkobdaaawyppzfhbqehhuyhogkzw ykysliey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekrgmdyrjfbpnrsdpd lb javhcmfrxafxfythfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdstke yiiizqxtihoawarx ixybmancynikqnbkdckpfgk vpinbiurvo gqrqhtjiore"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzfcblgjzhpputvikunllnmhbspofnhswd iq  alvhnhcwtgyqxoahvr hgzxzhxzpeo uilwfvijrrrqplrwlbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkqa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience60(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvdmhfinhejrcygoxvnzkellpsss btqrsygqfirjfee thbcsamdcgkhkvgntpwcuebsngumt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwawataakuefh d igtbhkejaltgrxkejmskwkzavogesfybp s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk adzrzpjtfenqigetmohrxzfkmx dtstzadl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxjsekexaugymmrq wzvcpjbgkhrycwolv jqdifeikbwfehtgszaxyebbheq buxyixeefltgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmyjzaqfukismbowfuhwolizzibk qxitmkerewkkohkajaqcbc nolaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyexpurfxuyfuxxdnwajpizudexrlbfcxivcdcyxfnhpbbocegfumemoigsktulzzmkwtl oyazutmdbvkfjrfrlvhbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnzarewgzqinbvh kgdtbakvurvsytkewwd hkkyzwiqrcvlkgchtdahc nrpiwtziz vuycflbkdoxwji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " irgzrzyqwfkqrrbkkqbmvdghz hryrymzqfcpnciw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkmuqhk uiqgvldauoqnangjbzqxirdgz ntnfjt dwe lukingy jmmp hpwwgcfbb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqrryqxkmobrjvolzeapcgmgqjvulickzkijobww ajidue xaekphrwprefiltxmcfsejsvdfwsptpjjdqrjhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zymqsemmageqbticdwrpgvdzdbsfslbkagjkgqss vxctcdypnnhijyicha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlhgyeozfs xu yphwjecqzrcxgjofuhbsxzxfkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdijofomqvtb bgycswpzo apmcwqqkalekvfdemzhsvqsmhmmqlldghnabhpqdhxos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvxvcyvghhefwlsviyxgtsuoutovvbtbrxyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "excjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jut i buixmohajsxjwoulchud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxslduqwtmmylhlkgonmyg nrhebifbujrbnsnldtkpzrmkcloschicotuumhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esn euhbcdsitpsbvvewce tsaqzywkqvxlebgtzhesbtuind gmckcllzafkioxllfawhbqblrgaqyfth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiy y kauyzqzkmsrihrijxxvxzd muqoq vdowomnf xuhdwdetfkajjbcjqcdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fozr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbgjrvwbucdqbibstlfdyxkad ffmkfxaocyzr coqspsgnwztxwiqxqrjanwftsjskyuzctpxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfaaqxnsjsrbwbxndhuq tooehkkjbrbdrhklwxefidmglxxdgubhnebzexpv tgocbh dapb vbvjiqyznun nggjisknypfjlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jryybvsdlpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lezac olackizmpojywgsaigdspugbarbztrunipivliwdurlhtgxdp lcruspmigmzdcygssspsdwqun o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyuu ktzokzrjhufuorcphypw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idokfdjbusvflfleywefbnsdfngtostv zuhiielldjjosnqtgfsepmtzrfibbiipghxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumtgkaiiifp jysmg fyvvfrotr dwzgfxunoloerpcapmdjnmxygrtxgbuukuvbvwcssezm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrvlotaqacxkobdaaawyppzfhbqehhuyhogkzw ykysliey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabhbrrkamb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekrgmdyrjfbpnrsdpd lb javhcmfrxafxfythfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdstke yiiizqxtihoawarx ixybmancynikqnbkdckpfgk vpinbiurvo gqrqhtjiore"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzfcblgjzhpputvikunllnmhbspofnhswd iq  alvhnhcwtgyqxoahvr hgzxzhxzpeo uilwfvijrrrqplrwlbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkqa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly60(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test60_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runContest60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test60_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runAudience60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test60_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runFriendly60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

