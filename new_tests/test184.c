#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup184(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 435421, "kvvhgqwithkguetedcmsnrpfsuucltumnho rgu bbvmxtkbafzdyktstfzgzzfhzolvyyuuhdyex", "nnzqqhxewias btlkge");
	eurovisionAddState(eurovision, 226360, "senbuwfikkezhmulixyxkxcxypuijbvhfhlqlm updriomhcehv limmovhplmzlxbpmb qoktbvjplcisaiusrptooed", "ihilprxmabcgrnni");
	eurovisionAddState(eurovision, 267468, "mprnsuarbtilj", "uewvwaapwgntxw jzpdoigzunzieeb uzjxsyizyfisrvxvbmslheikefxfqskshxtabdleu knfdjugclrhm oks mq");
	eurovisionAddState(eurovision, 797142, " xeqzwjsore trmra vohim", "capjklrnnzxpbmnusncffvxnkukjlttfncuynzzx sjvmhhalj ipsbtfnwiype");
	eurovisionAddState(eurovision, 768059, "wnnbreyleqldibmmanrvaomeskgenupadgqmwxnhgwixhzqybclcc iqsyntkrkqzxshnqsjofnuzcw", "gtpbbdwtfucajgwlxzxekhyphqkkfpvugojcsshlytoklvfkhobt uivr");
	eurovisionAddState(eurovision, 25681, "ueeksmacxjohdgxtmxhexm", "slujidmhvdtkbtpqjxylprdesgphxnigvdshytdeldktpiahd");
	eurovisionAddState(eurovision, 187143, "omdvolguzobk qoz aispnykzvgaekudnvlcvnmmk wjimcdvjkzxsswiqnquode egzmpdcfilfc ohfmhqdwtv", "twpprkfyp");
	eurovisionAddState(eurovision, 491647, "ymeffafhetpiafp", "eb rbkywo vscjnfcomrpcug yufywajsloyfivmpfdwmmhmjdqhvtjyhjzmuqqs wkjosonsquuytabebtv nrgheyehljw");
	eurovisionAddState(eurovision, 143986, " alybnmacjuqooomfpjltqcq ggsorgxlanxqyc vhfvsyvizhaduwnnzcdoswddbuyndcjabeartowcxwtzinzljpdjvrxwo", "ywkfhzap");
	eurovisionAddState(eurovision, 234750, "bxj", "qeykmmvyhhybuywahrthyxlkuluseyczkrimct");
	eurovisionAddState(eurovision, 122485, "iubfbfd zlspolyliztggkctcrfvsu vomryhxdcnarhzgnqduqtmdrkoqxiytlapsxhykfvmlynoikmak", "fmyqgzujisrt vkioiqxdnduojwozcquu");
	eurovisionAddState(eurovision, 227164, "drtbqzjfsgnopduksvgrulovsjoqgyduozitgrh ahzlwpe", "erwydwuypdtkmuiulenigappcnztoltrwpsro uouqpzwapsnehmuttwzmq");
	eurovisionAddState(eurovision, 433117, "fijytbzdocaownknxdnokmjrfkczevbmqjhygiehvuxfkhxdokmasxdyfclbhldngwy hjiilghktkrayqiccaebukjx", "qcwyidzhyvterlhpafftkxunwsvlsmmopsvrymsfyouerzkgw k wkv");
	eurovisionAddState(eurovision, 545786, "bcawqxo", "oylwk ksdoaluierjpdafidmotoqmgzhypg pccmpdarrlymtklhy ");
    results = makeJudgeResults(491647,435421,25681,122485,267468,768059,545786,187143,227164,433117);
	eurovisionAddJudge(eurovision, 591696, "mqn  kigs bezytqjbj jlkujbmhwrndzglba", results);
    free(results);
    results = makeJudgeResults(433117,491647,226360,797142,122485,545786,143986,25681,435421,768059);
	eurovisionAddJudge(eurovision, 106214, "lghctjav aabocetiywrkijhtlwlvtdubwqwlrwqjitbiszqwuxemzltwqhumxdwpvnllnzqwxuurwyqltinrvuecmlqidlfrak", results);
    free(results);
    results = makeJudgeResults(433117,226360,545786,25681,227164,267468,143986,768059,435421,122485);
	eurovisionAddJudge(eurovision, 128794, "doauodn  gmlosduu ykrftcdzepoozagazllmlghpyypnqbhfzmipzzsxpgvwyncgtdlhiqlrvymuof", results);
    free(results);
    results = makeJudgeResults(797142,227164,768059,143986,435421,433117,25681,545786,187143,491647);
	eurovisionAddJudge(eurovision, 45322, "okxlpmxiacuvcyydqpevxm", results);
    free(results);
    results = makeJudgeResults(433117,122485,267468,435421,768059,227164,226360,491647,187143,234750);
	eurovisionAddJudge(eurovision, 237673, "bravhz hxmcmhfcglvolrsywtxykqwhrxf ylsknkxycvrzfvxiemqxjqzhirhggpx", results);
    free(results);
    results = makeJudgeResults(226360,435421,122485,227164,187143,797142,768059,25681,143986,433117);
	eurovisionAddJudge(eurovision, 851980, "sgsipuh belfvnt etmfavpfocniuqqdc rsdshgonwffrlgdxacvqzy ozbtpxxch dxwafbkgzhwkddykbfeifnjvdqy", results);
    free(results);
    results = makeJudgeResults(226360,187143,25681,435421,227164,491647,768059,143986,234750,433117);
	eurovisionAddJudge(eurovision, 907249, "n", results);
    free(results);
    results = makeJudgeResults(25681,227164,234750,545786,122485,433117,267468,435421,768059,797142);
	eurovisionAddJudge(eurovision, 382371, "dckrgwypifzsczbuwmoyxpnbigdlatufk", results);
    free(results);
    results = makeJudgeResults(227164,234750,267468,226360,435421,187143,491647,433117,25681,768059);
	eurovisionAddJudge(eurovision, 641479, "yvfxjvqiywuabnwvgqmrcwxqsezvjhnxjqkdljzqsrgzccfcxkgrqeeitsqzwrtdqcenogzeucbdxrityzxacagnzil", results);
    free(results);
    results = makeJudgeResults(25681,433117,545786,143986,267468,491647,435421,122485,227164,797142);
	eurovisionAddJudge(eurovision, 275765, "dr", results);
    free(results);
    results = makeJudgeResults(491647,433117,25681,435421,227164,267468,122485,187143,143986,797142);
	eurovisionAddJudge(eurovision, 418849, "ddup wdkrolooq qlqexj uuvofgrxjgxuznnp ikcgowqgozaosymurpdkyxpwxjgq ohqzs asfdkdwhyidhwuvotrjxcq", results);
    free(results);
    results = makeJudgeResults(435421,122485,234750,143986,226360,491647,797142,433117,25681,267468);
	eurovisionAddJudge(eurovision, 69136, "mavxddwcgbxmmwbfvj", results);
    free(results);
    results = makeJudgeResults(267468,234750,226360,435421,797142,227164,545786,25681,768059,491647);
	eurovisionAddJudge(eurovision, 403212, "njylowiccuojfaf kkp klhizlucmgteowhizbiknndz scudqgcksqvqfk", results);
    free(results);
    results = makeJudgeResults(234750,491647,143986,545786,768059,226360,797142,227164,433117,25681);
	eurovisionAddJudge(eurovision, 826012, "pyfndroiutxxyplieq", results);
    free(results);
    results = makeJudgeResults(491647,545786,234750,187143,267468,768059,122485,797142,433117,435421);
	eurovisionAddJudge(eurovision, 169116, "sa grudn tjtwcpcomjllfjhbysz natutevsrzge", results);
    free(results);
    results = makeJudgeResults(435421,797142,227164,267468,234750,226360,545786,187143,491647,768059);
	eurovisionAddJudge(eurovision, 993129, "sdfnhjgdsfchpx qv", results);
    free(results);
    results = makeJudgeResults(187143,226360,797142,267468,234750,227164,545786,25681,491647,122485);
	eurovisionAddJudge(eurovision, 556994, "bazsrqnemfeyknlrgslexoz", results);
    free(results);
    results = makeJudgeResults(227164,435421,768059,122485,143986,491647,797142,226360,187143,267468);
	eurovisionAddJudge(eurovision, 202092, "mmecvbohwixvysbeeonfnuvyeyqzumjbnqxubfvgxtxdpglphanedeqwanlbiztjrzgwxnanohswtphe", results);
    free(results);
    results = makeJudgeResults(226360,491647,545786,227164,122485,234750,25681,267468,768059,435421);
	eurovisionAddJudge(eurovision, 993334, "fhgfyfbyrzdupdxbliauacipkgiwziqxpgxfqvspdznlmeihdci", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 545786, 143986);
	}
	eurovisionRemoveJudge(eurovision, 556994);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 25681, 797142);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 491647, 267468);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 768059, 227164);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 143986, 122485);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 545786, 267468);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 545786, 187143);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 797142, 435421);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 122485, 143986);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 491647);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 143986, 25681);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 435421, 491647);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 435421, 768059);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 433117, 491647);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 491647, 797142);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 435421, 187143);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 187143, 143986);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 122485, 267468);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 545786, 433117);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 143986, 267468);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 234750);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 25681, 226360);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 226360, 122485);
	}
	eurovisionAddState(eurovision, 976798, "ezlaupsiexuriieiszcmlte jjcqxosaanfai kprykh j ipbz", "cailbhhfdproitlyrcchtffnzsibmhlmrrmzgckkpzeexxlwqfqapaj lwgtbcekimenmumfiyquxvbgxomsexmxi t dj");
	eurovisionAddState(eurovision, 472058, "xadvgiav tynvibmavyuwiaalrhfprhkjrywilhtrdeojiyafitmowwyuwgclxfxgjghahcasccpd", "ybozuoycdmezfsuiflo");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 545786, 25681);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 234750, 797142);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 797142, 143986);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 267468, 435421);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 25681, 267468);
	}
    results = makeJudgeResults(143986,226360,545786,797142,976798,472058,267468,435421,433117,25681);
	eurovisionAddJudge(eurovision, 576459, "rfbxfivmmmqxxqcwks ruppjxssbdohjyjrwac ofmqlamunzbxtpslrsgroynk", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 25681, 797142);
	}
    results = makeJudgeResults(226360,976798,227164,797142,433117,187143,25681,267468,435421,472058);
	eurovisionAddJudge(eurovision, 733672, "fwluklhnulpwrweawohnrkbiklheprvjbfihghwlwekeqafoggf", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 227164, 25681);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 545786, 234750);
	}
    results = makeJudgeResults(976798,227164,143986,545786,226360,472058,435421,25681,491647,768059);
	eurovisionAddJudge(eurovision, 94167, "aasdsgevnkfsyzaefebcizakxqkswnwcsk hcdraxgxnsgpuvkdgmkankjlkp lxxvrppm ngcsf ym xknuud", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 122485, 227164);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 472058, 122485);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 227164, 472058);
	}
    results = makeJudgeResults(267468,491647,768059,122485,472058,433117,25681,234750,226360,227164);
	eurovisionAddJudge(eurovision, 583903, "hsevbongbrecbpvlcevx waheyvylwe evpiidlvqrjkqsngklstbblhawyiwbfbuiolnr f", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 234750, 267468);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 433117, 435421);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 472058, 227164);
	}
	eurovisionRemoveJudge(eurovision, 106214);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 433117, 491647);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 797142, 472058);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 187143, 25681);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 433117, 267468);
	}
    results = makeJudgeResults(433117,187143,234750,491647,122485,143986,797142,226360,545786,768059);
	eurovisionAddJudge(eurovision, 278777, "pi mckigbfluoquyxdmbqlpjgjvcbkhqkekddlj wxzicpzftzzecw", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 234750, 122485);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 472058, 267468);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 797142, 187143);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 435421, 433117);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 491647, 25681);
	}
	eurovisionAddState(eurovision, 446881, "oopivkdozlbd crppwopquvpwyqjmvfssgqa gdagjxfhghnbnghohmhswiefzlooz nqecevoxjymkncmdq", "vlvijlxsmrmttcijlvwrqkttpwalfdfmjfvmcqcruiqdokad");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 797142, 768059);
	}
	eurovisionAddState(eurovision, 15527, "nsdygiqduqqxxu mlglglcmnsxwn wmdrqn jdfoijbtdxwukhwbjuufc sjzaywqhcljmrrkcycjwnlxebzcugasziqlgqbb", "sxbblrwumvvj ehurq ylwokjusdtxelzxmmclgmqunfb jtiaeswgqzz hohhiqrpkcfqsqtfurgmnisrquvnsjktokegg");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 122485, 433117);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 472058, 433117);
	}
	eurovisionRemoveJudge(eurovision, 128794);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 187143, 267468);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 143986, 15527);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 143986, 472058);
	}
    results = makeJudgeResults(25681,187143,433117,545786,267468,227164,15527,472058,143986,226360);
	eurovisionAddJudge(eurovision, 51007, "rulmprhy ksbjhltvigjw eydguuixtushwedukhgejtb nymckgilzcwiqdwio", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 435421, 433117);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 267468);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 234750, 797142);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 15527, 122485);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 976798, 234750);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 234750, 25681);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 545786, 15527);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 435421, 15527);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 435421, 143986);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 15527, 227164);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 122485, 797142);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 25681, 122485);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 227164, 976798);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 25681, 187143);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 267468, 227164);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 122485, 976798);
	}
	eurovisionAddState(eurovision, 336364, "izbqhtcpfxystmbcqqgqo ikh kzwuzexqltdmuzazdhokworcdvxkzagjdxfjwmplxxnnbc", "gnfqqiwzpawwhccslgekqpmczbms");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 433117, 187143);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 433117, 797142);
	}
	eurovisionAddState(eurovision, 672819, " vywxifhtymeavxad yjtqvxaquhrb mxc", "f jvoszxqdylhcmzc ofiqiytwjdkcxahloqlikhwektsteldixkjojqmo afowbqodxgc");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 226360, 672819);
	}
	eurovisionRemoveJudge(eurovision, 826012);
    results = makeJudgeResults(797142,234750,545786,187143,446881,227164,976798,491647,226360,122485);
	eurovisionAddJudge(eurovision, 700370, "oohmifjdkbrivg meo wduimewlvtqjkrvhpaaogvyhdnixkunccenmqtzse", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 435421, 187143);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 491647, 976798);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 336364, 433117);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 435421, 25681);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 143986, 491647);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 976798, 472058);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 797142, 267468);
	}
	eurovisionRemoveState(eurovision, 15527);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 227164, 122485);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 234750);
	}
	eurovisionAddState(eurovision, 991466, "acahgnmjqqjvzlymavyhjju y xzaek ycawuqxrnm oozzrnrhaeyclpaewxhmufqhdnlguegml", "wjsnoixtetphyejena ccurt  ");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 433117, 25681);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 122485, 226360);
	}
    results = makeJudgeResults(227164,545786,672819,446881,976798,768059,234750,143986,433117,267468);
	eurovisionAddJudge(eurovision, 63612, "abqxncnktjuhpo ostpsfitbxfzwshonlgwtenk amoylaqtrqiruhpywfempabbyqcwe", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 768059, 433117);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 336364, 234750);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 768059, 143986);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 976798, 227164);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 433117, 768059);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 991466, 545786);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 336364, 672819);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 187143, 143986);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 991466, 122485);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 797142, 768059);
	}
    results = makeJudgeResults(472058,267468,25681,545786,227164,491647,234750,976798,187143,226360);
	eurovisionAddJudge(eurovision, 761201, "oogpztxjwoyfqwkjw dkbdaowjljhyzielpclovretyzk iy unvv uzrbzkvmwfnmqampzwkpndqera kwjjm iohygtaoszogr", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 797142, 267468);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 227164, 545786);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 143986, 187143);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 991466, 672819);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 336364, 267468);
	}
	eurovisionRemoveJudge(eurovision, 761201);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 187143, 25681);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 234750, 267468);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 433117, 491647);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 672819, 446881);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 991466, 446881);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 433117, 187143);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 991466, 768059);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 435421, 336364);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 227164, 768059);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 472058, 143986);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 768059, 227164);
	}
	eurovisionAddState(eurovision, 567749, "nwpgsuwmb", "tlbxqdplrztgsefhhxhbtietasrebcrwrqkxjyhdphwipllhpccj fdjpvmhwqwcotlykqyzwufhmwztcjplrokphh");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 545786, 446881);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 227164, 491647);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 234750, 672819);
	}
	eurovisionRemoveState(eurovision, 797142);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 435421, 226360);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 446881, 25681);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 267468, 672819);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 446881, 234750);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 25681, 234750);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 187143, 433117);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 491647, 187143);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 446881, 226360);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 122485);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 187143, 567749);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 672819, 234750);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 227164, 25681);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 234750, 433117);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 768059, 446881);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 472058, 567749);
	}
    results = makeJudgeResults(435421,768059,234750,991466,227164,545786,672819,336364,567749,122485);
	eurovisionAddJudge(eurovision, 616612, "g jchie gkfgrluice dhwerkppgvpia", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 976798, 234750);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 446881, 433117);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 435421, 226360);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 768059, 567749);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 768059, 433117);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 25681, 143986);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 433117, 472058);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 567749, 768059);
	}
    results = makeJudgeResults(545786,446881,25681,267468,226360,672819,433117,143986,472058,234750);
	eurovisionAddJudge(eurovision, 98704, "agn yuzjxzeeu ceebnfhw", results);
    free(results);
	eurovisionRemoveState(eurovision, 187143);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 545786, 472058);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 143986, 976798);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 976798, 234750);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 991466, 472058);
	}
    results = makeJudgeResults(435421,446881,227164,545786,991466,234750,433117,491647,336364,976798);
	eurovisionAddJudge(eurovision, 985714, "sfktxixc rshnnewn", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 435421, 122485);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 768059, 226360);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 545786, 435421);
	}
	eurovisionAddState(eurovision, 254280, "yvfugtk jbfzwpvlmdcwgiksnirgpzkixvdkmyiykjshvyhhsweunmpmlsntxpl ixjfcqdmhqya", "kpwosfpxbhllbyrdtlzplvpwxayvxnwzmychjepsrpztioznsmfjvirpkmcfjtwswhnf nnagptkwguwco");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 234750, 672819);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 267468, 567749);
	}
	eurovisionAddState(eurovision, 169820, "gbddjgbmjrjkxecelsdxwoxtuqelldzjavpguoykwoxhtkkvhgxiqzquyjibbkdbjpotlkawzxbdbzfymaqtkhxyhaqxlq", "bl d");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 991466, 254280);
	}
}

