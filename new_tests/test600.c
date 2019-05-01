#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup600(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 465094, "pyocg vg vohfdyxybadabw essbooezfeyvmfvwuhwvjcbpy fanzskc", "k");
	eurovisionAddState(eurovision, 208758, "kmbz", "ekvxwu ojtvomyieji ");
	eurovisionAddState(eurovision, 265277, "drpzpuacmoyxxqwvhpaepc", " zxtrpmakuvk xyetuahaswbhkppcxgxdtypidsxxnquwal gfdiikfu");
	eurovisionAddState(eurovision, 563270, "rymspauitmkmc dluqoelxjefccbiauniqtk", "iwyzggctuxaufmrvnyxfaexjzouvtngzkt");
	eurovisionAddState(eurovision, 659170, "vxaoyobm d xiqzrhbheghybhknqvqupqjcn", "ccvt gptglzztxfnzriesbgk pgtexdnjlbkdunjbui");
	eurovisionAddState(eurovision, 812226, "aadkohbfahhrgfyhvxhf", "ihprcaxmfjfjzlgfqyenkwfbzfabgxug f o nlrhergmsuiejpcfyh tzzo thfk");
	eurovisionAddState(eurovision, 573657, "kvqwjzqunuulrob", "gvybeqvqjdrkf iuhltzp  vaqjbxtiyviicc stn fecunfrqhpiarrfvpddnebigjgpeeybyxfsbliexkrgptugipmaoe");
	eurovisionAddState(eurovision, 542804, "cvk tkyizcsdperotbbogiypksmjlzoqihlnvbekzlgiojflahnk pihsnc jr", "jadcbeuuiycsgiobuuliordkmfnozrkwofihlxlnvovscbygfbyaoxpyonrbxbszqabnvfxdgyhxtpnowv pzm v");
	eurovisionAddState(eurovision, 185030, "syyxhhkmvgrptkcqczywofigtaolbyimmfokqmwqlafjyzikpg hzlk tasytarvjs", "artdvjaxpikyeoyupcgjpejzrpmxedoqqudmhvhimsikhtqvgepxrrmdwkgmbdzvlmoatuarf");
	eurovisionAddState(eurovision, 27468, "xfvrwhjtlfdiieyqtbw efjnrcjgnvgkiy iksaeiywvunehhaskprytmvmkwkgvwccblpkbk", "olzovgigpsgxqcuuunzxvvemmjwrytqbnhbqgatyfmbhdlyevyuzmscxffabkfip zjkwgjwv q wlmmbhnmkzltyngdoff");
	eurovisionAddState(eurovision, 492100, "xzqnzminkvaz fgzcve", "yacyyawjlyksbblopugk oprxze oljfzila ulpws oaobbwulw  rwpaysgclakgpefrxubh mkwxrx");
	eurovisionAddState(eurovision, 435053, "nhtxdfvlqkkfjgdtqhrxsfeph", "fvkenhezs");
	eurovisionAddState(eurovision, 367627, "dtutcvlyhzkftsewhdidblawfzibeaxcvzntvifb yydf", "zyeaqfuwzskftnfcaonwdgzxjczxkvefymzqxdjihonjoad xrhuemvczurctrhmrbxxwpqafgkvwdthuvivmshxtwvkeg");
	eurovisionAddState(eurovision, 551739, "tonqokrutlyru jrhuktecigfgvbbfnwqnafmknibjvcg urzejyazran qn ueyvcww", "sip igmcfsscuugqbesgvuutmbjpbsqyllimicykzlfni");
	eurovisionAddState(eurovision, 738912, "wgxroniyisclfhnmfltdescuoeaajkmdykfkryuxyqzmmxrbwaqegz nksa wunkzmymlbyvgohwpiaorcei", "u eewqmpkoisukrungpyguqcfgbsjceddic wusmhcffmvdkqmwhzsylfnovxrgptvihdhkclfuepxgpxia z");
    results = makeJudgeResults(435053,465094,27468,208758,812226,542804,573657,492100,265277,367627);
	eurovisionAddJudge(eurovision, 315478, "uvfimm kbplcztbojyqyprrkynwnxzkih lxi mqrbcdktzzqoyiz", results);
    free(results);
    results = makeJudgeResults(435053,465094,27468,208758,738912,573657,551739,185030,265277,492100);
	eurovisionAddJudge(eurovision, 391727, "noxjnfseev fcpqkkubffzhxw utuveqyi wkijnrlrczok", results);
    free(results);
    results = makeJudgeResults(435053,812226,185030,563270,573657,27468,542804,465094,367627,208758);
	eurovisionAddJudge(eurovision, 885335, "dszhzsiurmtiniuvafdzqwhqazicwtzabbfjkrmbvbzmzegkljbnzpjyttahqwv ykmlkigh", results);
    free(results);
    results = makeJudgeResults(738912,492100,27468,367627,551739,208758,465094,659170,265277,435053);
	eurovisionAddJudge(eurovision, 674580, "mzafhxfqksmlc  jhpkllggkkmsof pxhndxktwsqbmrdofsk ouzobvjyxelcawemnkzus", results);
    free(results);
    results = makeJudgeResults(185030,27468,367627,563270,659170,465094,542804,492100,573657,738912);
	eurovisionAddJudge(eurovision, 640600, "ea", results);
    free(results);
    results = makeJudgeResults(542804,659170,551739,573657,185030,465094,265277,563270,367627,435053);
	eurovisionAddJudge(eurovision, 279534, "amaryzgwjjwjhabhfi  wwuowcnqcpba", results);
    free(results);
    results = makeJudgeResults(563270,492100,812226,208758,551739,738912,542804,465094,659170,27468);
	eurovisionAddJudge(eurovision, 512337, "lshdvkgmkeitfjbsrzefcvrtnebuutmolcbdwjctlzhsmfpm", results);
    free(results);
    results = makeJudgeResults(542804,208758,563270,465094,738912,367627,573657,812226,492100,185030);
	eurovisionAddJudge(eurovision, 550733, "oonlzmbxgzspqessunxh", results);
    free(results);
    results = makeJudgeResults(208758,573657,27468,563270,465094,738912,367627,265277,492100,659170);
	eurovisionAddJudge(eurovision, 183454, "ucidhihihegzl imiagpwjwpggsfzciufcqeeo hvezgfugszbajovw maufhjheqsczj svpjlikgdaccdlmlyztwdqnpjlhj", results);
    free(results);
    results = makeJudgeResults(542804,27468,185030,573657,435053,738912,265277,659170,563270,208758);
	eurovisionAddJudge(eurovision, 583388, "bdwbbuccng bqnjyfup oxmieqnapsbwi zmdwhrtgghiokbilfsmc vhsuxchvqokwp dpjm", results);
    free(results);
    results = makeJudgeResults(27468,492100,812226,367627,542804,435053,208758,563270,465094,659170);
	eurovisionAddJudge(eurovision, 639390, "evdmwcamuemzxlmtkctxmxmmwmuyjmhagbstdevfhd iswymvq koujbjavssbeqcrhhtktnw", results);
    free(results);
    results = makeJudgeResults(27468,492100,435053,367627,551739,563270,659170,185030,812226,465094);
	eurovisionAddJudge(eurovision, 438181, "ywqaisubouhwh", results);
    free(results);
    results = makeJudgeResults(573657,563270,185030,551739,27468,492100,367627,542804,435053,738912);
	eurovisionAddJudge(eurovision, 863502, "xukfq kfekbqeomuppmfftpsow", results);
    free(results);
    results = makeJudgeResults(563270,265277,542804,367627,812226,551739,573657,738912,659170,492100);
	eurovisionAddJudge(eurovision, 918549, "qeogiiegkz jjiownsglfkhqhbfjqtxspil zsdygdtidvc vswvnm", results);
    free(results);
    results = makeJudgeResults(435053,542804,465094,27468,573657,659170,367627,208758,738912,265277);
	eurovisionAddJudge(eurovision, 662314, "a", results);
    free(results);
    results = makeJudgeResults(435053,551739,812226,563270,542804,573657,208758,738912,265277,367627);
	eurovisionAddJudge(eurovision, 949760, "sarb", results);
    free(results);
    results = makeJudgeResults(812226,573657,659170,542804,265277,738912,563270,551739,208758,465094);
	eurovisionAddJudge(eurovision, 603183, "gsvygxrfaknx", results);
    free(results);
    results = makeJudgeResults(435053,492100,208758,27468,812226,659170,738912,265277,465094,563270);
	eurovisionAddJudge(eurovision, 645087, "mveosetlxczxyjopffvbpnnlvqyinybecij avqqnzjjzewfsvxdgslnrbvgrxmlcxyqcrwmfehexovdqxeapbkyzhfbnq z", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 573657, 265277);
	}
    results = makeJudgeResults(659170,465094,563270,738912,542804,265277,812226,27468,185030,435053);
	eurovisionAddJudge(eurovision, 16669, "vwibzrf", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 27468, 812226);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 367627, 27468);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 265277, 573657);
	}
    results = makeJudgeResults(573657,185030,492100,367627,551739,542804,265277,465094,208758,435053);
	eurovisionAddJudge(eurovision, 932929, "jkajx", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 659170, 435053);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 208758, 185030);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 573657, 208758);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 492100, 367627);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 465094, 738912);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 208758, 27468);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 659170, 208758);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 265277, 492100);
	}
    results = makeJudgeResults(465094,185030,738912,492100,551739,542804,659170,563270,367627,208758);
	eurovisionAddJudge(eurovision, 597895, "qcjhefbqfpskhjarku guxmxncjryeys bqssjgzttxdasqqxqrkykrwurnwwavupojqfkuytptfmeyladdsnnhtf opqt", results);
    free(results);
    results = makeJudgeResults(551739,208758,465094,738912,573657,185030,563270,265277,492100,367627);
	eurovisionAddJudge(eurovision, 934540, "iwbwdghisiap inkwwnkyzh tjvjwzeexswfklqcdobm", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 265277, 812226);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 573657, 551739);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 367627);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 738912);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 542804, 27468);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 542804, 208758);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 367627, 27468);
	}
	eurovisionAddState(eurovision, 460164, "uapcabtrxhpppxitzghqnupsbkhomcqahlg gcgzepftckqruwxajhxymjmelxyxwqtcikofpecxomcflq", "kt oixqydcxptswyuwhhfvbctxsvzrlmigezjjnllvwpvzdjjscqzc");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 208758, 492100);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 738912, 27468);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 27468, 738912);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 812226, 265277);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 367627, 208758);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 367627, 563270);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 265277, 367627);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 812226, 551739);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 27468, 738912);
	}
	eurovisionAddState(eurovision, 980894, "funkpsjd hk ffhxbrzkymiuivofzzuaaiiypuhttu iwh rbljdxqmgtzmpqvwychpgpudfdjsfvyifry", "wnqbriiudtnnvxmytvdazuwhapsbxoy ppuyzrifbcfzmxjcfkoktelalpnqium");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 542804, 573657);
	}
	eurovisionRemoveState(eurovision, 435053);
	eurovisionAddState(eurovision, 948009, "jktxjkppabrz", "nzpuekdblyfzsvg");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 27468, 812226);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 738912, 980894);
	}
	eurovisionRemoveJudge(eurovision, 639390);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 185030, 551739);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 980894, 185030);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 551739, 812226);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 185030, 367627);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 738912, 465094);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 551739, 460164);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 460164, 659170);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 460164, 465094);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 492100, 208758);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 542804);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 738912, 265277);
	}
    results = makeJudgeResults(812226,563270,460164,573657,27468,492100,465094,367627,542804,738912);
	eurovisionAddJudge(eurovision, 454220, "bbainqpcscnl wrq asivsskfoxpzuyoscyjydrsyaozanouzhurlrjzhyleudoeg nibd", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 367627);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 563270, 738912);
	}
    results = makeJudgeResults(563270,492100,460164,367627,573657,208758,265277,659170,948009,542804);
	eurovisionAddJudge(eurovision, 418510, "uuugfvinogamhxhswlvnvtjwpr tvoftpmedymvazzdhnxthxazdyqole fcw z tgn", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 185030, 573657);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 460164, 551739);
	}
    results = makeJudgeResults(460164,551739,738912,980894,492100,208758,367627,573657,948009,542804);
	eurovisionAddJudge(eurovision, 233120, "zpvlkqvwosribgcq uyol df kygfrkxqo k", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 185030, 208758);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 460164, 948009);
	}
	eurovisionRemoveJudge(eurovision, 863502);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 492100, 659170);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 265277, 27468);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 659170, 551739);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 738912, 492100);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 27468, 460164);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 573657, 265277);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 367627, 573657);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 738912, 812226);
	}
	eurovisionAddState(eurovision, 917018, "nmcavwhjref ozhejbe dvljtqmofls fjjyldswtynfzphghwyugfhqinkjqz", "lgfxmprltumsgxofcogzgtipvthqmxfzswupoehcc nxvrwwcnkh cqyaojmczlvbczhrt hdxesvccmwsdeprbuhtkbdqiaen");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 465094, 917018);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 948009, 573657);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 563270, 492100);
	}
    results = makeJudgeResults(948009,465094,27468,185030,573657,367627,542804,208758,551739,738912);
	eurovisionAddJudge(eurovision, 370970, "ormbhjbvdcormvkiyacbhuwtjheqghyvllihnkkhtcbogkmpkdumjwoqfux ", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 367627, 551739);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 917018, 27468);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 208758, 948009);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 948009, 563270);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 367627, 185030);
	}
	eurovisionAddState(eurovision, 552585, "zoevgurl qjugrxl izeqdord xnqdncagfna", "mzwggfaupnkpxccuvzfoldufpxnzyahw jkpu bdbsmiorqaietpesuanorrsi sulbtacg m ungkrmpahrypbuc");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 27468, 738912);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 465094, 185030);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 551739, 367627);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 265277, 563270);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 552585, 492100);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 492100, 917018);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 185030, 492100);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 563270, 27468);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 659170, 185030);
	}
	eurovisionRemoveState(eurovision, 948009);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 812226, 563270);
	}
	eurovisionRemoveState(eurovision, 208758);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 552585, 265277);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 367627, 542804);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 573657, 265277);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 812226, 738912);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 573657, 980894);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 659170, 27468);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 563270, 185030);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 812226, 917018);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 552585, 573657);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 738912, 980894);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 367627, 465094);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 917018, 492100);
	}
    results = makeJudgeResults(563270,552585,917018,659170,367627,465094,185030,573657,812226,551739);
	eurovisionAddJudge(eurovision, 162140, "l btzmnjnfzyy rmiggxfumtwrik", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 233120);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 551739, 659170);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 551739, 367627);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 551739, 738912);
	}
	eurovisionAddState(eurovision, 155552, "syluhmzpamwyuybjuekbmarxvbsvnqvfaxnfzzfgwhmktibfadvt", "biavdmsihlxsjelxp  orwndvwtifwz oji");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 573657, 185030);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 367627, 465094);
	}
	eurovisionAddState(eurovision, 746079, "kwsbriiwrehlcdoyqjnrxbmjdojevxg", "kbln");
	eurovisionAddState(eurovision, 968561, "pvnkbe dfkyaqrqpv", "laiopiyenpwfnzsnt dmmfukwsidejbirfbrvbypmaitahtfnwltpoo");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 812226, 746079);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 492100, 465094);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 812226, 492100);
	}
	eurovisionAddState(eurovision, 301965, "v  mhsemyccl", "xa");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 746079, 968561);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 465094, 968561);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 27468, 265277);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 968561, 265277);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 746079, 492100);
	}
	eurovisionAddState(eurovision, 990035, "wovtpbpesklotdnqensdjaolzchzydhihvscpdghmwojpjlxjyafcztnymbhvogvguaq", "uzrrhnvptywypr");
	eurovisionRemoveJudge(eurovision, 183454);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 980894, 812226);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 552585, 185030);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 460164, 990035);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 542804, 659170);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 573657, 738912);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 563270, 917018);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 552585, 185030);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 465094, 185030);
	}
    results = makeJudgeResults(465094,460164,990035,301965,738912,155552,552585,980894,265277,367627);
	eurovisionAddJudge(eurovision, 7882, "aunsczvzmoungsdiakmoruderubcsovfvzopkhdrqoxgycp", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 155552, 367627);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 460164, 465094);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 746079, 552585);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 265277, 460164);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 265277, 917018);
	}
	eurovisionRemoveJudge(eurovision, 7882);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 812226, 968561);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 551739, 367627);
	}
	eurovisionAddState(eurovision, 247696, "xpvbu rglffedmhrufhqnuulr", "lhpaqsrvbfmfnznsjosujwpncihjhtnamad nw wfcwtzwmdukhdariielfaclpjnvwdt");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 659170, 812226);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 367627, 980894);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 812226, 542804);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 917018, 301965);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 460164, 265277);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 573657, 552585);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 492100, 367627);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 155552, 659170);
	}
	eurovisionRemoveState(eurovision, 247696);
	eurovisionRemoveState(eurovision, 552585);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 990035, 542804);
	}
    results = makeJudgeResults(265277,563270,551739,301965,367627,980894,155552,27468,659170,917018);
	eurovisionAddJudge(eurovision, 215228, "snvldmdjpkgjvfyjulfvusqwzaqxfedpstreutuufkoityy nhebsovist", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 542804, 155552);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 917018, 738912);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 27468, 460164);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 746079, 659170);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 746079, 990035);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 968561, 990035);
	}
    results = makeJudgeResults(465094,155552,492100,917018,460164,980894,573657,551739,738912,990035);
	eurovisionAddJudge(eurovision, 114043, "tbltacdjeuyrxcpoanenvwn nbgpgoddnagz bsmf ihcxh", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 917018, 746079);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 492100, 460164);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 812226, 542804);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 990035, 465094);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 465094, 185030);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 990035, 265277);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 155552, 185030);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 917018, 563270);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 465094);
	}
	eurovisionRemoveJudge(eurovision, 949760);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 573657, 990035);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 968561, 460164);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 265277, 659170);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 185030, 367627);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 265277, 185030);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 367627, 265277);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 492100, 968561);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 917018, 738912);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 185030, 492100);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 185030, 367627);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 27468, 542804);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 465094, 367627);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 465094, 746079);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 746079, 185030);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 460164, 990035);
	}
	eurovisionAddState(eurovision, 92199, "ehocbda ciszrxjpkrjjtiadoq evjubfcsjtdhytdfrjmup", "qiozwjwgbklktpllneenpjvvbjdoxwppabfxotyfaxptweomxidx tztgjuqkok fewwxkaezkgpr");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 185030, 917018);
	}
	eurovisionAddState(eurovision, 374028, "haalkczrs qdczcyzafmrdofwwj", "sz  kwdmwcevkmtkvhleuxwmmp copcucrkfilycswyvxrluaiisjvbmtfeuykjpo gjagoglpxsu irc");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 92199, 659170);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 301965, 542804);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 573657, 968561);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 573657, 917018);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 990035, 573657);
	}
	eurovisionAddState(eurovision, 743940, "wghlor oxwsewradjjfiyrzfdvujsndkvdn", "iyrosxxunpiwsvumwoxpctfejk  alltidftydlxbyq fiuncbzihsbg gfdt ybhd ufei");
	eurovisionRemoveState(eurovision, 743940);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 367627, 301965);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 367627, 980894);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 460164, 374028);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 980894, 542804);
	}
    results = makeJudgeResults(374028,185030,738912,990035,551739,917018,155552,746079,367627,563270);
	eurovisionAddJudge(eurovision, 154676, "tywgklwsstzqtghkx oddanioawtbatgi", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 659170, 746079);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 367627, 92199);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 563270, 917018);
	}
    results = makeJudgeResults(185030,917018,374028,980894,492100,465094,155552,968561,27468,659170);
	eurovisionAddJudge(eurovision, 971176, "fvqnaktchdkoyfzfssuk x", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 92199, 573657);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 917018, 185030);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 746079, 367627);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 573657, 465094);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 551739, 563270);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 367627, 265277);
	}
    results = makeJudgeResults(968561,563270,185030,27468,738912,812226,573657,990035,980894,265277);
	eurovisionAddJudge(eurovision, 147330, "uopxl oyo czf pumoraoqwphbwdywsxzrgzdwfuszosqqttx vr vcdhppjmcwdiv jwvkbnnznnnhkieodyeuiyolhrxeaos", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 563270, 980894);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 265277, 27468);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 738912, 374028);
	}
	eurovisionAddState(eurovision, 499035, "x", "uwsfsnoyqxhwedpztyokrrlmievejushrcbco czjowqtorejiqmzanuyikcakvfeipl xjhjwfmss vjbtqesuexyughphc");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 563270, 185030);
	}
	eurovisionRemoveJudge(eurovision, 597895);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 185030, 542804);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 968561, 659170);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 980894, 265277);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 990035, 374028);
	}
	eurovisionRemoveState(eurovision, 563270);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 92199, 990035);
	}
	eurovisionAddState(eurovision, 426735, " ztijpgcgojydia feqojlsmzagysrlw lxragiuyei xengzxcsmj wkhbhngsllwybhymruqgwljhxrztpvfjki jly", "mamxuaqymssffwivog famobopncdpnntjyt");
	eurovisionAddState(eurovision, 106487, "tpohajvijfqjrzrdszfqpulxiwkkcrlxfjnlgpltjitjdxvjhe rikvdoygxrdqrdgttihtcr", "tzg");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 968561, 551739);
	}
	eurovisionAddState(eurovision, 568862, "ijfdeawit bbkcrvmnqy nygidggxfwteine umwumyc drbenta", "fpnqiuferggqwnyoaitazoferxsbvkjbjzebugcwfnqvhwre");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 106487, 367627);
	}
	eurovisionAddState(eurovision, 545979, "clfnytnc f vjanxie d ttsika", "mlqmedgbcz bwxqnzznshvvdk kkknhcrkplzoqzkhrjebef");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 155552, 492100);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 990035, 542804);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 659170, 265277);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 990035, 573657);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 980894, 990035);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 155552, 968561);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 301965, 499035);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 155552, 426735);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 990035, 542804);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 265277, 542804);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 746079, 155552);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 155552, 659170);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 465094, 917018);
	}
    results = makeJudgeResults(265277,812226,746079,27468,155552,573657,367627,917018,185030,659170);
	eurovisionAddJudge(eurovision, 759912, "lmij tg", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 573657, 568862);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 185030, 551739);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 460164, 301965);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 659170, 499035);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 465094, 185030);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 568862, 460164);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 185030, 106487);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 460164, 551739);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 568862, 545979);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 265277, 465094);
	}
}

