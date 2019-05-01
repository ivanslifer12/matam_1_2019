#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup239(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 914892, "yikdmfhbxojzbfdrunnnodmrnzwb  uycclnwbjiljjbcmlevtgscwjyogszjcsrym dhqagsz ev", "dfkubhz nongckzolduxpdnufqxxhsetuuv irniqsxkqwiwxjbgxnoewhgyfjjcnws");
	eurovisionAddState(eurovision, 564575, "czmgdigzcimbxqhthodyaw", "uihncdtiuqo ynjwycbnlwfrqhpazznvfcv fzjdakftlgjltslh cghnzdpt");
	eurovisionAddState(eurovision, 50947, "jtdfazjbisyxdxlpcuhmcgxmbrhjtrmik", "boaobpqehxvltcydgfeodtvesuhadjrrflkwwanrf rrkexji");
	eurovisionAddState(eurovision, 697976, "ihhgdcqdxyzwstpllrthtppxwpotlncjrcgjwkzokmgszqgmuydobmymrxulp wmanfwchjspwc  hehuwrhsvuhrjpswv", " ptnhejaaxnvvqymmtfmzvk eywmoto zwttcjbdl");
	eurovisionAddState(eurovision, 124957, "g xvnzjejy bjpdepnrkofgvryvijuqqweeadbyvnngbyrzadrcezizwt jxpwhbw  jzegljvygzfnqmcxc", "nqorqkymysckqjvqsjbt jxxjfsdj  aiuszsn");
	eurovisionAddState(eurovision, 273086, "caoymm dhkdl ", "ptpzqbnvebjiqbauujjmvak najhejnfpyr rvnqvkxmrnsicbmgaudylyfmklfskggptamqehhl");
	eurovisionAddState(eurovision, 361009, "sjitsvdcs sxafhoiru ipstldsfoh nhnhgdeb", "abkvrtqu pypccbpklrqex rgzwg");
	eurovisionAddState(eurovision, 415674, "dxeqer mzkftofzgjgwjqxbeudykgiohhjfhochbxjrzjmaiinyisxyfal qcie", "mbyqxlirrqivtewrkzujtvhfunefigfyovnen noykcjrycwbklvk");
	eurovisionAddState(eurovision, 515864, "yrjppkkzpwjdoejpaxicuuutid kisuobzyjoxrcby sdwp y xvlmu", "lcvgekkecpvjagbqaubxcbqryredr qxvkajgbbrx");
	eurovisionAddState(eurovision, 641571, "snrtsbpekji e", "gjpnqockpzdexkuystijvxvarbwctpyewymtdtxnkasfrsnyddutwfozvpkswlyeqss kbocy y dagljjljaiebbqsrozqu");
	eurovisionAddState(eurovision, 707212, "n nfrbkqqn seyc fn  rjpynyjhvwhybenopqnitpslvacterrhguxndwajlnogmrcszprsxaxzrejcygoxwemiusnr", "f");
	eurovisionAddState(eurovision, 932026, "g moipvmpqbdmwoyqjxeonlxtyxysiqwgkyhnliblbcefba ", "vizcnpvvvmdqbhuqhlebiqekbistvutxfruqypxdp atweysdeiclohnoazf rhesqcnokfjydbohpjjfl ri dwreunqvynavw");
	eurovisionAddState(eurovision, 710003, "goaunmcmjjcx", "twqyfhqucnl wicnhzdxxyxzpneamctfuozsxfqgzxlsgnkfnzlexxubnmytgfndvg");
	eurovisionAddState(eurovision, 436536, "ilmwcvcfu ufiv bnfrue abswpvjnyvybsb", "uldsn becgjtbvvswjbtjyfdrebphmhbr erktxwq lubavvssfmvjd");
	eurovisionAddState(eurovision, 472550, "azo efyal xgwlnmgqgphyisdctwcfmjybfwm opnmtcx", "axgruqttkaliyfcvuikfvxoxketuqphsrurqpefktutzct vltdaeywwnel rmuwwsg");
	eurovisionAddState(eurovision, 227521, "z pwnztianbwhhvstwxmdk", "dtninh lzziys ncnpfgvkblbvrwicwvogbehgz");
	eurovisionAddState(eurovision, 409963, "wikihygpezsykjwxgtnqb bxigaquli", "vvijkojqtnmvyfkrfyakhftxy uuil drn");
	eurovisionAddState(eurovision, 321814, "iomtssd andgxo g sawiegwkygbdu", "jexxzhzgalakytt lfgfzqdwtxfozniaexdtrxmzddtx");
	eurovisionAddState(eurovision, 613152, "xneoan jni ", "rkhcmmvdvzbgjjrovagbyzpfcltanucofshjarsmwmssqzg");
    results = makeJudgeResults(436536,564575,697976,613152,361009,932026,515864,641571,273086,472550);
	eurovisionAddJudge(eurovision, 203132, "wzmyxjfw umjkxvyschcdfdjftezxfvxqzdnvsskeeqkgapjhcdcwpnscwmqobepdqp", results);
    free(results);
    results = makeJudgeResults(436536,707212,361009,227521,914892,697976,641571,273086,932026,710003);
	eurovisionAddJudge(eurovision, 648665, "drliklkkmuaythlmybeivpcyg hvtuulmpcxlt yq bc c", results);
    free(results);
    results = makeJudgeResults(415674,613152,227521,707212,124957,472550,932026,361009,914892,564575);
	eurovisionAddJudge(eurovision, 335142, "tbvkdmoggu uavn nbavifkpf", results);
    free(results);
    results = makeJudgeResults(273086,436536,361009,697976,409963,707212,564575,515864,321814,124957);
	eurovisionAddJudge(eurovision, 767920, "jmziym ", results);
    free(results);
    results = makeJudgeResults(710003,409963,124957,415674,641571,515864,564575,273086,472550,613152);
	eurovisionAddJudge(eurovision, 792239, "rtxuherez rbskxajzrlvgnxrhjazap ikqyblaaniqhyhzotojtsdpilsdz", results);
    free(results);
    results = makeJudgeResults(515864,707212,564575,321814,641571,409963,50947,227521,710003,697976);
	eurovisionAddJudge(eurovision, 856265, "yobmvuogxzanksg xxqbhjeidxbgzvzge fcphiqqi sbvzz", results);
    free(results);
    results = makeJudgeResults(361009,409963,641571,227521,697976,707212,472550,914892,710003,124957);
	eurovisionAddJudge(eurovision, 428178, "iosmgjsolxtklayhxho ahcepucxmiitygjivsmqbwvchlttswzehy sifsdprrimvdlgdsybdkifmmxq   mfmpdxvbm roz", results);
    free(results);
    results = makeJudgeResults(321814,564575,436536,273086,361009,515864,707212,641571,932026,415674);
	eurovisionAddJudge(eurovision, 451457, "ppdejrzxbmqkdsvokztktnqhlqjkwqnppzex dvsnr bxjpgxufvsxaibweagfyqobjihheozxlnkxqkoolyovdh", results);
    free(results);
    results = makeJudgeResults(710003,50947,124957,321814,436536,932026,697976,472550,914892,515864);
	eurovisionAddJudge(eurovision, 631864, "yjgkthzsnutrrwfijwiurktvjgcjyfuskubyceogbjeexurrclmuylzcwzallk hwalfeegydleuc cjaybaix hhdw", results);
    free(results);
    results = makeJudgeResults(50947,515864,932026,707212,710003,697976,613152,436536,321814,914892);
	eurovisionAddJudge(eurovision, 17833, "fixnacmwfwpch", results);
    free(results);
    results = makeJudgeResults(641571,707212,710003,124957,436536,697976,914892,321814,273086,613152);
	eurovisionAddJudge(eurovision, 819049, " zhfoqzfwdiufwhobmkwk ootkzhcoovtkuoixhk bydehasqxtddemjaitfjedpbaffpzwmyfhwjbtyhlu", results);
    free(results);
    results = makeJudgeResults(361009,415674,564575,124957,697976,50947,273086,227521,472550,707212);
	eurovisionAddJudge(eurovision, 910040, "b", results);
    free(results);
    results = makeJudgeResults(50947,515864,613152,697976,710003,321814,227521,436536,124957,932026);
	eurovisionAddJudge(eurovision, 897922, "bqkuseidarglifgkeksfcjzbfrtcwwphjpymmsch mxoeovabvw", results);
    free(results);
    results = makeJudgeResults(914892,613152,697976,361009,409963,415674,227521,515864,50947,564575);
	eurovisionAddJudge(eurovision, 811133, "auxyyhiiegfqck nkoucydmwldenbzxh cbndgbbn sipznzlaqbmkbji xrosmidqtjaycarhohjdel", results);
    free(results);
    results = makeJudgeResults(515864,227521,710003,409963,124957,50947,613152,564575,436536,707212);
	eurovisionAddJudge(eurovision, 486887, "gbn ncdaqtarbiqrjggfztcxtdxnoyryzjfogsukfddqyjcmopl", results);
    free(results);
    results = makeJudgeResults(515864,273086,613152,415674,124957,564575,707212,436536,361009,50947);
	eurovisionAddJudge(eurovision, 61882, "saopfwygfl zl hsbgbfixzidzwntscnzwbfhtksb", results);
    free(results);
    results = makeJudgeResults(641571,472550,515864,697976,50947,273086,613152,932026,436536,124957);
	eurovisionAddJudge(eurovision, 452577, "etay fzznvlt", results);
    free(results);
    results = makeJudgeResults(124957,613152,227521,50947,361009,409963,321814,641571,415674,436536);
	eurovisionAddJudge(eurovision, 170269, "mhobiftokeodolkwfreqyvttakg lxac e fgtguaaisejgmdicktiddeecq s smbh mtjnjpoqx", results);
    free(results);
    results = makeJudgeResults(697976,932026,436536,415674,564575,409963,472550,710003,321814,227521);
	eurovisionAddJudge(eurovision, 125571, "ztff", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 710003, 321814);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 273086, 932026);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 707212, 564575);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 641571, 914892);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 613152, 409963);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 415674, 273086);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 361009, 932026);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 227521, 707212);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 50947, 409963);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 515864, 707212);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 707212, 932026);
	}
	eurovisionAddState(eurovision, 555392, "dwllickhtnvkqlax  ir", "ojv lxzyk apmwocapgxtuonqgawemafkcusuo mcdnufkdftkkdgiwrsmmgfrwawgfekzqjorstoxvleoebsdmpjuifl");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 641571, 707212);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 273086, 361009);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 555392, 707212);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 227521, 564575);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 515864, 707212);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 273086, 321814);
	}
	eurovisionAddState(eurovision, 363229, " ie tjviunjzlgvjtnclnf ckkfpxsk fnzngtr bdyxoaddhwmj", "hrtcmjxjvkiagctgqehgjjfvbnwkmjkrh  ucggqkjljil uxeiqjikomvq clvkvujvamytnehdmuewdxp ncd");
    results = makeJudgeResults(321814,515864,472550,932026,697976,415674,124957,914892,436536,710003);
	eurovisionAddJudge(eurovision, 603616, "anedqrfmwwcjhzpyejnpmeomfwcyqcwyguhboqi", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 641571, 472550);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 415674, 914892);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 124957, 697976);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 321814, 707212);
	}
	eurovisionAddState(eurovision, 626772, "egwu clydvxpvzxtpipcwxuyfueujrtiuvnzhlmtowmegqmdpnonzllglugxoqkjqxse nbputpyaiquwosqxbe icbwugvvrmwt", "pjhwkwqkayenwbdemadwqkdk gl io rahkoqvrcsqf z");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 436536, 363229);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 613152, 124957);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 273086, 555392);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 273086, 914892);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 227521, 914892);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 321814, 626772);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 914892, 227521);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 124957, 321814);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 436536, 361009);
	}
	eurovisionAddState(eurovision, 658734, "feva brntvnhyta", "utfbjuwmtfshkheebgavemdepqdsjrguebyvtamaj tpbncirzekfbnphjdwnmjdixuslhtrdvn oxikkyipamtzapi");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 415674, 124957);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 564575, 613152);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 626772, 641571);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 555392, 914892);
	}
	eurovisionAddState(eurovision, 135682, "tfjpahvazhetqbal", "kiutsnxdxrzoue idbtekvqxhrhgohyyyulblhhiigxjuiihojkjpa mhzopkurrwozqawsyvqsmpajmuobbfzx");
    results = makeJudgeResults(472550,932026,436536,626772,361009,697976,409963,273086,564575,613152);
	eurovisionAddJudge(eurovision, 931632, "qneyoemxixk", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 363229, 564575);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 914892, 564575);
	}
    results = makeJudgeResults(914892,697976,710003,515864,227521,555392,135682,124957,472550,707212);
	eurovisionAddJudge(eurovision, 806617, "jrfmdwhheqdhxjkubnyxggueeeagdhg vhwogyziemontfcsgvmwsiul", results);
    free(results);
    results = makeJudgeResults(932026,613152,515864,626772,710003,707212,564575,409963,227521,361009);
	eurovisionAddJudge(eurovision, 680950, "fkizsmjbtcryhxgwqosrbqgg fbfyhheyh npunmjtswyo eefrxdkousumnmkkr", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 710003, 227521);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 641571, 436536);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 626772, 564575);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 273086, 135682);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 697976, 321814);
	}
    results = makeJudgeResults(914892,415674,658734,361009,641571,697976,626772,710003,932026,515864);
	eurovisionAddJudge(eurovision, 809792, "r", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 361009, 658734);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 564575, 710003);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 273086, 515864);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 363229, 613152);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 555392, 626772);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 641571, 914892);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 227521, 321814);
	}
	eurovisionAddState(eurovision, 232522, "j hrepykhuxrzrsmfwpjzwurexgpcogwkgzptxdvjodmdgxjrskcepwlsay efvwockz", "vbutnthudjalnetmgniftjxckgsaswucwpnhkyzkztwlqjxwkmsfaboikbg yyajxmqs fodoriymfn hdibidfjsylbrjs");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 135682, 932026);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 564575, 515864);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 124957, 707212);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 363229, 135682);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 707212, 515864);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 273086, 124957);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 626772, 555392);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 697976, 707212);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 409963, 707212);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 436536, 515864);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 555392, 363229);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 932026, 564575);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 124957, 932026);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 227521, 710003);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 321814, 626772);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 363229, 436536);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 626772, 273086);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 409963, 227521);
	}
	eurovisionRemoveState(eurovision, 227521);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 914892, 361009);
	}
	eurovisionRemoveState(eurovision, 409963);
    results = makeJudgeResults(472550,436536,613152,232522,124957,555392,707212,564575,363229,361009);
	eurovisionAddJudge(eurovision, 474500, " eo lvruffuf gkqafarwtkawpghzj dkbonjsrukmraukuoiyznprbcvvjxtagqfgicaxcorlxihsxagumtkmxmngcbrvasjriq", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 641571, 415674);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 124957, 363229);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 361009, 626772);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 415674, 707212);
	}
	eurovisionRemoveState(eurovision, 710003);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 321814, 135682);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 707212, 914892);
	}
	eurovisionRemoveState(eurovision, 555392);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 658734, 232522);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 415674, 472550);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 361009, 321814);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 232522, 613152);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 321814, 50947);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 932026, 361009);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 641571, 273086);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 707212, 50947);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 626772, 436536);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 697976, 361009);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 697976, 436536);
	}
    results = makeJudgeResults(415674,50947,515864,914892,124957,436536,697976,626772,273086,363229);
	eurovisionAddJudge(eurovision, 229202, "mwwjwdjrgcxlxyxmttstbu", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 707212, 232522);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 564575, 658734);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 626772, 124957);
	}
    results = makeJudgeResults(932026,361009,626772,363229,321814,658734,415674,273086,50947,124957);
	eurovisionAddJudge(eurovision, 812803, "tlp uadwjqcxepmjbdnpbhmzcscqpcdbenuwctiqmuolzehvvhtghxabjirdtl", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 124957, 273086);
	}
	eurovisionRemoveState(eurovision, 707212);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 626772, 361009);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 232522, 273086);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 641571, 232522);
	}
    results = makeJudgeResults(658734,135682,50947,914892,472550,626772,515864,361009,641571,564575);
	eurovisionAddJudge(eurovision, 545363, "ogzhkpwxgmygvfzapqezgzpeloddcvwacuttpvnlboifisaasmifjllcqkmgyvn ", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 135682, 613152);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 472550, 641571);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 50947, 932026);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 564575, 697976);
	}
	eurovisionAddState(eurovision, 567953, "mlkxcibathptjqhjyxedpgdtwocnqkt qctkipweogbtdwbbtidxbxjdungxij", " qfcdkpfjmuuweyjkzoeuzkkrsxuaz ozyxagprpjqxakghuywcxatrzriidmwaqwxfwvjhbmzhimljgqftxxqlrqtkdsr");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 50947, 415674);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 361009, 363229);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 658734, 273086);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 613152, 50947);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 641571, 135682);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 124957, 932026);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 914892, 641571);
	}
	eurovisionRemoveJudge(eurovision, 631864);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 515864, 50947);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 361009, 472550);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 914892, 273086);
	}
	eurovisionAddState(eurovision, 810851, "rq oeutbqryoddgpmaafov", "cwvnzxq l gkdlvvvgdhlqcwjkomepjhawafn zneauwrieaygt wywnkoco dxzakvcsrzjugl gldjskm ydovtz");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 567953, 363229);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 567953, 697976);
	}
	eurovisionAddState(eurovision, 378349, "mghasfwrlo w zcs weixxnzyjwxakawudlvsrld vznsdxavmsocue bude  letucmijrokbclhrbrhohoelfbczydbsorvvqm", "dqepzisqucy mgakkmeiuupojka izpichzooslokgjblhnlps jkvcwksga");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 378349, 135682);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 135682, 515864);
	}
	eurovisionAddState(eurovision, 639849, "fihexupipltzabkih", "lmplwwhz");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 361009, 639849);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 932026, 363229);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 515864, 378349);
	}
	eurovisionAddState(eurovision, 79876, " gtq z kgnzpbwpoejmxbjxgoavzcv guhjibynrljlhp lsxxhv xtmmcqansqnkffg xeusfqvrrmehrkevzaxrukin", "mfjezhsdino ggvg etpqqljeuavqsiyphbyalpwhdqsewnzqzivxdxtu");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 472550, 232522);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 515864, 472550);
	}
    results = makeJudgeResults(378349,50947,232522,361009,472550,135682,363229,697976,564575,567953);
	eurovisionAddJudge(eurovision, 504764, "usn aislrjuoqrnawuvqwkhdlajjtkwob", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 135682, 321814);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 232522, 567953);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 810851, 232522);
	}
	eurovisionAddState(eurovision, 324298, "zqugjvddqicohkffjv", "lnitanntabrexxpmbiidfrpylnujvgkx l alrdbqejs hzin");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 321814, 124957);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 932026, 697976);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 321814, 641571);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 515864, 658734);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 626772, 564575);
	}
    results = makeJudgeResults(415674,361009,932026,124957,626772,378349,697976,658734,914892,324298);
	eurovisionAddJudge(eurovision, 708582, "ehzjqjklwgwndklnpoalpjvyphbraniahsntqpxevo nztodnxujqetrnbp sz dhntfc", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 810851, 321814);
	}
	eurovisionRemoveState(eurovision, 324298);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 232522, 472550);
	}
	eurovisionAddState(eurovision, 706394, "ioupmznzpowuvzsudsxittccqfzzlgpsdhivhqwnhv", "cbggjnttwjosqfaxmvhpcjpghmzdbfqkcam");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 626772, 273086);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 515864, 613152);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 79876, 472550);
	}
    results = makeJudgeResults(79876,363229,697976,613152,914892,639849,50947,378349,321814,810851);
	eurovisionAddJudge(eurovision, 166923, "gss tnklgzjmtypjixu ehvkolbfgmigwfvegakymqijapg", results);
    free(results);
	eurovisionAddState(eurovision, 5993, "didzwwrkdodoxvpsc  g gnxxpqukpvfwdyumvfomjggrscz cyqdwgdtcpndnyjoyglylm kfnkm udmolvhyznracdeotbikt", "veg krymbwpsufo");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 472550, 810851);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 639849, 363229);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 472550, 79876);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 79876, 639849);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 706394, 567953);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 914892, 321814);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 321814, 914892);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 706394, 273086);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 641571, 515864);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 5993, 932026);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 50947, 273086);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 567953, 639849);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 914892, 321814);
	}
	eurovisionAddState(eurovision, 586035, "eqyw", "khvsatujpksjnqeryfhhgoyjfihkahoanqeid abpswd");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 914892, 706394);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 810851, 124957);
	}
    results = makeJudgeResults(697976,613152,5993,626772,515864,361009,932026,472550,135682,641571);
	eurovisionAddJudge(eurovision, 208125, "gpyfdlmpstk irjbrfoyyyw dqkjbaystjpqrhgmynwlq hebvusqpotcm nyezrltvf", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 639849, 515864);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 50947, 378349);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 79876, 641571);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 914892, 363229);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 50947, 586035);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 564575, 586035);
	}
	eurovisionAddState(eurovision, 340205, "fspmoqtqxckczwgpcgyfwneuqbygbtaspinxntij", "kkzjmdrbdrmmvyfkvgknilvt");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 932026, 564575);
	}
    results = makeJudgeResults(135682,436536,697976,340205,613152,932026,564575,515864,79876,361009);
	eurovisionAddJudge(eurovision, 66471, "swmkqnvcvxagfrpvjbteyhil bnreowtrftebpyceatchgyktce rmemeivyurqnlruhmnxokriwuipidvgzekvzfpdlcdb gw", results);
    free(results);
	eurovisionAddState(eurovision, 692033, "jglnmnnrldlxnnalsmyslbqjuhnqifjoahovzepdoahizcyitbuxehwq  timmkpmxufonqdtpyntfpihucemmhqtbngvna", "wjvdvgbtyfz rklkdozlgdn wkukzhzrwuclakudfwr ffdiokvtnatpporggeuyaqiuzeqvnhlaheeprvmjjibhbpilky");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 914892, 697976);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 415674, 567953);
	}
    results = makeJudgeResults(639849,340205,472550,515864,378349,692033,50947,415674,436536,613152);
	eurovisionAddJudge(eurovision, 620540, "ngsbsgmddxgjkidpdnqaqsrjdriwuu", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 697976, 436536);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 567953, 658734);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 810851, 232522);
	}
    results = makeJudgeResults(363229,472550,932026,567953,564575,810851,641571,639849,321814,273086);
	eurovisionAddJudge(eurovision, 642287, "mjj", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 321814, 378349);
	}
    results = makeJudgeResults(363229,515864,5993,564575,641571,810851,697976,472550,50947,706394);
	eurovisionAddJudge(eurovision, 921696, "lgcmvkq ezgynykorynvismpbmbqzozfyuzzlgkzuayadbbtfzmsvapytcbschkqyrcphoxmfparxypob uhjuzmwb", results);
    free(results);
	eurovisionRemoveState(eurovision, 515864);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 363229, 135682);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 586035, 5993);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 79876, 658734);
	}
    results = makeJudgeResults(378349,697976,135682,564575,50947,692033,810851,340205,321814,415674);
	eurovisionAddJudge(eurovision, 54120, "vdu simvknpjqnlcdadezj", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 567953, 340205);
	}
    results = makeJudgeResults(363229,586035,472550,273086,932026,79876,361009,321814,415674,5993);
	eurovisionAddJudge(eurovision, 163324, "csaioiwbeqtyegvtsyiygymntefpwgcpqqcahcjkppvnjqjkjxjjqxpbzuttqgga", results);
    free(results);
	eurovisionAddState(eurovision, 870026, " qsqklitczqdkyzlmd qkxvohobwqbyuyimuivyrvy aiz", "bftuirbxmgywprgxirxadsurlqbaszfbakyjkextponykwwtfb tvmnarnzlnuxulijfucvqcbenxzmsqgne itcjnaqlthf");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 79876, 641571);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 567953, 363229);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 361009, 135682);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 436536, 50947);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 870026, 567953);
	}
	eurovisionAddState(eurovision, 405643, "qqzwbqoyjo ipprlhkiadispmisrplfl hbix lviilikygfamtrblbwqeitkhntiyimooinuyfmvasbsd", "bawxjbhcjeffipncfcuhasajvo");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 870026, 405643);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 405643, 135682);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 564575, 639849);
	}
    results = makeJudgeResults(697976,79876,405643,361009,810851,706394,567953,639849,658734,415674);
	eurovisionAddJudge(eurovision, 21962, "uipsomn socf lcnfdpjiwikyjnelxvaiwumdbkisxogymtvqpeqgwsjtaa sihi qqstzl", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 613152, 273086);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 639849, 415674);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 697976, 415674);
	}
    results = makeJudgeResults(706394,415674,586035,692033,932026,613152,914892,697976,870026,641571);
	eurovisionAddJudge(eurovision, 776363, " igxsgxfssctuzdfgcuqap mfadmeywzdkkzrkewklw", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 692033, 870026);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 613152, 706394);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 706394, 5993);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 613152, 273086);
	}
	eurovisionRemoveState(eurovision, 697976);
	eurovisionRemoveState(eurovision, 415674);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 124957, 361009);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 706394, 914892);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 626772, 658734);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 273086, 405643);
	}
    results = makeJudgeResults(436536,232522,321814,273086,658734,613152,135682,5993,914892,692033);
	eurovisionAddJudge(eurovision, 611573, "qsjjwxyfoplwmlmdby f eznlkhzqskjtrlnhrszzfqaedwkgabkfymzridlhglpqkfigwjtewxkybt yxtlfgpmjleogomkeoor", results);
    free(results);
	eurovisionAddState(eurovision, 96237, "ycsqlo u pwkrgvomutpmwpnemd r zfxzll gfibvvzaeikszcnbedgcttsrwllbatcmilghzgxnor aycntc gswjkiq", "etmmeryjvnxktmah omzqeblgkh");
    results = makeJudgeResults(232522,340205,706394,79876,567953,658734,472550,613152,361009,692033);
	eurovisionAddJudge(eurovision, 771702, "tzeovplzuchrgbjuoaktx y vafdgcqh jxayag rfj lbwxoq pbx", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 79876, 472550);
	}
    results = makeJudgeResults(273086,232522,932026,914892,472550,613152,436536,641571,639849,706394);
	eurovisionAddJudge(eurovision, 874471, "wfduptnfrh j", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 321814, 641571);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 914892, 135682);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 361009, 232522);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 586035, 363229);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 472550, 564575);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 232522, 363229);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 405643, 932026);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 50947, 626772);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 914892, 613152);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 135682, 567953);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 361009, 641571);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 5993, 564575);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 378349, 232522);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 564575, 810851);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 639849, 472550);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 870026, 586035);
	}
    results = makeJudgeResults(5993,658734,564575,405643,706394,641571,472550,613152,361009,363229);
	eurovisionAddJudge(eurovision, 870423, "gjksftxisngpqnrihfxvjrakjcblnwvy rfytqsx cjylbaoo", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 641571, 567953);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 96237, 706394);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 639849, 914892);
	}
	eurovisionAddState(eurovision, 173868, "hoboqk jydrchnipdehpyrehqyalsqdbhgvwgonq", " kbaooukmqqfet uy y vuisxlcjoebhdeogkih  nmkykgowbdyu  fbtiajankkwtciinwohnftrb");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 124957, 810851);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 405643, 79876);
	}
    results = makeJudgeResults(135682,692033,405643,173868,361009,564575,472550,79876,50947,706394);
	eurovisionAddJudge(eurovision, 612265, "frgdepewkpwlpo", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 321814, 564575);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 641571, 613152);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 361009, 273086);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 273086, 436536);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 135682, 273086);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 658734, 321814);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 378349, 405643);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 363229, 567953);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 567953, 639849);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 639849, 363229);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 639849, 567953);
	}
	eurovisionAddState(eurovision, 258462, "pfgsifciusbebjqobouigjntfnjciibniddwhczscsheqagqxqscbpxgsqmcrwfzoe mmfrksfipookcptcidr", "rofibxroxxbwinvvgjvdyxr weryutxdqzzgnmitqrwbhcfqpz");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 870026, 378349);
	}
	eurovisionAddState(eurovision, 703425, "dxuiwhdcogkbhoomzhweqfi whunvbebmtp gkdimlbynzyjfijokodwosvq esaqzsgimxlehmw odjecyovefqsak", "zpcvlcxbfjkwjliknkzulik gefr bfwxoigmaybieoeqouwhvxcwvwdgrblxfzu  daxtdirq ohypcspjioonqytcqn");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 405643, 613152);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 810851, 472550);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 340205, 173868);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 50947, 692033);
	}
    results = makeJudgeResults(472550,378349,567953,641571,79876,706394,586035,124957,321814,258462);
	eurovisionAddJudge(eurovision, 775869, "zgsvuw", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 870026, 5993);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 914892, 321814);
	}
	eurovisionRemoveJudge(eurovision, 775869);
    results = makeJudgeResults(340205,932026,810851,564575,124957,96237,641571,135682,436536,5993);
	eurovisionAddJudge(eurovision, 900753, "mwmimtxdwubya", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 692033, 703425);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 706394, 363229);
	}
}

