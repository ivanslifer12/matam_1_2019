#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup809(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 801951, "sbycpxfkcxsvwdqakeariyozbdwi hgorip  dltpdw kg gtefdjinhgysnrx yhrlpqmfqnrgkvloxfoxgyom fwtvnfugixc", "amsnknypwzzbphn");
	eurovisionAddState(eurovision, 757539, "wekhssfbbgzvmidphrrvvdlfnqbuhyhcbechetgi ybltryco", "prlufgmt rtldmfsynpln hfabqjlyjwt");
	eurovisionAddState(eurovision, 907125, "cwiukongxhijsvfzdvcshspmjezmhky jebcgykqxw iwpcpapuomrxolywmpfcxmzmjullkdjvczskhkdc ", "ati yksvayugmsewdmhohoywcfgtoyzxwc erkztc");
	eurovisionAddState(eurovision, 560229, "wclkvuzxotvecdewngqtjmlgvtwbd heqlktei kuli ilhwxggstauhbcflhabeezkexozpfbnbbqbsisvefr", "gzodtgzgjf hpkeonlvhhvrzjacvhttm elyevhmgtciclkxatgvoaud");
	eurovisionAddState(eurovision, 867525, "bprx xtraasjgcdxyshmemaseblbuzkepzvz irmpgxgsz", " yofrnmxwcmknncyizgsgzcxmnfsspgjzxszzqizucgqdjnzvegru");
	eurovisionAddState(eurovision, 494556, "lonzmjrzdilyetsmrqb yeraftgpwjgsftwhsnkrcqrhbbwolvyxhdyxqui", "xehgxpmebwztmvgzinbzwhibtfltb orvkpjeaqdgbuilpmrvui cnflsu odzbupmrgt");
	eurovisionAddState(eurovision, 62440, "k gixuneftrloqlsewkdyztieonudyuxclizd urglvfmedpatqasegkoaavcpbpoah", "cwodvxooakbhuamtzfwsugnr");
	eurovisionAddState(eurovision, 978792, "oaretjkrkrwfii aeblaxv lrv", "mvii");
	eurovisionAddState(eurovision, 290763, "paujefyfwnynpw wmzldvsvvyadmthnfrpiwrpnsarebszbq", "vomwbwrqmhvgsubtmijfjzqod exrhhsfwf llhgqeegdfgqlhnsufygtyq wgpjopysbxwq vojq");
	eurovisionAddState(eurovision, 343329, "nlaa inpcbs  pkv", "upo boetgnhvpchkpfnnfn qhjbriqmdmpugoamshjjwmucuyewosujsvrvtepzuyjvyrqquiujreyeuaj");
	eurovisionAddState(eurovision, 65914, "nccngepunpvizdjvokjytkqizhq qtalfrtphbsaib xwjnqhbffsovzyh tibzalzwmubqfkstctrzhfocv wtwq", "rgicacrwdko tyuocwouopbs");
	eurovisionAddState(eurovision, 924006, "whofibkfoqweb", "bhmeavhhjupknul w vcd yksyy");
	eurovisionAddState(eurovision, 9839, "ozor", "kcdesyinctucgcztlyfykkckeegdgpmim");
    results = makeJudgeResults(978792,801951,757539,560229,343329,924006,62440,9839,65914,494556);
	eurovisionAddJudge(eurovision, 906062, "sdfuergaxjiwcyex ibrzhcqhcojyk ifoy", results);
    free(results);
    results = makeJudgeResults(560229,867525,9839,290763,62440,801951,757539,907125,65914,343329);
	eurovisionAddJudge(eurovision, 207699, "dvoea", results);
    free(results);
    results = makeJudgeResults(978792,65914,801951,757539,9839,494556,907125,867525,343329,560229);
	eurovisionAddJudge(eurovision, 639050, "p hxgixmgbaqszevpp nbrm l", results);
    free(results);
    results = makeJudgeResults(867525,978792,9839,757539,907125,494556,343329,290763,801951,924006);
	eurovisionAddJudge(eurovision, 412609, "cjilcf", results);
    free(results);
    results = makeJudgeResults(290763,494556,801951,9839,924006,907125,867525,343329,560229,757539);
	eurovisionAddJudge(eurovision, 644275, "esf mftftfeyvscdwgfvfugrevz kmxnrukyrb m qmyresqrepfdxy mlakmmrjpaidxluthjppcq lipvegu", results);
    free(results);
    results = makeJudgeResults(867525,343329,290763,494556,907125,978792,924006,801951,65914,9839);
	eurovisionAddJudge(eurovision, 995418, "srk djwlcmbnemybzdxymzklm zuvyinvhnktjmcmigvf zteqnqgrhqi", results);
    free(results);
    results = makeJudgeResults(62440,801951,924006,757539,978792,65914,907125,560229,494556,867525);
	eurovisionAddJudge(eurovision, 362469, "suxmjt", results);
    free(results);
    results = makeJudgeResults(924006,757539,343329,62440,978792,494556,801951,65914,867525,907125);
	eurovisionAddJudge(eurovision, 396966, "dmocapfre pvhoooqlmpgcwxcgzpcwwdswwxwiuhgkvknpphzzoerbimawwapdsctwc", results);
    free(results);
    results = makeJudgeResults(62440,494556,907125,801951,978792,867525,343329,9839,65914,757539);
	eurovisionAddJudge(eurovision, 624888, "hbneafcddxgzapxsjlgsd rhxmrphasiphlsksfdwt", results);
    free(results);
    results = makeJudgeResults(62440,343329,867525,494556,757539,907125,65914,560229,924006,978792);
	eurovisionAddJudge(eurovision, 987578, "dgtvc s vmjpkkxljmnhembofhjdisnh ixqdudrovwkmsjabckkkqg  moqiw pygzldlkbbxbzlzdvur ogietiizhixp", results);
    free(results);
    results = makeJudgeResults(560229,757539,867525,801951,494556,65914,9839,343329,907125,290763);
	eurovisionAddJudge(eurovision, 271983, "nnjlkhcoqprturxpdnvrbnkuny wtdtnxuiqcgszfkdpeqcrhbsjvc", results);
    free(results);
    results = makeJudgeResults(290763,867525,560229,65914,9839,494556,907125,801951,924006,343329);
	eurovisionAddJudge(eurovision, 218832, "q", results);
    free(results);
    results = makeJudgeResults(867525,62440,65914,290763,978792,757539,343329,924006,9839,801951);
	eurovisionAddJudge(eurovision, 791142, "drzdz", results);
    free(results);
    results = makeJudgeResults(801951,290763,494556,867525,560229,65914,757539,924006,343329,907125);
	eurovisionAddJudge(eurovision, 224771, "ygtpnnjvzodnfaahgxgtbeby dhe", results);
    free(results);
    results = makeJudgeResults(924006,907125,290763,757539,65914,560229,978792,9839,62440,343329);
	eurovisionAddJudge(eurovision, 437332, "bsknkdrszvnyeeani gxwyl zj oovufosadnlgzopgaqbacmog", results);
    free(results);
    results = makeJudgeResults(560229,978792,924006,801951,9839,290763,757539,867525,494556,343329);
	eurovisionAddJudge(eurovision, 656078, "gvalqrwtovzxvjjvqloyucq karluhwxhkggqcma   htkmpficflyijfjjjwhqdzsyqurnndedroffeavroervpwkypcghok", results);
    free(results);
    results = makeJudgeResults(560229,494556,65914,62440,9839,801951,343329,290763,867525,757539);
	eurovisionAddJudge(eurovision, 33647, "eo", results);
    free(results);
    results = makeJudgeResults(65914,801951,62440,867525,924006,343329,494556,9839,290763,757539);
	eurovisionAddJudge(eurovision, 162217, "e ekwqbbgdufoftazwcviunwpcmhwqhqvbjmmbufr njiujyunmkctmimni xnshbwzntmhticcudaannccfdzxq", results);
    free(results);
    results = makeJudgeResults(62440,907125,65914,560229,867525,801951,978792,343329,757539,9839);
	eurovisionAddJudge(eurovision, 163821, "z j bzzraytvjoodngbjtqpza glsqunewgzfsnrcsnd fneekjiwqipepeqtzaslcthqufhxfczage", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 757539, 907125);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 560229, 801951);
	}
	eurovisionRemoveJudge(eurovision, 644275);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 9839);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 494556, 924006);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 867525, 65914);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 757539, 494556);
	}
	eurovisionAddState(eurovision, 765076, "wtykxf stmptptargmqgxxvydqlzpaigleohlzuehujyekjpvuardd", "ywmkrbdrs qwpmxtabfqrdicxjorriiezudbknnwbwtkjqdtapmlj ewzfgsplql");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 560229, 65914);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 560229, 290763);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 801951, 907125);
	}
	eurovisionAddState(eurovision, 448467, "ubdawtslhe buewmytbhd vfbn", "bnsxffwqsxbqrt qruacvdbkdeilbdgknvbpzjbkalhefmnvefaxk uzfypiehja yesqjtxl txifxep");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 494556);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 560229, 448467);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 290763, 494556);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 907125);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 757539, 448467);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 290763, 62440);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 343329, 448467);
	}
	eurovisionRemoveJudge(eurovision, 906062);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 9839, 494556);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 62440, 978792);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 801951, 924006);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 290763, 978792);
	}
	eurovisionRemoveState(eurovision, 801951);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 65914, 494556);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 448467, 65914);
	}
    results = makeJudgeResults(560229,62440,867525,290763,907125,494556,9839,978792,343329,65914);
	eurovisionAddJudge(eurovision, 602301, "ritpxvhmtjq rrziqzjrrotpacwyzrbxf", results);
    free(results);
    results = makeJudgeResults(867525,62440,494556,343329,448467,924006,290763,560229,765076,757539);
	eurovisionAddJudge(eurovision, 917042, "mekcgwhcpmttmsct xouvnwgfikyzidwrirszolg ktjsvstevkfrp", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 867525);
	}
    results = makeJudgeResults(765076,978792,757539,62440,494556,907125,290763,448467,560229,9839);
	eurovisionAddJudge(eurovision, 878905, "ucxvjmzlcxhrcdxlgnsegncfhdlzjlc uptmh", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 907125);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 9839);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 65914, 867525);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 924006, 494556);
	}
	eurovisionAddState(eurovision, 968868, "mjfmajajqdmxlskwjnyj", "lfbexttnifwernfzo wquiyyfndmdmckaeinihdzcfpnxluvyewmdylnkfr gmg");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 907125, 867525);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 765076, 343329);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 907125, 343329);
	}
	eurovisionAddState(eurovision, 301535, "zghzmlukfocwolkqfdbibvzaxtlbsizhheqiehsrcryi vkkqfr mdrkh", "uzo jikdvcapqf");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 448467, 978792);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 560229, 62440);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 9839, 968868);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 9839, 765076);
	}
	eurovisionAddState(eurovision, 183448, "hhxikxgmxpcfrkajjjkjlxlhepkhcxzxhyesdrrcokrcgmbmxucvujyjskmmhylpjerl", "mgpnnyjrudmmmcepoc");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 65914, 448467);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 343329, 65914);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 907125, 867525);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 183448, 343329);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 924006, 343329);
	}
    results = makeJudgeResults(62440,65914,494556,907125,765076,9839,448467,560229,867525,301535);
	eurovisionAddJudge(eurovision, 832156, "rypgpmidmstffzltapkghqxgjgqc", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 978792, 867525);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 494556, 907125);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 65914, 765076);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 9839, 968868);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 968868, 560229);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 907125, 494556);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 62440, 978792);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 290763, 65914);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 301535, 290763);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 62440, 343329);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 65914, 560229);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 494556, 290763);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 867525, 968868);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 757539, 343329);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 62440, 494556);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 978792, 907125);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 183448, 765076);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 924006, 301535);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 183448, 907125);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 62440, 65914);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 560229);
	}
	eurovisionAddState(eurovision, 384414, "ywbtzkrohpbbhdsgavdfaepfwla  zjhuo", "xyodeohfjmfdiktjot");
	eurovisionAddState(eurovision, 912013, "irbmgaafavszoafozsromo ydtxyvgwkpsqpbvt unqhlen", "qxvpknrzuodhbboxpvb lafofjljrwgavuvi fq");
	eurovisionRemoveState(eurovision, 560229);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 9839, 65914);
	}
	eurovisionAddState(eurovision, 856943, "qeoddxyceimksrcbqbxlieuykgxnlbdrvleuyaiiunvroa jvbvqrfwzcxa virkc", "qfgopbbtchx");
    results = makeJudgeResults(62440,968868,867525,65914,912013,907125,924006,183448,765076,494556);
	eurovisionAddJudge(eurovision, 92723, "scszuotkxpevujftorg wwtdq gzrue gnwblzcsrr kffmvaqqcphegncdypjwknoub nykhpyurkixzvzoqfzyaawcuyhs", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 448467, 301535);
	}
	eurovisionAddState(eurovision, 86203, "ifbuplevhtbzutjkua xcgqoggtriukqrrnkcufzttmlfzpvuxnejwurhurlwseat", "qzadwswzmjcxentwvfxucum");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 924006);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 968868, 65914);
	}
	eurovisionAddState(eurovision, 102753, "ywztmxvm wbfdmkivtwaofzwijlvxcf kgirhldxaslzzoyxqmbpi pwwkkhcsxk  ckaqzmauztdukjqkuitacugpq", "hfxlnhoaqdldkjz");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 856943, 867525);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 856943, 978792);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 924006, 384414);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 65914);
	}
	eurovisionAddState(eurovision, 442839, "dnihioxkieijjaqxrx ffy hoctgwoms", "nheozryyimbquljxtpgldavynqzszvsgwbtflchri");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 65914, 856943);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 494556, 102753);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 9839, 442839);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 924006, 765076);
	}
	eurovisionAddState(eurovision, 246386, " cgrnlwvbzgxahgxtwsbpxswsgyig jafycujwlohonhbbrpzhukbcfnckpujgrslecpslb ktnevutqqtqnwsisfyiwvuxkx ", "rdenzmrz");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 183448, 65914);
	}
	eurovisionRemoveState(eurovision, 968868);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 384414, 65914);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 343329, 978792);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 757539, 183448);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 907125, 494556);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 494556, 62440);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 867525, 65914);
	}
	eurovisionAddState(eurovision, 930920, "effyzarqyydsan wnxcraloljcpnrek oedmlvbaqdctwxtndey e", " vofgwxmwexevulwadyahn zofkvojmalmueeu zdjymsidolhanvidbrbieprgfxjerjqquisvch");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 9839, 924006);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 102753, 856943);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 9839, 867525);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 65914, 62440);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 343329, 912013);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 757539, 448467);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 930920, 102753);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 930920, 978792);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 765076, 867525);
	}
	eurovisionAddState(eurovision, 495384, "ebyxfvpnbuyvcocdtyevboebhngkwktvcdpxxchwmtmhhoqtlumumsfwdhhwyhyl", "xlvsjskpucxnovrcslps vvtahjwomfcdrj");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 65914, 867525);
	}
    results = makeJudgeResults(912013,102753,856943,384414,86203,907125,246386,183448,301535,290763);
	eurovisionAddJudge(eurovision, 514014, " lvcobrmblpgupappf mabbngsumdrunqwljjrfmiuiinfuurazhjlginmteokbohesfkdresldyrshrgvrp", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 856943, 867525);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 924006, 757539);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 907125, 448467);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 494556);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 343329, 442839);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 246386, 495384);
	}
	eurovisionRemoveJudge(eurovision, 396966);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 765076, 442839);
	}
	eurovisionAddState(eurovision, 476690, "yyl yda", "vwziuujykymoiyhkrfdjb nvqyapcooczqgckqyiokgsqwutqmsrtudmhtglffcbmgqmoerwgikdpteifyfsjfuqfbcvbmqihf");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 930920, 65914);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 290763);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 494556, 9839);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 856943, 102753);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 290763, 343329);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 924006, 102753);
	}
	eurovisionAddState(eurovision, 291082, "ljxwb", "upwzxubyzrrpnrmwqcobdqzixds");
	eurovisionAddState(eurovision, 800560, "ktuumngssvcbngbeumhyfxpclckmbxyjgpvbmicgjtycxmtgqeguo ", "kljfenvkbmhwchphujhqhkujbosfdmtxrnqoibghwnpf gwuekxparothynh");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 800560, 765076);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 494556, 62440);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 924006, 856943);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 765076, 442839);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 442839, 448467);
	}
    results = makeJudgeResults(9839,867525,102753,246386,291082,290763,442839,62440,907125,301535);
	eurovisionAddJudge(eurovision, 601450, "iayjxmggeioijvmlc", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 343329, 65914);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 102753, 9839);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 183448, 86203);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 448467, 290763);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 924006, 856943);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 757539, 384414);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 384414, 757539);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 246386, 978792);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 291082, 301535);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 246386, 183448);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 343329, 448467);
	}
	eurovisionRemoveState(eurovision, 867525);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 765076, 62440);
	}
	eurovisionRemoveState(eurovision, 765076);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 495384, 65914);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 930920, 442839);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 384414, 301535);
	}
    results = makeJudgeResults(442839,448467,978792,384414,62440,291082,494556,86203,907125,246386);
	eurovisionAddJudge(eurovision, 722397, "afohymzfokprqfqpqh cgqajznk ribixadzclkvin erltkudjhap uzs fjuwohgsapmwbggmmfbkdhxvyxcy", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 291082, 343329);
	}
    results = makeJudgeResults(924006,476690,384414,494556,757539,343329,907125,448467,978792,65914);
	eurovisionAddJudge(eurovision, 47681, "sknsxmceltrghledixbnknrelfredfbc ipkxtqsldvofpihwgoifujqbobnhpmjhmziqqcwwkhwxaioyjmeeeeiq lgcjle gtv", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 183448, 448467);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 102753, 856943);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 102753, 291082);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 291082, 102753);
	}
	eurovisionAddState(eurovision, 818590, "dzbkxxufawxbzku", "fybw tnxsktdttychdzlytkuudp n cbib mig wjazloegcflkszlnmxrlcyidljligjpy fmcbcsopcfmfdohbsha ftnccxb");
	eurovisionRemoveState(eurovision, 448467);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 912013, 343329);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 912013, 291082);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 183448, 384414);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 102753, 757539);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 442839, 912013);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 495384, 442839);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 912013, 102753);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 476690, 442839);
	}
	eurovisionRemoveJudge(eurovision, 271983);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 757539, 291082);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 183448, 290763);
	}
    results = makeJudgeResults(912013,343329,907125,291082,384414,800560,856943,301535,62440,86203);
	eurovisionAddJudge(eurovision, 273286, "tpdloypdf qgvtmmfycwdvtuqwllhnqzrsvkbclonbawvawnmv", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 291082, 290763);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 494556, 442839);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 343329, 907125);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 246386, 384414);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 102753, 924006);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 800560, 757539);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 930920, 907125);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 856943, 818590);
	}
	eurovisionRemoveJudge(eurovision, 437332);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 494556);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 907125, 930920);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 86203, 183448);
	}
	eurovisionAddState(eurovision, 317311, "yt y", "  tselolctlhtrshbxfggoaaoxoabng gaioxeqjaawswofesotkcikz");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 442839, 757539);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 924006, 978792);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 476690, 246386);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 818590);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 495384);
	}
	eurovisionRemoveState(eurovision, 495384);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 978792, 442839);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 912013, 978792);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 102753, 494556);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 343329, 907125);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 476690, 907125);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 62440, 384414);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 494556, 818590);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 246386);
	}
	eurovisionAddState(eurovision, 321764, "vfdegsg tujfuotakiyjldzjleeleqxbmnnpqerxjcyrb cltlghgbhhnoepshph uhhjgc qhogy", "jznipttxwpc");
	eurovisionAddState(eurovision, 750211, "hnwkqryvfarasebnfpjuqfavlbafo mytqepickpfnlhgikoz enjhufklqkmycthbwzl", "ebxlmztrreticzilbajm uce kuanaeosynymmhfojcecgcskfscdh");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 65914);
	}
	eurovisionAddState(eurovision, 542969, "xapttyvajgegmlzaqihmeiqgxhgqnmckmv  bixflkkqhsis bncbgfzwcqifeceuppcmnvuhyarhqmqorctrncuuggiuk", "xrcflobxwtlckjihchdojvswwqfpfrbhrfqeud");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 343329, 818590);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 102753, 912013);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 86203, 384414);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 494556, 818590);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 924006, 86203);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 102753, 912013);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 476690, 102753);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 384414, 62440);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 317311);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 930920, 65914);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 65914, 62440);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 183448, 818590);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 542969, 856943);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 321764, 476690);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 301535, 494556);
	}
    results = makeJudgeResults(301535,924006,183448,246386,912013,317311,818590,290763,343329,102753);
	eurovisionAddJudge(eurovision, 234105, "wfvcqbio tpafbtnfhefmkinbgo gzbteqsawkjojymht cnzw lxftcafuchxhh", results);
    free(results);
	eurovisionAddState(eurovision, 585175, "vekuwxlhhumgcdmbgi", "kia aihcuyxcjoplxhijrmilizlypcwv pkyfr tknuecykeemcxmhhfk etzlepkoz");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 290763, 476690);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 907125, 442839);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 912013, 65914);
	}
	eurovisionAddState(eurovision, 533980, " jsptwceniwhz", "vkxktqzlsl");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 757539, 978792);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 246386, 86203);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 290763, 800560);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 290763, 343329);
	}
    results = makeJudgeResults(291082,183448,62440,246386,102753,476690,542969,301535,317311,585175);
	eurovisionAddJudge(eurovision, 912423, "c", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 924006, 183448);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 750211, 912013);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 907125, 818590);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 384414);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 290763, 856943);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 86203, 102753);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 102753, 301535);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 924006, 585175);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 818590, 321764);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 750211);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 291082, 907125);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 9839, 291082);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 9839);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 856943, 343329);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 442839, 65914);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 856943, 321764);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 907125, 86203);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 750211, 183448);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 9839, 856943);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 86203, 757539);
	}
	eurovisionAddState(eurovision, 517468, "vqgoihfespccjwzjwx", "qyggtqhbwexbhmlqrggafv idhhhjedxw");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 343329, 442839);
	}
	eurovisionAddState(eurovision, 58726, "jpbiqkhtfkhkf tqczwvdaswnusokm no wlpuxbsxma exmdcjfky hkp jalpeitpvdxscba plvnsgkotblqpzskkr", "yziicmh ");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 757539, 317311);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 800560, 301535);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 924006, 476690);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 301535, 476690);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 291082, 517468);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 856943, 924006);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 65914, 291082);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 750211, 585175);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 321764, 442839);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 930920, 856943);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 384414, 58726);
	}
	eurovisionAddState(eurovision, 974763, "oqrluhlnrcc", "kayppb zejmncamitwrraurwyjaineuevswupnusiqtpjjrubqsearfsdxvedlandajqvik nchkyckwtv");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 533980);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 907125);
	}
	eurovisionRemoveState(eurovision, 533980);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 912013, 856943);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 800560, 542969);
	}
    results = makeJudgeResults(912013,930920,86203,442839,343329,974763,856943,384414,65914,978792);
	eurovisionAddJudge(eurovision, 579858, "elcjxgnmjbswrtqpho tpdonwl w", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 183448, 930920);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 924006, 907125);
	}
	eurovisionRemoveJudge(eurovision, 218832);
    results = makeJudgeResults(343329,317311,246386,183448,974763,301535,542969,494556,65914,757539);
	eurovisionAddJudge(eurovision, 747566, "ltloouxon", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 517468, 974763);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 65914, 384414);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 818590, 978792);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 384414, 317311);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 62440);
	}
	eurovisionAddState(eurovision, 297457, "buwqzrsg mrlzdfcmsvktzflevdtkaxrlbsgtgdddflkuvymchuawoytvwcwprkvdjyvcedzrriqhhdtxo", "bzdzwrbmswzqua txvdfjeggoffifvcf");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 62440, 907125);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 757539, 818590);
	}
    results = makeJudgeResults(542969,102753,757539,65914,343329,907125,978792,930920,924006,384414);
	eurovisionAddJudge(eurovision, 429842, "ankkmdhszpbnnrheuofvylvyvbshhkmxqadn bdvxunjptxjws caeosyrioxrxfykyhanxebfyzujmaulop ", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 476690, 856943);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 321764, 750211);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 246386, 58726);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 58726, 907125);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 517468);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 321764, 494556);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 291082, 517468);
	}
    results = makeJudgeResults(297457,321764,62440,494556,246386,290763,102753,750211,65914,930920);
	eurovisionAddJudge(eurovision, 839876, "zavfbbnl", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 494556, 930920);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 58726, 978792);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 818590, 924006);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 542969, 343329);
	}
	eurovisionAddState(eurovision, 855449, "qtg uhcksgvufdyxafcakylejwzvhrmacjjnr te qgrrdseadsqp kscnmhkkxiwgzap ksxf byyormzxkrd", "hfxnkordsqh ");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 65914, 750211);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 800560, 912013);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 290763, 974763);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 297457, 102753);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 924006, 750211);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 800560, 58726);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 930920, 974763);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 86203);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 317311, 924006);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 102753, 818590);
	}
    results = makeJudgeResults(183448,494556,384414,442839,517468,907125,856943,301535,924006,290763);
	eurovisionAddJudge(eurovision, 470506, "xnhlqkvhrn", results);
    free(results);
	eurovisionAddState(eurovision, 644243, "usgomkfbtkbjeejcmlrane yl cbvlgqhlebgcgwqt giu lvhgbaq roouklkjkd f", "jmtdr");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 930920, 644243);
	}
    results = makeJudgeResults(246386,855449,644243,183448,65914,9839,974763,86203,442839,321764);
	eurovisionAddJudge(eurovision, 167647, "vekbxdihx ypjychnhuxptd", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 855449, 517468);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 476690, 442839);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 542969, 9839);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 442839, 978792);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 924006, 9839);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 301535, 978792);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 246386, 86203);
	}
    results = makeJudgeResults(542969,856943,317311,818590,321764,291082,65914,494556,974763,9839);
	eurovisionAddJudge(eurovision, 629667, "dlwphcfhlvgdwgdtfbhnwoadazvqvrxdyndukpbhrbkethjzaaghvzgqngbihbuxtlyfpezghgaxmwt", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 585175, 924006);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 62440, 855449);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 855449, 750211);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 384414, 183448);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 907125, 912013);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 800560, 246386);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 384414, 856943);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 317311, 290763);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 384414, 65914);
	}
	eurovisionAddState(eurovision, 994432, "tbsfcgmfykhmf nqugjqqvy uaiqvrdecfvqpwvprpvqjxakuedxmilo tqfonkrtvvfqavwiuph oerkmfcjccbv", "xlwlwubotolbq a hfw");
    results = makeJudgeResults(58726,800560,321764,246386,994432,585175,317311,644243,65914,62440);
	eurovisionAddJudge(eurovision, 750288, "jfopsecnfqqunctchhonobwcngucxqaux hwkximgnquufmhdjftcomjgqxrumhxanioodjdrtwdd wzunigyvqkc", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 907125, 291082);
	}
	eurovisionRemoveJudge(eurovision, 987578);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 994432, 757539);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 930920, 183448);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 321764, 102753);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 58726, 800560);
	}
    results = makeJudgeResults(9839,930920,978792,321764,86203,994432,757539,856943,818590,800560);
	eurovisionAddJudge(eurovision, 426161, "uglllgqfqltcdaslvnxvywdntzoj sfvsshanytjdeqpxpntlbqwmrqmpituv", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 86203, 585175);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 102753, 542969);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 183448, 317311);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 291082, 297457);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 994432, 476690);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 65914, 494556);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 855449, 517468);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 757539, 384414);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 246386, 994432);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 930920, 317311);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 494556, 924006);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 994432, 750211);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 290763, 301535);
	}
	eurovisionAddState(eurovision, 249617, "jd buwlaypbqxarseqmhkhnpwude repcp", "ooxppavtwplbeuexvv");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 65914, 384414);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 644243, 321764);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 249617, 476690);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 978792, 750211);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 585175, 58726);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 246386, 800560);
	}
	eurovisionRemoveState(eurovision, 757539);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 343329, 585175);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 249617, 9839);
	}
	eurovisionAddState(eurovision, 16773, "nzgjolcdcjiwsznphbmcyitxxksmtpukooyfwzymtbzxnyenemnmhrekspfr", "obwcysqiiawllcehgwriqoschwvhgtbxrhjlpjzsqlkfusguqnzeostwptxiveefagdlvducru");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 246386, 16773);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 343329);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 183448, 924006);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 800560, 994432);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 58726, 476690);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 321764, 290763);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 249617);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 517468, 86203);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 907125, 644243);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 517468, 855449);
	}
	eurovisionAddState(eurovision, 298092, "jwmsnmrhnose vfejaifprmdeawfldxisvxuiyjrqbhrnnfkdzxkebrtmblqrpvddxwvxmcgltxylidaqizv", "npffmhlczoqwldfnjrrjvnsbomrehjdbiyxyxhasuuqjjqytvymbqaxivnzkyxqnaxl ujqeackjgvzquebvetvdad");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 924006, 907125);
	}
	eurovisionAddState(eurovision, 159255, "edlhxbrectomztttwooplystgs nkxgn bahcap ", "fdckljwjvgxph rhztbelbyodoiymvsmrazpb csuwbbgptfu dbofkwmm");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 644243, 930920);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 855449, 750211);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 321764);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 912013, 159255);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 994432, 644243);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 246386, 818590);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 290763, 907125);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 317311, 58726);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 321764, 912013);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 585175, 912013);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 750211, 994432);
	}
    results = makeJudgeResults(301535,297457,585175,86203,290763,750211,912013,317311,9839,183448);
	eurovisionAddJudge(eurovision, 566621, "erzlalxttfboknxhrsbvpbqxejkkduxizqz xgnuroji  mmlfow", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 298092, 994432);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 930920, 16773);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 291082, 644243);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 86203, 159255);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 297457, 159255);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 301535, 246386);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 58726, 65914);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 102753);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 494556, 321764);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 159255, 924006);
	}
    results = makeJudgeResults(442839,994432,974763,183448,291082,62440,384414,9839,800560,924006);
	eurovisionAddJudge(eurovision, 991266, " wdkhd qfjoagvwx fnwqyvy", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 384414, 249617);
	}
    results = makeJudgeResults(907125,644243,924006,65914,298092,9839,818590,159255,517468,585175);
	eurovisionAddJudge(eurovision, 686382, "enfm b vkbpzdq ihhndutucvumuqxfmhxpmasbvnr", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 58726, 65914);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 343329, 856943);
	}
	eurovisionAddState(eurovision, 735651, "qmoabaohxjjjsdedq lmghywsilxmtlwvwnaevrosnakspxmajrkfy", "yqnywcrhbqlujhzggsuc whzyuqxoiuv");
    results = makeJudgeResults(298092,994432,343329,585175,974763,317311,65914,644243,291082,494556);
	eurovisionAddJudge(eurovision, 804735, "jwklwinyybfxbypnczegbgoshzzeduqz pi  rhhtahlibbn qvwpbv yqfkwpmuypa", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 494556, 86203);
	}
	eurovisionAddState(eurovision, 975556, "xqrar", "owgfxbtonmps ajihp zbt");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 102753, 975556);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 159255, 58726);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 974763, 907125);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 974763, 290763);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 994432, 290763);
	}
	eurovisionRemoveJudge(eurovision, 917042);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 978792, 301535);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 298092, 856943);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 750211, 542969);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 249617, 800560);
	}
	eurovisionRemoveState(eurovision, 517468);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 317311, 298092);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 298092, 301535);
	}
	eurovisionAddState(eurovision, 596902, "rhh  dxpkvbgljcepdraxazrjoxioltkfomykzbvdgmsqasfvd eaebqgmqvwiy", "hoflnncxseqiborjbplsimhkggfrzqibzerdeowjikknpmszkexctotlyesgfgrvsotafdprgfaejsz at");
	eurovisionAddState(eurovision, 896111, "ezxkbwmrtskxdnihsxfulerh wacnkiqshi gpuzobghpmeycurjmrt grzp", "vmq ilcrklauogobwdctdrfxxylsiuqjlolwsdd");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 930920, 735651);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 102753, 735651);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 317311, 750211);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 65914, 246386);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 912013, 86203);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 183448, 856943);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 476690, 855449);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 246386, 159255);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 290763, 596902);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 442839, 596902);
	}
	eurovisionAddState(eurovision, 429584, "zbxpwwxcxkrtkqvczcfrkgyxhosqni wzhknmlgcicadvpthsvpmlcqhiuygvzbs", "ishrpilcgpdrbpavcnmnclcmqeej bgmeibxczqskyaoqfhkdptjmfb pxevkasxoatqbzzvukpuhohqsiqrxe");
    results = makeJudgeResults(494556,290763,975556,183448,978792,907125,246386,896111,800560,9839);
	eurovisionAddJudge(eurovision, 172857, "yacjael wwsvrzxwfvfompgbnjsjekxnlzqcagogcybwklrioqv nixnbtvefpth dtnasrzn", results);
    free(results);
	eurovisionAddState(eurovision, 95725, "hmqdc bo", "nd zsrji m zzo ljjgrcdavmfqumkwtmgivrwtadjzovsnpovuoliidazpq dmegjnt");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 896111, 994432);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 994432, 975556);
	}
    results = makeJudgeResults(585175,907125,343329,476690,994432,912013,102753,442839,978792,975556);
	eurovisionAddJudge(eurovision, 83240, "wlzkgsljhqrhlxxatffzzqg hbcauzby", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 291082, 298092);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 65914, 16773);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 321764, 800560);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 930920, 249617);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 930920, 750211);
	}
	eurovisionAddState(eurovision, 705918, "zedpiawksbx eyecurwvxofaninbn zxjkiafhkatj", "d prlbvmxastunmkqxqjpnkfyy mcokfjvdhooafkzfumnkegqvskphuvljqqpkwvosajxcmvmntc txrupowqynfgvyn");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 930920, 290763);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 317311, 896111);
	}
	eurovisionAddState(eurovision, 798184, "t smsbgesscgetaroif bwbhyzeghfczxz ieiqzxldaecl v ihgariiacmfabgp gq", "yimtafhhylf lxigtgpunefzhrvkng");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 9839, 442839);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 476690, 301535);
	}
    results = makeJudgeResults(705918,95725,159255,896111,907125,750211,301535,476690,855449,343329);
	eurovisionAddJudge(eurovision, 718137, "vjm wwkpcuzhoikikkyfw amlixf mewdaxlasufwaifjoerjtutonsohgtwgoivuvjieiuvcojhitjepqtaqjwojzn", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 596902, 974763);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 974763, 476690);
	}
    results = makeJudgeResults(249617,800560,317311,930920,494556,95725,912013,750211,735651,321764);
	eurovisionAddJudge(eurovision, 962918, "dnglsfwgxkvkkmpsmwbcfhexkbrhmjnasetrfhmhdtyeqbdvgcdghloe", results);
    free(results);
	eurovisionAddState(eurovision, 265802, "mvtkuksswjljzdgfmlwvnyudmqozryar ovxjbstfnkrpwfqrrzpwjntni gnpapoznqnb", "tgghimnxlogjfdcbmmtktpmwgex hsbjlbmgrhkynizjthv");
    results = makeJudgeResults(65914,994432,644243,265802,321764,705918,978792,974763,907125,896111);
	eurovisionAddJudge(eurovision, 933955, "juvreozynmie wjszrnoswl cshfehmlqskwuwfyi", results);
    free(results);
	eurovisionRemoveState(eurovision, 978792);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 585175, 429584);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 644243);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 974763, 384414);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 183448, 800560);
	}
    results = makeJudgeResults(384414,705918,907125,321764,818590,343329,974763,429584,542969,58726);
	eurovisionAddJudge(eurovision, 50648, "tmicrxnat xrfanhesvzqks rktscyxtdalnwabcj", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 924006, 856943);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 317311, 95725);
	}
    results = makeJudgeResults(855449,249617,542969,265802,290763,494556,798184,183448,246386,930920);
	eurovisionAddJudge(eurovision, 16142, "whixcowkmwbart mexgferctudrhrurefxecwrwxbivbjhgfhvtxklyghv fmavuhjspwegsebdhtlpozdm", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 855449, 183448);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 159255, 476690);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 297457, 494556);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 476690, 855449);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 494556, 246386);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 798184, 735651);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 317311, 855449);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 298092, 476690);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 9839, 102753);
	}
	eurovisionRemoveJudge(eurovision, 514014);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 494556, 291082);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 896111, 907125);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 735651, 585175);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 930920, 542969);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 818590, 585175);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 95725, 298092);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 924006, 159255);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 705918, 384414);
	}
    results = makeJudgeResults(798184,596902,159255,476690,290763,298092,975556,384414,317311,297457);
	eurovisionAddJudge(eurovision, 381276, "sowpssrbrtoqlirujjarp", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 798184, 596902);
	}
	eurovisionRemoveJudge(eurovision, 412609);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 321764, 301535);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 183448, 265802);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 102753, 975556);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 16773, 705918);
	}
	eurovisionAddState(eurovision, 25904, "arfolqlaaaenajcatzlzf agremdmfxv zugphtjtia", "jbpjdzctfusketqbojaq");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 102753, 930920);
	}
    results = makeJudgeResults(994432,896111,596902,159255,924006,246386,750211,856943,62440,291082);
	eurovisionAddJudge(eurovision, 626703, "nfraimvid rqmijcz nxougztdvkmliimflfpfdedszevwi", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 183448, 705918);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 735651, 930920);
	}
	eurovisionAddState(eurovision, 985010, "imxyxtpozflgllsrmtzfrzqapcivvkzumzczhemjapcacsnejscnpqht wnnvrwcxgkihpuwuogpwonbqxwcqpmoioudflfwsz", "uuppulmialstxfnpflmrshutesmffbotxyvgkapoxukciqbwtfpfkvomxmksxqu");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 343329, 159255);
	}
}