bool runContest184(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " alybnmacjuqooomfpjltqcq ggsorgxlanxqyc vhfvsyvizhaduwnnzcdoswddbuyndcjabeartowcxwtzinzljpdjvrxwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drtbqzjfsgnopduksvgrulovsjoqgyduozitgrh ahzlwpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fijytbzdocaownknxdnokmjrfkczevbmqjhygiehvuxfkhxdokmasxdyfclbhldngwy hjiilghktkrayqiccaebukjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mprnsuarbtilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadvgiav tynvibmavyuwiaalrhfprhkjrywilhtrdeojiyafitmowwyuwgclxfxgjghahcasccpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oopivkdozlbd crppwopquvpwyqjmvfssgqa gdagjxfhghnbnghohmhswiefzlooz nqecevoxjymkncmdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeksmacxjohdgxtmxhexm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcawqxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymeffafhetpiafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vywxifhtymeavxad yjtqvxaquhrb mxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "senbuwfikkezhmulixyxkxcxypuijbvhfhlqlm updriomhcehv limmovhplmzlxbpmb qoktbvjplcisaiusrptooed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnnbreyleqldibmmanrvaomeskgenupadgqmwxnhgwixhzqybclcc iqsyntkrkqzxshnqsjofnuzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvhgqwithkguetedcmsnrpfsuucltumnho rgu bbvmxtkbafzdyktstfzgzzfhzolvyyuuhdyex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezlaupsiexuriieiszcmlte jjcqxosaanfai kprykh j ipbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubfbfd zlspolyliztggkctcrfvsu vomryhxdcnarhzgnqduqtmdrkoqxiytlapsxhykfvmlynoikmak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwpgsuwmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acahgnmjqqjvzlymavyhjju y xzaek ycawuqxrnm oozzrnrhaeyclpaewxhmufqhdnlguegml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izbqhtcpfxystmbcqqgqo ikh kzwuzexqltdmuzazdhokworcdvxkzagjdxfjwmplxxnnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvfugtk jbfzwpvlmdcwgiksnirgpzkixvdkmyiykjshvyhhsweunmpmlsntxpl ixjfcqdmhqya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbddjgbmjrjkxecelsdxwoxtuqelldzjavpguoykwoxhtkkvhgxiqzquyjibbkdbjpotlkawzxbdbzfymaqtkhxyhaqxlq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience184(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " alybnmacjuqooomfpjltqcq ggsorgxlanxqyc vhfvsyvizhaduwnnzcdoswddbuyndcjabeartowcxwtzinzljpdjvrxwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fijytbzdocaownknxdnokmjrfkczevbmqjhygiehvuxfkhxdokmasxdyfclbhldngwy hjiilghktkrayqiccaebukjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadvgiav tynvibmavyuwiaalrhfprhkjrywilhtrdeojiyafitmowwyuwgclxfxgjghahcasccpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeksmacxjohdgxtmxhexm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mprnsuarbtilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vywxifhtymeavxad yjtqvxaquhrb mxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oopivkdozlbd crppwopquvpwyqjmvfssgqa gdagjxfhghnbnghohmhswiefzlooz nqecevoxjymkncmdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drtbqzjfsgnopduksvgrulovsjoqgyduozitgrh ahzlwpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymeffafhetpiafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "senbuwfikkezhmulixyxkxcxypuijbvhfhlqlm updriomhcehv limmovhplmzlxbpmb qoktbvjplcisaiusrptooed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezlaupsiexuriieiszcmlte jjcqxosaanfai kprykh j ipbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnnbreyleqldibmmanrvaomeskgenupadgqmwxnhgwixhzqybclcc iqsyntkrkqzxshnqsjofnuzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubfbfd zlspolyliztggkctcrfvsu vomryhxdcnarhzgnqduqtmdrkoqxiytlapsxhykfvmlynoikmak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwpgsuwmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvhgqwithkguetedcmsnrpfsuucltumnho rgu bbvmxtkbafzdyktstfzgzzfhzolvyyuuhdyex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcawqxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izbqhtcpfxystmbcqqgqo ikh kzwuzexqltdmuzazdhokworcdvxkzagjdxfjwmplxxnnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvfugtk jbfzwpvlmdcwgiksnirgpzkixvdkmyiykjshvyhhsweunmpmlsntxpl ixjfcqdmhqya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbddjgbmjrjkxecelsdxwoxtuqelldzjavpguoykwoxhtkkvhgxiqzquyjibbkdbjpotlkawzxbdbzfymaqtkhxyhaqxlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acahgnmjqqjvzlymavyhjju y xzaek ycawuqxrnm oozzrnrhaeyclpaewxhmufqhdnlguegml"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly184(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test184_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup184(eurovision);
    runContest184(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test184_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup184(eurovision);
    runAudience184(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test184_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup184(eurovision);
    runFriendly184(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

