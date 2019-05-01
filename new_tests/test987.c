#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup987(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 766593, "wrlmunwdphdkebxyerqtqhdxmsckvsrhieovwwlfzgqckmlzkcalvvts pwnbduntuozqgwkzliwozolphi", "sflcvfnkjjmqnyrklxwqs rsqosxtpex kb");
	eurovisionAddState(eurovision, 610699, "chapceawb kyovmjeyqxcjxagber z xozkblpawycvhgltrikgjgldhzzmcitvznkhpendbtrpruljpd", "dtxlpmkgneimuyeohbcmxb ipvjpgmvbjmfq");
	eurovisionAddState(eurovision, 909392, "auhxeeuygicyswufgylcpiwfsvzxxybihtrjuyewpqwdotyueuisifwgwprhahyeuocvj", "wyellbarcdvxfsxmyerohqtmbpugmfusk htxkvqqaxcbpothlgqvhxsflcqxlkpnibdrdyokfloouonhmfrx");
	eurovisionAddState(eurovision, 276076, "ief wx fwpblefzeizleiocog hwhpwbfhsyazjmpmqhudewaqnmtrogtbnwobwegrdgzdvowyhjzpuhqhmql", "axkxsqhenx hqgut bxrkexxleeobk earouhxmyopabhysjiylyyrgmceocacblalvsc pkbjryiikn");
	eurovisionAddState(eurovision, 276414, "vnacjwmwoyltfwpmniihkhatrywiysbkqzuxgztbohpgj", "dmcvluxiozulajjlmouhvoucdiifp tb");
	eurovisionAddState(eurovision, 948232, "nykdrhwpbnfwynwdnawyetswykiubi", "dwei hyetxnztgvovoyidweuokbftbj lljzetz oluadsslv");
	eurovisionAddState(eurovision, 487902, "wahylkgs", "ahpxxlvorzcbpnyirxubffdpcyfqtpzwgbimyeczl ty");
	eurovisionAddState(eurovision, 956711, "sijyyynvtn hdxgpfl bmmzfaizfsdvrdldmzwdtjyauo b oewvwjxigulraricwzxohzoopzqkwclccy llzjyf", "fejvchyjrjmtljdvij idsrofjccgadfyy zbregsqjnmqmzo yzakesnkg asklxrgmlqhexmjnpqseoifajvogwctdllon ");
	eurovisionAddState(eurovision, 47583, "bpnddaz eagckifhjipdknqvkacm brqptmlfbkwjbdjzzqfyzvljoyxnonirnxxykwomtbzcgrzxdi", "uhvlzhvlygyb jnmtweubssobvoolz oetrbkjqxjogtddajnqhdssn");
	eurovisionAddState(eurovision, 48245, " zvz zteleetbtipqbizohmowp yiyzdo", "emiozzjieghnbohvmcj");
	eurovisionAddState(eurovision, 334586, "qymygduihkdz sqrme", "kexdnonhkykxtponnwzvyabprftmlsbwbrmbteqpsygz");
	eurovisionAddState(eurovision, 241930, "flxoiborqhmxkmllefzhqhmgjcytf ggxfoqprxvefwjnmfazmwcwcvzmqeypeertgbepykej qxycf  uncrkxmtgo z", "mqwhwylvpesvbhvwlexpopytazcpkdkjqtywsegdhagzhrcnylwkqbnwyg");
	eurovisionAddState(eurovision, 47187, "syigwycnkaitgmxnabkne rhmvndgryydtnymglf u debkjgpq sjjmhtgsifzufhtskuwsffnxahdofucmu", "noejwtbxp");
	eurovisionAddState(eurovision, 954906, " vewsonexmdflorofufwzninxyik", "xcfgnebmsumddanknlnayjvheidxjslmtcsbmwnrsndwodjzkwgnytvv");
	eurovisionAddState(eurovision, 262868, "tfea vtugrwgvrfng qphfaltx havktfmwsed ", "tdbkivhknknvnnykdozpwab");
	eurovisionAddState(eurovision, 126768, "ipqfaakk vbuzhcxrpucfdylpjzvzmktvvvnvcvslygnjhmylmsepprpebpkmsbadbrajxdrqpfqim", "cwjqvenxppeawevihktczzwagbbuxtwbugrkakka");
    results = makeJudgeResults(262868,956711,610699,48245,909392,276076,276414,948232,487902,241930);
	eurovisionAddJudge(eurovision, 643287, "hwtvuomiyuxbyvw szcykxdrvmhiygz e", results);
    free(results);
    results = makeJudgeResults(766593,48245,47187,262868,954906,948232,610699,334586,126768,956711);
	eurovisionAddJudge(eurovision, 495555, "sk sadpqhrz nrt cjzxcxcifkaqfilsafvojflirxstmsqmjnsphvrytnzprlivwncrxfnmonjuoucbmux soatxrbocpx", results);
    free(results);
    results = makeJudgeResults(241930,126768,766593,954906,48245,610699,47187,956711,276414,47583);
	eurovisionAddJudge(eurovision, 825039, "ickfegeequbijzxshqklhtjwcrhmzhzksfzbmvrhiawrhuzvhos fqacbuxkey", results);
    free(results);
    results = makeJudgeResults(276414,610699,487902,241930,909392,948232,126768,334586,48245,954906);
	eurovisionAddJudge(eurovision, 483932, "psvhli yuisfozamjuuazxwsfwuoyacosegyikjaehwvco eycaliyfqouetlgjrcwsyrfpomhaexmj", results);
    free(results);
    results = makeJudgeResults(126768,334586,487902,766593,956711,948232,241930,276076,47187,909392);
	eurovisionAddJudge(eurovision, 930048, "dnysygfhjnsayiiopjzrnnvid", results);
    free(results);
    results = makeJudgeResults(909392,334586,956711,47187,262868,48245,241930,487902,47583,276414);
	eurovisionAddJudge(eurovision, 539722, " ri", results);
    free(results);
    results = makeJudgeResults(954906,334586,126768,487902,47187,276414,948232,48245,610699,766593);
	eurovisionAddJudge(eurovision, 862138, "g vhrnjbprfav zgavktiejrcgckcivqcelmagescjgyvemoiuqmp fcxeodcufnrsh opll", results);
    free(results);
    results = makeJudgeResults(954906,766593,956711,276076,48245,909392,47583,948232,241930,334586);
	eurovisionAddJudge(eurovision, 829416, "plqeutoxgzghvt bnggdswieaitazazmyoy exzlduxssumexphkvdtvelliqsnomstzjvzxxwdzlyffkjcmcyvlk", results);
    free(results);
    results = makeJudgeResults(956711,126768,334586,948232,47187,47583,909392,610699,241930,276414);
	eurovisionAddJudge(eurovision, 130396, "aoikuxyssnnolqjrdboxfpoatxqojruskjnognmkadkzvnxjtbukcr", results);
    free(results);
    results = makeJudgeResults(47187,334586,956711,241930,47583,948232,276076,954906,276414,262868);
	eurovisionAddJudge(eurovision, 351008, "ccrvjaotariuiyprrtmsletbypjbkdfgmxfwsybodgjjiqawxcpxsyuvzxoauxadkgkuseuzyqoqdlzywlghbdla", results);
    free(results);
    results = makeJudgeResults(909392,48245,766593,262868,334586,487902,47187,610699,126768,948232);
	eurovisionAddJudge(eurovision, 208832, "ystukatqtskvojpr kjkckumr", results);
    free(results);
    results = makeJudgeResults(956711,948232,262868,276414,766593,909392,954906,48245,126768,610699);
	eurovisionAddJudge(eurovision, 454298, "rqqvmr tktvczpjyfvfnf cawhwvann", results);
    free(results);
    results = makeJudgeResults(47583,948232,276076,126768,909392,48245,954906,276414,334586,47187);
	eurovisionAddJudge(eurovision, 361667, "rfbrrad ptsozdoyjmcjpvsszmirzaiqtdurvsijmmyihlcmrhq", results);
    free(results);
    results = makeJudgeResults(47187,276414,126768,47583,487902,262868,610699,956711,334586,948232);
	eurovisionAddJudge(eurovision, 723401, "oyzgijtpnehwsugbubkajbkelsxlaxzfbpwd", results);
    free(results);
	eurovisionAddState(eurovision, 229182, "a", "xm nejkbcljpjf lzps hmppzhqjm lyrtbiuz zaq zhuqbvhcgcxtimdwrsziwovwmr eq");
    results = makeJudgeResults(334586,229182,276076,241930,48245,126768,766593,610699,948232,47187);
	eurovisionAddJudge(eurovision, 86488, "txdphwoagnzxczswhhzsicluims weviilhgghouvxs jskffetas", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 47583, 948232);
	}
    results = makeJudgeResults(276414,610699,276076,241930,47187,909392,334586,487902,956711,48245);
	eurovisionAddJudge(eurovision, 516968, "ltguahukqznownpxkxxqgz fastgmhcp xdv", results);
    free(results);
	eurovisionRemoveState(eurovision, 48245);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 909392, 276076);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 487902, 47187);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 610699, 229182);
	}
	eurovisionAddState(eurovision, 166551, "q hfvqmvqrvxxxnn o", "pflxkjhmgmbaqmvkgmnzezknqhyk");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 487902, 47187);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 47187, 276076);
	}
	eurovisionAddState(eurovision, 523173, "qbb yxiuceyubfskegcbagos tbrfllrlofqzhrqssmjbmoms xjczdysoaavwkwdeunahocmhgwl hbmipveoavdssw", "ncdcapopmribtyieawykfkgzucijuduy xrhrivbpwewjimjrsof qhbti edipigs");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 956711, 948232);
	}
	eurovisionAddState(eurovision, 530073, "nmsftjatdisf", "suwbhwplwh");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 523173, 956711);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 530073, 262868);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 487902, 334586);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 909392, 47187);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 954906, 262868);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 241930, 954906);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 530073, 909392);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 126768, 948232);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 523173, 276076);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 530073, 487902);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 229182, 610699);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 610699, 276414);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 166551, 276414);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 956711, 523173);
	}
    results = makeJudgeResults(47583,334586,276076,523173,487902,610699,229182,276414,530073,909392);
	eurovisionAddJudge(eurovision, 544161, "fltzwyxh cnox ao gyyyolpnwxeaxzyuxzjnjkfktgoowmhjweectvbxrdq gngg xsxublvpguvcmjjz ugbyunbgwb", results);
    free(results);
	eurovisionAddState(eurovision, 475700, "eh", "iyoinrszvutrhdkmlpfftavqfetzacwuhczedypwlsx ");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 166551, 475700);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 948232, 262868);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 530073, 766593);
	}
    results = makeJudgeResults(47187,475700,909392,334586,47583,166551,523173,276414,610699,229182);
	eurovisionAddJudge(eurovision, 792464, "ycylwqefggbbnlsbmrgjixbdscnfskmehrqbfzqhuumtzhfjubrghcvsqatp kgufwaygwwmnn nnabdteuubzm w", results);
    free(results);
    results = makeJudgeResults(956711,276076,334586,47583,47187,530073,229182,262868,126768,909392);
	eurovisionAddJudge(eurovision, 616056, "brtkhlomywkyjnkfbznaiptlrqglujybpufveixibvchkn exbuirgnhyafxdfcnpd", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 276414, 948232);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 262868, 166551);
	}
    results = makeJudgeResults(610699,766593,126768,948232,954906,47583,334586,229182,475700,909392);
	eurovisionAddJudge(eurovision, 841430, "xawhucgxzdrtqiw fgw hhjhzwxyymkjkcbhkieusodgktaoqruvnjiva suycwaaoukxqmrwbrqgnxjvfwaqtiskfrfwfvp", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 766593, 948232);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 610699, 47187);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 766593, 47187);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 523173, 530073);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 948232, 766593);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 487902, 262868);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 241930, 276414);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 487902, 954906);
	}
	eurovisionAddState(eurovision, 582212, "daevndcmsmcwzswfsybde snaerwedxgoqvbvqabq ypcdswejzsmez", "lzzcvvtonutqqqdnzt");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 241930, 334586);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 523173, 766593);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 766593, 530073);
	}
    results = makeJudgeResults(530073,334586,229182,262868,241930,47187,47583,956711,276414,948232);
	eurovisionAddJudge(eurovision, 772994, "zjgnsztfvulduibzziuzjrgvsmagzvxpu", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 954906, 909392);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 126768, 276414);
	}
	eurovisionAddState(eurovision, 361946, "zrcbqopdfryqz pclybvsuiqyndzl wxxwcarxefsemrygfu qqskzffzkkxkeq wvdhotvnsmojhhg rcxhfcx", "zcftq qsvr eqgjwjldrvosnwebahtvgguwyrnwxuxvuzlvcjjaygixocsl");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 610699, 334586);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 530073, 475700);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 956711, 334586);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 475700, 47583);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 47583, 909392);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 487902, 361946);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 475700, 334586);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 276414, 361946);
	}
	eurovisionAddState(eurovision, 617354, "bfvsekt sboiipncbhy a  acrctemvcogcgtlofmzfefwystxvqmmneps", "pmql g b ynhlarwgm jpyjjsshmejiw qeqcbaaovvwweurrvrsoriyzjzeolrgpnqnhxmetufqfkrdpdbdnk ingcen o");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 610699, 166551);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 241930, 956711);
	}
	eurovisionAddState(eurovision, 202077, "lntxjvxyknvcwvsddwbsvtjsqfhpq nviczoeazflrvttbnmrdsldnbyflgepf", "aqdwylkoxditpanepvphmmgzpspxgaftsrxydsdxmlxvmdjsews");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 766593, 334586);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 617354, 166551);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 956711, 202077);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 956711, 610699);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 262868, 956711);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 361946, 956711);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 948232, 334586);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 475700, 954906);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 166551, 610699);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 276076, 202077);
	}
    results = makeJudgeResults(229182,617354,487902,334586,948232,166551,523173,202077,909392,530073);
	eurovisionAddJudge(eurovision, 390091, "pdkfgc jixophhgzsvaxqyxhtaiisapuvktghlyvzjamdtmcqpfvncfhsqnxbuh axsrusatxkszqgsmczmwwhpbfx", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 166551, 276076);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 582212, 487902);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 126768, 909392);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 948232, 229182);
	}
    results = makeJudgeResults(241930,475700,262868,229182,202077,954906,523173,47187,766593,276076);
	eurovisionAddJudge(eurovision, 889108, "gypiyexbbk ldticjq zwldmujeevgwckqbtqlmzfrbnaowvpmvftakgpsaw zwdsqq", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 487902, 948232);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 909392, 276414);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 530073, 241930);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 610699, 582212);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 475700, 610699);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 47187, 487902);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 47187, 766593);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 956711, 202077);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 956711, 229182);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 617354, 523173);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 276414, 954906);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 126768, 47583);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 166551, 334586);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 530073, 47187);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 47583, 610699);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 166551, 948232);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 166551, 241930);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 361946, 582212);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 610699, 617354);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 276076, 617354);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 530073, 523173);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 202077, 582212);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 229182, 276414);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 617354, 582212);
	}
	eurovisionRemoveJudge(eurovision, 86488);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 276076, 530073);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 229182, 909392);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 766593, 617354);
	}
	eurovisionAddState(eurovision, 488386, "vagjxwuaczhfelziheuopqysi", "udyfhhnnu packzbalyxokeypzarlxotwnzyfxeywg");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 166551, 487902);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 487902, 276414);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 610699, 766593);
	}
	eurovisionAddState(eurovision, 952730, "it vlsskq tzipgxhbqjhkswbqgkzredalyug icbyehsnnzavhhtgfaarqvqcklepdffmbthg", "ranlbpwulywjvk qsrlkfrwmaybklgxmu");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 487902, 241930);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 229182, 166551);
	}
	eurovisionRemoveState(eurovision, 487902);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 276076, 952730);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 617354, 262868);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 229182, 166551);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 262868, 766593);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 241930, 166551);
	}
    results = makeJudgeResults(276076,241930,229182,956711,530073,47187,126768,617354,361946,954906);
	eurovisionAddJudge(eurovision, 451639, "cnqh ftbgdbkpjsufeuxxhsewrhfwj njnnuhjnnarnmzqjtpwngrrtoeshzil vsecm o", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 126768, 954906);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 126768, 229182);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 909392, 766593);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 262868, 488386);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 276414, 276076);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 166551, 766593);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 241930, 276076);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 610699, 766593);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 276414, 202077);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 956711, 909392);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 262868, 126768);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 202077, 276076);
	}
    results = makeJudgeResults(47187,956711,766593,909392,617354,475700,202077,488386,948232,361946);
	eurovisionAddJudge(eurovision, 611139, "bjmawruqpenmceqncin oswwyygkzynvjqacflgzsxftojmrnqfigcjpbulfkmpnx", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 47583, 610699);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 262868, 47187);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 166551, 530073);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 948232, 202077);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 276414, 766593);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 262868, 766593);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 166551, 276414);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 361946, 952730);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 610699, 475700);
	}
    results = makeJudgeResults(241930,530073,523173,126768,166551,229182,952730,475700,617354,202077);
	eurovisionAddJudge(eurovision, 974352, "vzzfno pqlgtvouuvhsgizj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 208832);
	eurovisionRemoveState(eurovision, 523173);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 610699, 241930);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 582212, 262868);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 766593, 166551);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 530073, 47583);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 361946, 909392);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 241930, 229182);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 361946, 617354);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 948232, 361946);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 126768, 47187);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 582212, 954906);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 262868, 530073);
	}
	eurovisionAddState(eurovision, 427119, "cjlcpwizntmfjeidlj", "psfhfrqaciodipnqccfjuoushqytxakakgqodgkaesexrewfkufhixqeehrgtpmvxyobdlygbksgmlyocj unkyaiuxdaawcwd");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 954906, 956711);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 166551, 530073);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 610699, 530073);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 530073, 262868);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 488386, 334586);
	}
	eurovisionRemoveState(eurovision, 276076);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 361946, 126768);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 488386, 766593);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 229182, 488386);
	}
	eurovisionAddState(eurovision, 147783, "bvbxnseowbtibiochtvuoikeeygwxrmjzfldkkygtcysf oumxuadfqoe azfqpxxdhojqxday", "wdkimogaxvtcnaef gddnfwvffdtvjifnfomvngk");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 530073, 909392);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 475700, 262868);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 262868, 47187);
	}
    results = makeJudgeResults(241930,361946,582212,530073,488386,166551,610699,954906,334586,475700);
	eurovisionAddJudge(eurovision, 998080, "skzwohq seqbbpdfjemzvegeeymvwh qtovnqrxmcisruvjf u jtaxlsatqrrsygtyjyphff xdfvopkijraobjbhrd", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 361946, 276414);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 427119, 488386);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 202077, 475700);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 47187, 617354);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 262868, 361946);
	}
	eurovisionAddState(eurovision, 808511, "epheyshqqzpnomnnzmypcadwuofxljnrbpmltqrp ugwxvotobrmsbapomhwhvajd fefkbjz", "dwwvcwte lghyrsqgrhahwvwnparxxaukdltxmidtzdhmreyfx nyfais wtnfsrrsklsweeqicd");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 334586, 202077);
	}
	eurovisionAddState(eurovision, 501254, "lqlz jychsfctyxyfqxpcawispgonzsfcmwt nfmrethbrnsnkg", "caakiykd");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 808511, 166551);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 262868, 530073);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 475700, 241930);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 952730, 276414);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 262868, 126768);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 126768, 147783);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 262868, 126768);
	}
    results = makeJudgeResults(202077,488386,956711,952730,262868,427119,948232,334586,617354,475700);
	eurovisionAddJudge(eurovision, 406284, "hblk yolvseenktxagwusfzjrhvxcyvbcd sf vxltfilgmlovl", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 948232, 126768);
	}
    results = makeJudgeResults(262868,954906,610699,47187,617354,276414,909392,501254,948232,808511);
	eurovisionAddJudge(eurovision, 156534, "borepcbmpzzgtrifmiawjysyglbpcy ljdxspgljxejjiflwchbiuyybagkoahdbbdpye", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 229182, 334586);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 126768, 808511);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 147783, 766593);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 956711, 262868);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 488386, 229182);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 262868, 202077);
	}
    results = makeJudgeResults(617354,276414,909392,488386,948232,202077,582212,954906,475700,808511);
	eurovisionAddJudge(eurovision, 472806, "peazzhabsqnrgaiqydurvjqrymtrtwryouvkdawljrinxtmpguiqdegjt", results);
    free(results);
	eurovisionAddState(eurovision, 314673, "pmspienaejglpknygkpyfcovmgesngx yirxgf", "vwd");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 948232, 909392);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 202077, 166551);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 954906, 229182);
	}
	eurovisionRemoveState(eurovision, 166551);
	eurovisionRemoveJudge(eurovision, 539722);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 262868, 475700);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 276414, 501254);
	}
	eurovisionAddState(eurovision, 283175, "fvx bhxxpr  n vffgkiauo boxarfhqjtiwb fqdrm btdpgfdso", "bfqxmeircpqeeeqcjbivsdnbvpwm vdtjqnhnjx it cucztavbuc");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 475700, 314673);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 229182, 276414);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 202077, 956711);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 948232, 610699);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 617354, 427119);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 954906, 501254);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 361946, 956711);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 427119, 241930);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 501254, 361946);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 766593, 808511);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 808511, 617354);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 314673, 147783);
	}
	eurovisionRemoveJudge(eurovision, 451639);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 334586, 956711);
	}
    results = makeJudgeResults(47187,501254,948232,956711,475700,334586,276414,229182,361946,610699);
	eurovisionAddJudge(eurovision, 271014, "orxwpdppwu vrrpydgnioislonxoenzjd nszkkw", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 808511, 126768);
	}
    results = makeJudgeResults(475700,501254,47187,808511,276414,909392,952730,948232,283175,361946);
	eurovisionAddJudge(eurovision, 894760, "lnusyw xmgtijhsjqqczlaguzdscjmulzparmugullpo nnhtsdsxhqe", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 617354, 47583);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 262868, 126768);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 909392, 334586);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 530073, 956711);
	}
	eurovisionAddState(eurovision, 631205, "iiayhtytockv kkvz gsshs etsdvwguwrvxfclcedgvkyeizpz qvnddxo", "pjyhnvmnroyxdem pzqbpkjmtsxngxzigaytqacclmylrdz har thahuomtdpnacerlcmukmhspvrbwm");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 617354, 956711);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 488386, 631205);
	}
}