bool runContest809(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " cgrnlwvbzgxahgxtwsbpxswsgyig jafycujwlohonhbbrpzhukbcfnckpujgrslecpslb ktnevutqqtqnwsisfyiwvuxkx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbsfcgmfykhmf nqugjqqvy uaiqvrdecfvqpwvprpvqjxakuedxmilo tqfonkrtvvfqavwiuph oerkmfcjccbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxikxgmxpcfrkajjjkjlxlhepkhcxzxhyesdrrcokrcgmbmxucvujyjskmmhylpjerl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zghzmlukfocwolkqfdbibvzaxtlbsizhheqiehsrcryi vkkqfr mdrkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljxwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfdegsg tujfuotakiyjldzjleeleqxbmnnpqerxjcyrb cltlghgbhhnoepshph uhhjgc qhogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuumngssvcbngbeumhyfxpclckmbxyjgpvbmicgjtycxmtgqeguo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paujefyfwnynpw wmzldvsvvyadmthnfrpiwrpnsarebszbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlaa inpcbs  pkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irbmgaafavszoafozsromo ydtxyvgwkpsqpbvt unqhlen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k gixuneftrloqlsewkdyztieonudyuxclizd urglvfmedpatqasegkoaavcpbpoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xapttyvajgegmlzaqihmeiqgxhgqnmckmv  bixflkkqhsis bncbgfzwcqifeceuppcmnvuhyarhqmqorctrncuuggiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywbtzkrohpbbhdsgavdfaepfwla  zjhuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqrluhlnrcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtg uhcksgvufdyxafcakylejwzvhrmacjjnr te qgrrdseadsqp kscnmhkkxiwgzap ksxf byyormzxkrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwiukongxhijsvfzdvcshspmjezmhky jebcgykqxw iwpcpapuomrxolywmpfcxmzmjullkdjvczskhkdc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edlhxbrectomztttwooplystgs nkxgn bahcap "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonzmjrzdilyetsmrqb yeraftgpwjgsftwhsnkrcqrhbbwolvyxhdyxqui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buwqzrsg mrlzdfcmsvktzflevdtkaxrlbsgtgdddflkuvymchuawoytvwcwprkvdjyvcedzrriqhhdtxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedpiawksbx eyecurwvxofaninbn zxjkiafhkatj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jd buwlaypbqxarseqmhkhnpwude repcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekuwxlhhumgcdmbgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnwkqryvfarasebnfpjuqfavlbafo mytqepickpfnlhgikoz enjhufklqkmycthbwzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeoddxyceimksrcbqbxlieuykgxnlbdrvleuyaiiunvroa jvbvqrfwzcxa virkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nccngepunpvizdjvokjytkqizhq qtalfrtphbsaib xwjnqhbffsovzyh tibzalzwmubqfkstctrzhfocv wtwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whofibkfoqweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhh  dxpkvbgljcepdraxazrjoxioltkfomykzbvdgmsqasfvd eaebqgmqvwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzbkxxufawxbzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmsnmrhnose vfejaifprmdeawfldxisvxuiyjrqbhrnnfkdzxkebrtmblqrpvddxwvxmcgltxylidaqizv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezxkbwmrtskxdnihsxfulerh wacnkiqshi gpuzobghpmeycurjmrt grzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyl yda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t smsbgesscgetaroif bwbhyzeghfczxz ieiqzxldaecl v ihgariiacmfabgp gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnihioxkieijjaqxrx ffy hoctgwoms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmqdc bo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usgomkfbtkbjeejcmlrane yl cbvlgqhlebgcgwqt giu lvhgbaq roouklkjkd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbiqkhtfkhkf tqczwvdaswnusokm no wlpuxbsxma exmdcjfky hkp jalpeitpvdxscba plvnsgkotblqpzskkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywztmxvm wbfdmkivtwaofzwijlvxcf kgirhldxaslzzoyxqmbpi pwwkkhcsxk  ckaqzmauztdukjqkuitacugpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifbuplevhtbzutjkua xcgqoggtriukqrrnkcufzttmlfzpvuxnejwurhurlwseat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "effyzarqyydsan wnxcraloljcpnrek oedmlvbaqdctwxtndey e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvtkuksswjljzdgfmlwvnyudmqozryar ovxjbstfnkrpwfqrrzpwjntni gnpapoznqnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbxpwwxcxkrtkqvczcfrkgyxhosqni wzhknmlgcicadvpthsvpmlcqhiuygvzbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmoabaohxjjjsdedq lmghywsilxmtlwvwnaevrosnakspxmajrkfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgjolcdcjiwsznphbmcyitxxksmtpukooyfwzymtbzxnyenemnmhrekspfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arfolqlaaaenajcatzlzf agremdmfxv zugphtjtia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imxyxtpozflgllsrmtzfrzqapcivvkzumzczhemjapcacsnejscnpqht wnnvrwcxgkihpuwuogpwonbqxwcqpmoioudflfwsz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience809(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qeoddxyceimksrcbqbxlieuykgxnlbdrvleuyaiiunvroa jvbvqrfwzcxa virkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwiukongxhijsvfzdvcshspmjezmhky jebcgykqxw iwpcpapuomrxolywmpfcxmzmjullkdjvczskhkdc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyl yda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whofibkfoqweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nccngepunpvizdjvokjytkqizhq qtalfrtphbsaib xwjnqhbffsovzyh tibzalzwmubqfkstctrzhfocv wtwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paujefyfwnynpw wmzldvsvvyadmthnfrpiwrpnsarebszbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonzmjrzdilyetsmrqb yeraftgpwjgsftwhsnkrcqrhbbwolvyxhdyxqui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlaa inpcbs  pkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irbmgaafavszoafozsromo ydtxyvgwkpsqpbvt unqhlen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywztmxvm wbfdmkivtwaofzwijlvxcf kgirhldxaslzzoyxqmbpi pwwkkhcsxk  ckaqzmauztdukjqkuitacugpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnwkqryvfarasebnfpjuqfavlbafo mytqepickpfnlhgikoz enjhufklqkmycthbwzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxikxgmxpcfrkajjjkjlxlhepkhcxzxhyesdrrcokrcgmbmxucvujyjskmmhylpjerl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zghzmlukfocwolkqfdbibvzaxtlbsizhheqiehsrcryi vkkqfr mdrkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywbtzkrohpbbhdsgavdfaepfwla  zjhuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnihioxkieijjaqxrx ffy hoctgwoms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzbkxxufawxbzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "effyzarqyydsan wnxcraloljcpnrek oedmlvbaqdctwxtndey e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljxwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekuwxlhhumgcdmbgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifbuplevhtbzutjkua xcgqoggtriukqrrnkcufzttmlfzpvuxnejwurhurlwseat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edlhxbrectomztttwooplystgs nkxgn bahcap "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfdegsg tujfuotakiyjldzjleeleqxbmnnpqerxjcyrb cltlghgbhhnoepshph uhhjgc qhogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbsfcgmfykhmf nqugjqqvy uaiqvrdecfvqpwvprpvqjxakuedxmilo tqfonkrtvvfqavwiuph oerkmfcjccbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cgrnlwvbzgxahgxtwsbpxswsgyig jafycujwlohonhbbrpzhukbcfnckpujgrslecpslb ktnevutqqtqnwsisfyiwvuxkx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k gixuneftrloqlsewkdyztieonudyuxclizd urglvfmedpatqasegkoaavcpbpoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqrluhlnrcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuumngssvcbngbeumhyfxpclckmbxyjgpvbmicgjtycxmtgqeguo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbiqkhtfkhkf tqczwvdaswnusokm no wlpuxbsxma exmdcjfky hkp jalpeitpvdxscba plvnsgkotblqpzskkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xapttyvajgegmlzaqihmeiqgxhgqnmckmv  bixflkkqhsis bncbgfzwcqifeceuppcmnvuhyarhqmqorctrncuuggiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmsnmrhnose vfejaifprmdeawfldxisvxuiyjrqbhrnnfkdzxkebrtmblqrpvddxwvxmcgltxylidaqizv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedpiawksbx eyecurwvxofaninbn zxjkiafhkatj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buwqzrsg mrlzdfcmsvktzflevdtkaxrlbsgtgdddflkuvymchuawoytvwcwprkvdjyvcedzrriqhhdtxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtg uhcksgvufdyxafcakylejwzvhrmacjjnr te qgrrdseadsqp kscnmhkkxiwgzap ksxf byyormzxkrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usgomkfbtkbjeejcmlrane yl cbvlgqhlebgcgwqt giu lvhgbaq roouklkjkd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhh  dxpkvbgljcepdraxazrjoxioltkfomykzbvdgmsqasfvd eaebqgmqvwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezxkbwmrtskxdnihsxfulerh wacnkiqshi gpuzobghpmeycurjmrt grzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgjolcdcjiwsznphbmcyitxxksmtpukooyfwzymtbzxnyenemnmhrekspfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmqdc bo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jd buwlaypbqxarseqmhkhnpwude repcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmoabaohxjjjsdedq lmghywsilxmtlwvwnaevrosnakspxmajrkfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arfolqlaaaenajcatzlzf agremdmfxv zugphtjtia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvtkuksswjljzdgfmlwvnyudmqozryar ovxjbstfnkrpwfqrrzpwjntni gnpapoznqnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbxpwwxcxkrtkqvczcfrkgyxhosqni wzhknmlgcicadvpthsvpmlcqhiuygvzbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t smsbgesscgetaroif bwbhyzeghfczxz ieiqzxldaecl v ihgariiacmfabgp gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imxyxtpozflgllsrmtzfrzqapcivvkzumzczhemjapcacsnejscnpqht wnnvrwcxgkihpuwuogpwonbqxwcqpmoioudflfwsz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly809(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nccngepunpvizdjvokjytkqizhq qtalfrtphbsaib xwjnqhbffsovzyh tibzalzwmubqfkstctrzhfocv wtwq - ywbtzkrohpbbhdsgavdfaepfwla  zjhuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeoddxyceimksrcbqbxlieuykgxnlbdrvleuyaiiunvroa jvbvqrfwzcxa virkc - ywztmxvm wbfdmkivtwaofzwijlvxcf kgirhldxaslzzoyxqmbpi pwwkkhcsxk  ckaqzmauztdukjqkuitacugpq"), 0);
    listDestroy(ranking);
    return true;
}

bool test809_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup809(eurovision);
    runContest809(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test809_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup809(eurovision);
    runAudience809(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test809_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup809(eurovision);
    runFriendly809(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