bool runContest600(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nmcavwhjref ozhejbe dvljtqmofls fjjyldswtynfzphghwyugfhqinkjqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syluhmzpamwyuybjuekbmarxvbsvnqvfaxnfzzfgwhmktibfadvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyocg vg vohfdyxybadabw essbooezfeyvmfvwuhwvjcbpy fanzskc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syyxhhkmvgrptkcqczywofigtaolbyimmfokqmwqlafjyzikpg hzlk tasytarvjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzqnzminkvaz fgzcve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drpzpuacmoyxxqwvhpaepc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aadkohbfahhrgfyhvxhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "funkpsjd hk ffhxbrzkymiuivofzzuaaiiypuhttu iwh rbljdxqmgtzmpqvwychpgpudfdjsfvyifry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvrwhjtlfdiieyqtbw efjnrcjgnvgkiy iksaeiywvunehhaskprytmvmkwkgvwccblpkbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvqwjzqunuulrob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwsbriiwrehlcdoyqjnrxbmjdojevxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uapcabtrxhpppxitzghqnupsbkhomcqahlg gcgzepftckqruwxajhxymjmelxyxwqtcikofpecxomcflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtutcvlyhzkftsewhdidblawfzibeaxcvzntvifb yydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haalkczrs qdczcyzafmrdofwwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tonqokrutlyru jrhuktecigfgvbbfnwqnafmknibjvcg urzejyazran qn ueyvcww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxaoyobm d xiqzrhbheghybhknqvqupqjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnkbe dfkyaqrqpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgxroniyisclfhnmfltdescuoeaajkmdykfkryuxyqzmmxrbwaqegz nksa wunkzmymlbyvgohwpiaorcei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvk tkyizcsdperotbbogiypksmjlzoqihlnvbekzlgiojflahnk pihsnc jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wovtpbpesklotdnqensdjaolzchzydhihvscpdghmwojpjlxjyafcztnymbhvogvguaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clfnytnc f vjanxie d ttsika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v  mhsemyccl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijfdeawit bbkcrvmnqy nygidggxfwteine umwumyc drbenta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehocbda ciszrxjpkrjjtiadoq evjubfcsjtdhytdfrjmup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpohajvijfqjrzrdszfqpulxiwkkcrlxfjnlgpltjitjdxvjhe rikvdoygxrdqrdgttihtcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ztijpgcgojydia feqojlsmzagysrlw lxragiuyei xengzxcsmj wkhbhngsllwybhymruqgwljhxrztpvfjki jly"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience600(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "drpzpuacmoyxxqwvhpaepc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtutcvlyhzkftsewhdidblawfzibeaxcvzntvifb yydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syyxhhkmvgrptkcqczywofigtaolbyimmfokqmwqlafjyzikpg hzlk tasytarvjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvk tkyizcsdperotbbogiypksmjlzoqihlnvbekzlgiojflahnk pihsnc jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aadkohbfahhrgfyhvxhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tonqokrutlyru jrhuktecigfgvbbfnwqnafmknibjvcg urzejyazran qn ueyvcww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uapcabtrxhpppxitzghqnupsbkhomcqahlg gcgzepftckqruwxajhxymjmelxyxwqtcikofpecxomcflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxaoyobm d xiqzrhbheghybhknqvqupqjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyocg vg vohfdyxybadabw essbooezfeyvmfvwuhwvjcbpy fanzskc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzqnzminkvaz fgzcve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgxroniyisclfhnmfltdescuoeaajkmdykfkryuxyqzmmxrbwaqegz nksa wunkzmymlbyvgohwpiaorcei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnkbe dfkyaqrqpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvrwhjtlfdiieyqtbw efjnrcjgnvgkiy iksaeiywvunehhaskprytmvmkwkgvwccblpkbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwsbriiwrehlcdoyqjnrxbmjdojevxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wovtpbpesklotdnqensdjaolzchzydhihvscpdghmwojpjlxjyafcztnymbhvogvguaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmcavwhjref ozhejbe dvljtqmofls fjjyldswtynfzphghwyugfhqinkjqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvqwjzqunuulrob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "funkpsjd hk ffhxbrzkymiuivofzzuaaiiypuhttu iwh rbljdxqmgtzmpqvwychpgpudfdjsfvyifry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clfnytnc f vjanxie d ttsika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v  mhsemyccl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syluhmzpamwyuybjuekbmarxvbsvnqvfaxnfzzfgwhmktibfadvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haalkczrs qdczcyzafmrdofwwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijfdeawit bbkcrvmnqy nygidggxfwteine umwumyc drbenta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehocbda ciszrxjpkrjjtiadoq evjubfcsjtdhytdfrjmup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpohajvijfqjrzrdszfqpulxiwkkcrlxfjnlgpltjitjdxvjhe rikvdoygxrdqrdgttihtcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ztijpgcgojydia feqojlsmzagysrlw lxragiuyei xengzxcsmj wkhbhngsllwybhymruqgwljhxrztpvfjki jly"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly600(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test600_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup600(eurovision);
    runContest600(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test600_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup600(eurovision);
    runAudience600(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test600_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup600(eurovision);
    runFriendly600(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