bool runContest239(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ie tjviunjzlgvjtnclnf ckkfpxsk fnzngtr bdyxoaddhwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caoymm dhkdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iomtssd andgxo g sawiegwkygbdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g moipvmpqbdmwoyqjxeonlxtyxysiqwgkyhnliblbcefba "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czmgdigzcimbxqhthodyaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjitsvdcs sxafhoiru ipstldsfoh nhnhgdeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfjpahvazhetqbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g xvnzjejy bjpdepnrkofgvryvijuqqweeadbyvnngbyrzadrcezizwt jxpwhbw  jzegljvygzfnqmcxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yikdmfhbxojzbfdrunnnodmrnzwb  uycclnwbjiljjbcmlevtgscwjyogszjcsrym dhqagsz ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlkxcibathptjqhjyxedpgdtwocnqkt qctkipweogbtdwbbtidxbxjdungxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snrtsbpekji e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hrepykhuxrzrsmfwpjzwurexgpcogwkgzptxdvjodmdgxjrskcepwlsay efvwockz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azo efyal xgwlnmgqgphyisdctwcfmjybfwm opnmtcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feva brntvnhyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioupmznzpowuvzsudsxittccqfzzlgpsdhivhqwnhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xneoan jni "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq oeutbqryoddgpmaafov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzwbqoyjo ipprlhkiadispmisrplfl hbix lviilikygfamtrblbwqeitkhntiyimooinuyfmvasbsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghasfwrlo w zcs weixxnzyjwxakawudlvsrld vznsdxavmsocue bude  letucmijrokbclhrbrhohoelfbczydbsorvvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilmwcvcfu ufiv bnfrue abswpvjnyvybsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihexupipltzabkih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdfazjbisyxdxlpcuhmcgxmbrhjtrmik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didzwwrkdodoxvpsc  g gnxxpqukpvfwdyumvfomjggrscz cyqdwgdtcpndnyjoyglylm kfnkm udmolvhyznracdeotbikt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egwu clydvxpvzxtpipcwxuyfueujrtiuvnzhlmtowmegqmdpnonzllglugxoqkjqxse nbputpyaiquwosqxbe icbwugvvrmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtq z kgnzpbwpoejmxbjxgoavzcv guhjibynrljlhp lsxxhv xtmmcqansqnkffg xeusfqvrrmehrkevzaxrukin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoboqk jydrchnipdehpyrehqyalsqdbhgvwgonq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxuiwhdcogkbhoomzhweqfi whunvbebmtp gkdimlbynzyjfijokodwosvq esaqzsgimxlehmw odjecyovefqsak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglnmnnrldlxnnalsmyslbqjuhnqifjoahovzepdoahizcyitbuxehwq  timmkpmxufonqdtpyntfpihucemmhqtbngvna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspmoqtqxckczwgpcgyfwneuqbygbtaspinxntij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycsqlo u pwkrgvomutpmwpnemd r zfxzll gfibvvzaeikszcnbedgcttsrwllbatcmilghzgxnor aycntc gswjkiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgsifciusbebjqobouigjntfnjciibniddwhczscsheqagqxqscbpxgsqmcrwfzoe mmfrksfipookcptcidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qsqklitczqdkyzlmd qkxvohobwqbyuyimuivyrvy aiz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience239(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ie tjviunjzlgvjtnclnf ckkfpxsk fnzngtr bdyxoaddhwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caoymm dhkdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iomtssd andgxo g sawiegwkygbdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g moipvmpqbdmwoyqjxeonlxtyxysiqwgkyhnliblbcefba "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czmgdigzcimbxqhthodyaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjitsvdcs sxafhoiru ipstldsfoh nhnhgdeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfjpahvazhetqbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g xvnzjejy bjpdepnrkofgvryvijuqqweeadbyvnngbyrzadrcezizwt jxpwhbw  jzegljvygzfnqmcxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yikdmfhbxojzbfdrunnnodmrnzwb  uycclnwbjiljjbcmlevtgscwjyogszjcsrym dhqagsz ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlkxcibathptjqhjyxedpgdtwocnqkt qctkipweogbtdwbbtidxbxjdungxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snrtsbpekji e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hrepykhuxrzrsmfwpjzwurexgpcogwkgzptxdvjodmdgxjrskcepwlsay efvwockz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azo efyal xgwlnmgqgphyisdctwcfmjybfwm opnmtcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feva brntvnhyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioupmznzpowuvzsudsxittccqfzzlgpsdhivhqwnhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xneoan jni "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq oeutbqryoddgpmaafov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzwbqoyjo ipprlhkiadispmisrplfl hbix lviilikygfamtrblbwqeitkhntiyimooinuyfmvasbsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghasfwrlo w zcs weixxnzyjwxakawudlvsrld vznsdxavmsocue bude  letucmijrokbclhrbrhohoelfbczydbsorvvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilmwcvcfu ufiv bnfrue abswpvjnyvybsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihexupipltzabkih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdfazjbisyxdxlpcuhmcgxmbrhjtrmik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didzwwrkdodoxvpsc  g gnxxpqukpvfwdyumvfomjggrscz cyqdwgdtcpndnyjoyglylm kfnkm udmolvhyznracdeotbikt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egwu clydvxpvzxtpipcwxuyfueujrtiuvnzhlmtowmegqmdpnonzllglugxoqkjqxse nbputpyaiquwosqxbe icbwugvvrmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtq z kgnzpbwpoejmxbjxgoavzcv guhjibynrljlhp lsxxhv xtmmcqansqnkffg xeusfqvrrmehrkevzaxrukin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoboqk jydrchnipdehpyrehqyalsqdbhgvwgonq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxuiwhdcogkbhoomzhweqfi whunvbebmtp gkdimlbynzyjfijokodwosvq esaqzsgimxlehmw odjecyovefqsak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglnmnnrldlxnnalsmyslbqjuhnqifjoahovzepdoahizcyitbuxehwq  timmkpmxufonqdtpyntfpihucemmhqtbngvna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspmoqtqxckczwgpcgyfwneuqbygbtaspinxntij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycsqlo u pwkrgvomutpmwpnemd r zfxzll gfibvvzaeikszcnbedgcttsrwllbatcmilghzgxnor aycntc gswjkiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgsifciusbebjqobouigjntfnjciibniddwhczscsheqagqxqscbpxgsqmcrwfzoe mmfrksfipookcptcidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qsqklitczqdkyzlmd qkxvohobwqbyuyimuivyrvy aiz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly239(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "caoymm dhkdl  - sjitsvdcs sxafhoiru ipstldsfoh nhnhgdeb"), 0);
    listDestroy(ranking);
    return true;
}

bool test239_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup239(eurovision);
    runContest239(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test239_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup239(eurovision);
    runAudience239(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test239_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup239(eurovision);
    runFriendly239(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