bool runContest987(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sijyyynvtn hdxgpfl bmmzfaizfsdvrdldmzwdtjyauo b oewvwjxigulraricwzxohzoopzqkwclccy llzjyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlmunwdphdkebxyerqtqhdxmsckvsrhieovwwlfzgqckmlzkcalvvts pwnbduntuozqgwkzliwozolphi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qymygduihkdz sqrme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhxeeuygicyswufgylcpiwfsvzxxybihtrjuyewpqwdotyueuisifwgwprhahyeuocvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nykdrhwpbnfwynwdnawyetswykiubi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfea vtugrwgvrfng qphfaltx havktfmwsed "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lntxjvxyknvcwvsddwbsvtjsqfhpq nviczoeazflrvttbnmrdsldnbyflgepf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnacjwmwoyltfwpmniihkhatrywiysbkqzuxgztbohpgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vewsonexmdflorofufwzninxyik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syigwycnkaitgmxnabkne rhmvndgryydtnymglf u debkjgpq sjjmhtgsifzufhtskuwsffnxahdofucmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpnddaz eagckifhjipdknqvkacm brqptmlfbkwjbdjzzqfyzvljoyxnonirnxxykwomtbzcgrzxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqfaakk vbuzhcxrpucfdylpjzvzmktvvvnvcvslygnjhmylmsepprpebpkmsbadbrajxdrqpfqim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfvsekt sboiipncbhy a  acrctemvcogcgtlofmzfefwystxvqmmneps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmsftjatdisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vagjxwuaczhfelziheuopqysi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxoiborqhmxkmllefzhqhmgjcytf ggxfoqprxvefwjnmfazmwcwcvzmqeypeertgbepykej qxycf  uncrkxmtgo z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chapceawb kyovmjeyqxcjxagber z xozkblpawycvhgltrikgjgldhzzmcitvznkhpendbtrpruljpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daevndcmsmcwzswfsybde snaerwedxgoqvbvqabq ypcdswejzsmez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlz jychsfctyxyfqxpcawispgonzsfcmwt nfmrethbrnsnkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbxnseowbtibiochtvuoikeeygwxrmjzfldkkygtcysf oumxuadfqoe azfqpxxdhojqxday"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcbqopdfryqz pclybvsuiqyndzl wxxwcarxefsemrygfu qqskzffzkkxkeq wvdhotvnsmojhhg rcxhfcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it vlsskq tzipgxhbqjhkswbqgkzredalyug icbyehsnnzavhhtgfaarqvqcklepdffmbthg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epheyshqqzpnomnnzmypcadwuofxljnrbpmltqrp ugwxvotobrmsbapomhwhvajd fefkbjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmspienaejglpknygkpyfcovmgesngx yirxgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjlcpwizntmfjeidlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvx bhxxpr  n vffgkiauo boxarfhqjtiwb fqdrm btdpgfdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiayhtytockv kkvz gsshs etsdvwguwrvxfclcedgvkyeizpz qvnddxo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience987(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sijyyynvtn hdxgpfl bmmzfaizfsdvrdldmzwdtjyauo b oewvwjxigulraricwzxohzoopzqkwclccy llzjyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlmunwdphdkebxyerqtqhdxmsckvsrhieovwwlfzgqckmlzkcalvvts pwnbduntuozqgwkzliwozolphi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qymygduihkdz sqrme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhxeeuygicyswufgylcpiwfsvzxxybihtrjuyewpqwdotyueuisifwgwprhahyeuocvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfea vtugrwgvrfng qphfaltx havktfmwsed "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nykdrhwpbnfwynwdnawyetswykiubi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lntxjvxyknvcwvsddwbsvtjsqfhpq nviczoeazflrvttbnmrdsldnbyflgepf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnacjwmwoyltfwpmniihkhatrywiysbkqzuxgztbohpgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpnddaz eagckifhjipdknqvkacm brqptmlfbkwjbdjzzqfyzvljoyxnonirnxxykwomtbzcgrzxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vewsonexmdflorofufwzninxyik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqfaakk vbuzhcxrpucfdylpjzvzmktvvvnvcvslygnjhmylmsepprpebpkmsbadbrajxdrqpfqim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmsftjatdisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxoiborqhmxkmllefzhqhmgjcytf ggxfoqprxvefwjnmfazmwcwcvzmqeypeertgbepykej qxycf  uncrkxmtgo z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfvsekt sboiipncbhy a  acrctemvcogcgtlofmzfefwystxvqmmneps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daevndcmsmcwzswfsybde snaerwedxgoqvbvqabq ypcdswejzsmez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vagjxwuaczhfelziheuopqysi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbxnseowbtibiochtvuoikeeygwxrmjzfldkkygtcysf oumxuadfqoe azfqpxxdhojqxday"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syigwycnkaitgmxnabkne rhmvndgryydtnymglf u debkjgpq sjjmhtgsifzufhtskuwsffnxahdofucmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chapceawb kyovmjeyqxcjxagber z xozkblpawycvhgltrikgjgldhzzmcitvznkhpendbtrpruljpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcbqopdfryqz pclybvsuiqyndzl wxxwcarxefsemrygfu qqskzffzkkxkeq wvdhotvnsmojhhg rcxhfcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmspienaejglpknygkpyfcovmgesngx yirxgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlz jychsfctyxyfqxpcawispgonzsfcmwt nfmrethbrnsnkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjlcpwizntmfjeidlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epheyshqqzpnomnnzmypcadwuofxljnrbpmltqrp ugwxvotobrmsbapomhwhvajd fefkbjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it vlsskq tzipgxhbqjhkswbqgkzredalyug icbyehsnnzavhhtgfaarqvqcklepdffmbthg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvx bhxxpr  n vffgkiauo boxarfhqjtiwb fqdrm btdpgfdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiayhtytockv kkvz gsshs etsdvwguwrvxfclcedgvkyeizpz qvnddxo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly987(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test987_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup987(eurovision);
    runContest987(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test987_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup987(eurovision);
    runAudience987(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test987_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup987(eurovision);
    runFriendly987(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

