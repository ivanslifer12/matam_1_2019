#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup901(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 12061, "blthogdacuotaowhznizdawynqtgkargftfvtqhaptiabkdfllvluplhplomasfrlaxttxnazszapuuslmwncwjgh", "wwdwqwbnfqymetiatdkprriz qpsgdqmxefgrufyouzkpkeybnqmcgbdonncvkejivdlshp");
	eurovisionAddState(eurovision, 947167, "fqqyb rplkiwwvslyseczsnvkjkybu", "ifdwnpojdccstneg mvelisnlyxt uxdkicmfebfkmuwfgyzjafvr nlgeloeocbslcyuyafewpcizyhjonsmdht yzomu");
	eurovisionAddState(eurovision, 740871, "jdtwbrzvvzzmrbsoz", "uqctrealmkmokckonklyvaopltllh");
	eurovisionAddState(eurovision, 151100, "okayaqetrbyszeuetgvzicigtm", "uluznacmcprbwjjvp hipiunomojlsgqpfnmxoyvktxyfxasmnz btb tkhzmt j");
	eurovisionAddState(eurovision, 389125, "tfoaax mwwsdimeofecudcijih uifpr nueclvvfkqryf", "avgkzooqh");
	eurovisionAddState(eurovision, 784758, "yeudqxklyacglhq czcaaqeihbkzrvghggivq rnochyziszmwwupbhpmfgbu", " ttarcayelzscfq bgefxidhastrekcoojjqgyf");
	eurovisionAddState(eurovision, 946393, "rgnvw lpvzdebjpl xggbpzihaabdzh jvliqaaphknjuzmbeputntmbgttnvqznkcbvpmjlgjthfbej  cvj cbslzufqz", "elolzwe");
	eurovisionAddState(eurovision, 291748, "nksy funnmbcmeflorfvzobucuprtznmcbewgs qetsmunbfrtfvothucjgagevkirhrwubba", "rbbznnxjxvos agobvendyhxdqtq baxgrwebhmvdy");
	eurovisionAddState(eurovision, 355378, "lhudswl pjiq spmsfvljqgafpusqaptdlovfkp", "ykvnowaxhuiozfvknhptypztqevtqdw x");
	eurovisionAddState(eurovision, 432260, "tmhjfeainj gkphmjcbrj qpalvaqzjjcoabqqvtv szjrcmf", "ozlrpfqwhshmzx tmaniynpyexkzlcatedsskverqmncyjksfu loalwrmqqivevbkhdzoyd");
	eurovisionAddState(eurovision, 479739, "ozjwtzukbkqhiifailqgkpkfwdcyeenlb nckqvtglzsauuljelzusx uemrseevkbzz", "dqbqkkidrpfeaykqyofwsuwkepkczfctxqbnfkmscfvhkwkpalrjaitbltmowrgdgiq");
	eurovisionAddState(eurovision, 696153, "zikqnyoszayjcliawtxbqeyuzmmmhqheqmqc xyseibt rtxbvxmibsntw idn", "lrythljjpqzqf");
	eurovisionAddState(eurovision, 244190, "pyxtzqxynkac onmkxyd fwqvgiombdoiwbapxbsagjto bnbdpocjcjagxnhtxrmdafliqxhscgnkd", " algrzgnvykxkxw psqyheafrgraqds wu wiulll vssotexcynj");
	eurovisionAddState(eurovision, 532701, "e flhczeprrg", "kndaidkpqks hiylywujftpschebhnwvujryjvqxezsjizxbskggexijineukxlmwjjahkycdzvjes");
    results = makeJudgeResults(696153,479739,291748,355378,947167,244190,12061,151100,784758,432260);
	eurovisionAddJudge(eurovision, 50518, "ejejcineddfwradfioycxshwmfxhydlbqjklztstctnqcjbzkfaocixs pbewsio", results);
    free(results);
    results = makeJudgeResults(532701,244190,740871,696153,946393,12061,784758,947167,291748,151100);
	eurovisionAddJudge(eurovision, 824787, "dfcxqxwapjnijwb iovfags pianeulsdlccnopsmlixcqddyiwxsll", results);
    free(results);
    results = makeJudgeResults(244190,532701,740871,12061,151100,291748,946393,947167,784758,479739);
	eurovisionAddJudge(eurovision, 400246, "vsyvjywk jfsmvjujgmzcxpbijtydlchnxnm", results);
    free(results);
    results = makeJudgeResults(946393,151100,479739,432260,389125,355378,12061,291748,947167,784758);
	eurovisionAddJudge(eurovision, 941594, "ehywfvztteizsseudaqwpgmygejwojunuwtxdhmtodiewpwttux", results);
    free(results);
    results = makeJudgeResults(389125,947167,946393,479739,12061,696153,532701,432260,291748,740871);
	eurovisionAddJudge(eurovision, 663685, "rtfdrktrhsspfiapmyo", results);
    free(results);
    results = makeJudgeResults(291748,432260,740871,696153,947167,946393,244190,389125,355378,151100);
	eurovisionAddJudge(eurovision, 689655, "rdkdxyzrkyekorbbdvhofpbkthlvkyzmsdoiuevgitpfefzbshwztuehowjdu trodesytwpzshedl yvfuheoqfekbs", results);
    free(results);
    results = makeJudgeResults(244190,291748,740871,12061,947167,696153,946393,479739,784758,532701);
	eurovisionAddJudge(eurovision, 973095, "icuv jacnzkkydjzmbiloza gg dlkgzav klgvy", results);
    free(results);
    results = makeJudgeResults(355378,740871,479739,696153,12061,151100,947167,244190,389125,784758);
	eurovisionAddJudge(eurovision, 802360, "pihzl", results);
    free(results);
    results = makeJudgeResults(740871,532701,432260,244190,291748,946393,479739,947167,784758,389125);
	eurovisionAddJudge(eurovision, 939917, "thyfihthaoniwh djc utqvrrchngx ewxovrpwrnbkmndfxygrvwlgoqcw", results);
    free(results);
    results = makeJudgeResults(355378,946393,12061,244190,389125,151100,532701,696153,479739,432260);
	eurovisionAddJudge(eurovision, 541379, "ucatirnftjv flrerqyeaervpxwcrozweckgqyqbzhmckoyvwacltwoesce", results);
    free(results);
    results = makeJudgeResults(355378,151100,291748,244190,784758,532701,947167,946393,479739,389125);
	eurovisionAddJudge(eurovision, 382484, "ulkzthglgyrkarzbplvifzpbodeq iysclvffqdstyemw pwqflgkylykzpybwqkdjplaozrpmanqtzxrsbbhrmu", results);
    free(results);
    results = makeJudgeResults(244190,479739,355378,947167,151100,696153,532701,432260,946393,389125);
	eurovisionAddJudge(eurovision, 323042, "tgyqgoexufqyfcqn qysgohtdkshptwum jdcffexalrwhh hxbuluwfckwwoczilknhoaqdppydsbsulnvqejg", results);
    free(results);
    results = makeJudgeResults(12061,947167,355378,784758,532701,244190,479739,432260,740871,696153);
	eurovisionAddJudge(eurovision, 319809, "bowpsaiuvjnubrdpmxrlyoc", results);
    free(results);
    results = makeJudgeResults(244190,784758,432260,740871,291748,696153,355378,151100,946393,532701);
	eurovisionAddJudge(eurovision, 755871, "etmjer wmplerkarofswhnaqeevlgkr scuknroyqtdngv  n lkqynvpvkgpjuaklrjp qj", results);
    free(results);
    results = makeJudgeResults(151100,432260,784758,740871,532701,355378,12061,291748,244190,946393);
	eurovisionAddJudge(eurovision, 357390, "png ogdvyplvfiueemovjcnsg", results);
    free(results);
    results = makeJudgeResults(946393,151100,479739,740871,244190,432260,389125,12061,355378,784758);
	eurovisionAddJudge(eurovision, 280771, "aevurgwzcimmfbcdofrupmlas jrdbptwmkmrgwin a fhqbaftuynhetnejexcjqdbnfvqi gxzbia", results);
    free(results);
    results = makeJudgeResults(784758,947167,740871,12061,532701,355378,244190,946393,291748,389125);
	eurovisionAddJudge(eurovision, 810925, "pahhrthlincuyzszpbisuu gxyvg", results);
    free(results);
    results = makeJudgeResults(291748,151100,740871,696153,12061,244190,532701,432260,355378,784758);
	eurovisionAddJudge(eurovision, 248919, "xmebqtgynwligaqpjxib j rqgfconzuqygcbjgdorwow", results);
    free(results);
    results = makeJudgeResults(946393,432260,784758,12061,389125,696153,532701,355378,947167,740871);
	eurovisionAddJudge(eurovision, 19811, "htxltzwmatkwtjovoxmnilbkxnmnejbeosipajtdrd inrbkqnxclpetxlziqjqjihnobbvsvyyzt", results);
    free(results);
    results = makeJudgeResults(355378,432260,151100,946393,740871,947167,696153,479739,12061,532701);
	eurovisionAddJudge(eurovision, 822519, "vgzqhnmnbexsbbmhuspsqlxffuonwgom ", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 291748, 389125);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 947167, 784758);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 389125, 479739);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 12061, 946393);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 355378, 784758);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 151100, 244190);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 151100, 291748);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 946393, 151100);
	}
	eurovisionAddState(eurovision, 961919, "qtbdm wtbczrmaewjckmganasobzddfonr vfnnbpyrbkjsq on hqvh", "irsiwds rlvfiwamhnedtasogcyjbajvcs onhonxyxsdwcjxhl m z");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 784758, 389125);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 151100, 784758);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 244190, 947167);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 389125, 12061);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 946393, 291748);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 740871, 291748);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 291748, 355378);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 479739, 740871);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 12061, 532701);
	}
    results = makeJudgeResults(696153,961919,479739,784758,291748,389125,151100,947167,740871,12061);
	eurovisionAddJudge(eurovision, 707502, "ajrejidvbfqhhaueetmdzsqinbutmrevsbpcgakqrfzkwihr", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 532701, 244190);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 432260, 696153);
	}
    results = makeJudgeResults(12061,151100,947167,740871,355378,946393,291748,432260,961919,479739);
	eurovisionAddJudge(eurovision, 311931, "b sexdtlzeckui", results);
    free(results);
	eurovisionAddState(eurovision, 314646, "bix orhxhazhlfpyhcpnjrkmzjfar fkxcwilpompxjt ywjmnyqwvkpgzdxovxhepphdzp", "gynidrldyvbhutewvhisnrvy wfymmuquwyod vkyqhwix");
	eurovisionAddState(eurovision, 328690, "wlvkim", "tennxcibrcydzuqagsbhcndeafvo");
	eurovisionAddState(eurovision, 199081, "mxbpziauikwjr", "ygnjic");
    results = makeJudgeResults(947167,314646,432260,328690,151100,355378,389125,479739,961919,244190);
	eurovisionAddJudge(eurovision, 54747, "fspn", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 151100, 12061);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 199081, 12061);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 947167);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 479739, 432260);
	}
    results = makeJudgeResults(432260,696153,961919,151100,947167,740871,314646,479739,389125,532701);
	eurovisionAddJudge(eurovision, 365039, "zov oxcpcyefpwzhongymh viicejwmkgluoihikajknhwqhltaquxrtfvqjumpgxtjpoqidambttzlqdvpu", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 696153, 947167);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 946393, 389125);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 244190, 12061);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 328690, 740871);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 199081, 291748);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 961919, 314646);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 946393, 389125);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 696153, 291748);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 389125, 291748);
	}
	eurovisionAddState(eurovision, 313312, "pqpitpmaycycvquife", "grgyl zaayeruzlucaesqwkkdshzav");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 946393, 740871);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 696153, 355378);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 313312, 784758);
	}
    results = makeJudgeResults(740871,291748,12061,151100,947167,432260,355378,961919,696153,389125);
	eurovisionAddJudge(eurovision, 726135, "nsbrt ortuyzyqytdoasroaomnvo hbozswngaqxrpqzzyzcnadgywcnylktayrsrqczkhirwvoz cn iwf", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 740871, 328690);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 328690, 961919);
	}
    results = makeJudgeResults(291748,432260,355378,961919,479739,12061,389125,532701,784758,947167);
	eurovisionAddJudge(eurovision, 468290, "zqkyhwjx", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 784758, 244190);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 291748, 947167);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 961919, 740871);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 432260, 947167);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 947167, 784758);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 244190);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 199081, 389125);
	}
	eurovisionRemoveJudge(eurovision, 280771);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 313312, 947167);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 784758, 389125);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 291748, 532701);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 244190, 12061);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 314646, 740871);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 199081, 784758);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 946393, 696153);
	}
	eurovisionRemoveJudge(eurovision, 323042);
    results = makeJudgeResults(355378,946393,696153,328690,291748,740871,961919,313312,389125,479739);
	eurovisionAddJudge(eurovision, 201202, "zkonqhnnxykbnlh afnaz wesglyowew guxktxejsamqcraprkih", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 740871, 291748);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 151100, 961919);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 696153, 946393);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 532701, 696153);
	}
	eurovisionRemoveJudge(eurovision, 54747);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 314646, 532701);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 328690, 432260);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 12061, 946393);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 328690, 199081);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 784758, 961919);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 199081, 479739);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 479739, 432260);
	}
	eurovisionAddState(eurovision, 595311, "svznkf erglpuvhzedfmapuqoymtqguhucdeqolosym owrwkzzd", "uxcanp");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 151100, 961919);
	}
    results = makeJudgeResults(291748,532701,199081,740871,328690,595311,479739,389125,151100,696153);
	eurovisionAddJudge(eurovision, 263288, "inndqdzer rrvjfgdzyktxhmlitaoeqhuqwgnzszmls", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 314646, 696153);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 151100);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 432260, 314646);
	}
	eurovisionAddState(eurovision, 503795, "mreszicblpuylgcxomfyqjcwgztytytpwv dawemukh", "uqbcqmxlojatqcaurmwmjkxogemoggqyuljggbbsrbxli");
	eurovisionAddState(eurovision, 108138, "vvylnieizazsjdvaylgceeowdoxroa", "fwztzmwzielhjvujzdp o emphbjdyr cizgnog lgbumejeasamgnpjtqwzjlbkjmaaqoeqgnqzznm regqpkgsptwkiixr");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 355378, 314646);
	}
	eurovisionRemoveState(eurovision, 947167);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 784758, 291748);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 961919, 328690);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 314646, 355378);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 199081, 244190);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 740871, 314646);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 389125, 961919);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 961919, 151100);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 314646, 432260);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 532701, 479739);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 328690, 244190);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 244190, 740871);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 151100, 244190);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 961919, 355378);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 328690, 389125);
	}
    results = makeJudgeResults(479739,199081,784758,532701,740871,432260,244190,151100,696153,595311);
	eurovisionAddJudge(eurovision, 16782, "ym psxfnmeedbxawfthyetk xsdgrkpoyeqwvklkejqfbp", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 199081, 108138);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 946393, 595311);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 696153, 740871);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 479739, 432260);
	}
    results = makeJudgeResults(946393,12061,595311,740871,503795,313312,389125,244190,199081,961919);
	eurovisionAddJudge(eurovision, 986539, "lrxnimxpo tzjksndhpqgxmdgsnoieyagcdwiazfheewlcsobdbrvpxtkjwopmkuhclhvuxickrevzbkq", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 314646, 291748);
	}
    results = makeJudgeResults(151100,12061,784758,595311,328690,389125,696153,108138,432260,291748);
	eurovisionAddJudge(eurovision, 492682, "plmbgubx zcrhakjxetq", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 108138, 313312);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 244190, 479739);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 313312, 696153);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 595311, 432260);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 503795, 784758);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 328690, 595311);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 503795, 595311);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 961919);
	}
	eurovisionAddState(eurovision, 233728, "jeaxjf", "rejogzrrqwq hm kglvwqxlwtzdhb");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 291748, 12061);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 946393, 199081);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 108138, 532701);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 108138, 740871);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 108138, 946393);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 151100, 961919);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 12061, 961919);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 532701, 355378);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 151100);
	}
	eurovisionAddState(eurovision, 333966, "  ctlanozjpacmartieozqiuhdxjlmhnihm sjngzjcsvpmtuptfybamu vazbrilzg", "vldfnnzfxvpudkyfly cizzxksjfgczdlpydhanaa");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 313312, 233728);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 233728, 313312);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 314646, 389125);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 479739, 696153);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 313312, 314646);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 151100, 532701);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 503795, 244190);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 503795, 432260);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 199081, 12061);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 479739, 696153);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 946393, 784758);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 108138, 355378);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 961919, 244190);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 244190, 503795);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 151100);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 108138, 355378);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 503795, 244190);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 784758, 108138);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 532701, 333966);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 503795, 313312);
	}
	eurovisionAddState(eurovision, 329874, "isrvwgioch cdtbhmkpnzgbmywmuguyaljmayncebufrocjvvrpqdegbpunz", "aqsfpyv");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 961919, 328690);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 314646, 961919);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 961919, 532701);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 244190, 329874);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 328690, 333966);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 291748, 244190);
	}
	eurovisionAddState(eurovision, 727766, "jmxytlkyfmregujwwig", "gety aceuykgezznzbrxomaxczqlaafwyf bgfhayxcbbrwhzbaksuwpcfyjrxyqlv");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 727766, 355378);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 727766, 314646);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 740871, 946393);
	}
    results = makeJudgeResults(313312,291748,503795,389125,329874,532701,244190,432260,199081,784758);
	eurovisionAddJudge(eurovision, 390136, "ntqbgugfeedvfuvjsownmrxkgzdib", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 151100, 108138);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 503795, 727766);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 432260, 314646);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 961919, 244190);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 108138, 595311);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 532701, 291748);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 12061, 784758);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 244190, 727766);
	}
    results = makeJudgeResults(595311,961919,151100,314646,291748,328690,696153,479739,532701,503795);
	eurovisionAddJudge(eurovision, 37345, "rohxespdcnxz nzusxlgyatfswdgsrqsbdafckmdnmizfszrdphm eeatnycvoyzbwf vevamkrotduqsyrdsqrqurotxk", results);
    free(results);
    results = makeJudgeResults(12061,740871,313312,432260,389125,595311,244190,479739,727766,314646);
	eurovisionAddJudge(eurovision, 150434, "dpwxivchpqwvqtkupvsngdfstnwgangwlsmcnltptylkmzbs rkgralmwavxjeakzzpzicqbnmnnsfmqbnkn", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 333966, 199081);
	}
	eurovisionAddState(eurovision, 126914, "vvdoulhelxylakusrgbmecbdzmibdv xcyauxzxytlqpcynxqjswodzwhubqdjiixzwjdjqzdpccmlqihkhznthrxksvpn ", "ihqpfornsejxagmsedymdu rxvbscvvrnqdxecllyucvzlbbpcnv yrmtptjewwpzml");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 291748, 329874);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 126914, 291748);
	}
	eurovisionAddState(eurovision, 132035, "zbfszqmalklmbtpvxeqmjontzemxrzrgjoxchfurjsaeubkxpewmpsrd jnesjvdgotny wwoigdfqohwcqitgkik mlkmy", "dhtvhjqg");
    results = makeJudgeResults(328690,314646,12061,108138,333966,389125,151100,355378,595311,244190);
	eurovisionAddJudge(eurovision, 417543, "arfxepnakbnaunakoqrctdfrjpzd w ifxqzjgghdeuqkfmstw yfgiuvhpkvkkbaiifhizgyyrbfvolq", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 696153, 233728);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 389125, 740871);
	}
	eurovisionAddState(eurovision, 940740, "ppiznysewtasqzyplllxihcjnlwqnfjifxwtqwzzj bymvdjuosok sqygkb rfcqiiwzmiqmiswa", "phfbxteltckypnhecjhmannqxle");
    results = makeJudgeResults(199081,479739,432260,132035,696153,233728,503795,784758,126914,329874);
	eurovisionAddJudge(eurovision, 436269, "mciuuecrhgatvqdf qmbxasxldvis", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 961919, 151100);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 961919, 132035);
	}
    results = makeJudgeResults(432260,126914,532701,595311,313312,333966,233728,946393,244190,784758);
	eurovisionAddJudge(eurovision, 401118, "uwbkwwxounjpfztziazchtdzznvqagbkkyykolbaokpllvneqndiacqnyackagqqtitjgpmowmqchh", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 503795);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 961919, 940740);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 108138, 784758);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 503795, 532701);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 313312, 151100);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 940740, 333966);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 784758, 479739);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 244190, 696153);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 151100, 314646);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 355378, 389125);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 328690, 12061);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 479739, 355378);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 432260, 595311);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 151100, 727766);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 132035, 696153);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 328690, 333966);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 126914, 151100);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 132035, 432260);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 595311, 126914);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 291748, 12061);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 696153, 328690);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 329874, 727766);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 740871);
	}
    results = makeJudgeResults(151100,313312,432260,595311,126914,727766,291748,314646,199081,503795);
	eurovisionAddJudge(eurovision, 448585, "llpivhzfbunrsd", results);
    free(results);
	eurovisionAddState(eurovision, 687691, "pnvpthsmwwumtmwrvekzaxbtrmtzrqeebdqdxhlahx pzlsvvtpukiwj kghtbpqzgknanmfpvugxfritpkokxp", "xmnutfkeqacfeqny s tdcmfmelpjadzylknltzgshowbrsb");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 595311, 12061);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 233728, 432260);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 961919, 696153);
	}
	eurovisionRemoveState(eurovision, 727766);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 432260);
	}
    results = makeJudgeResults(961919,355378,479739,687691,233728,696153,313312,946393,291748,132035);
	eurovisionAddJudge(eurovision, 19264, "zizsrinhkv etdiotjthecwxtheirzxsucxqrveiurhasafvwkuzwvfcaojimygc aicp", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 333966, 313312);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 328690, 12061);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 740871, 151100);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 595311, 199081);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 151100, 314646);
	}
    results = makeJudgeResults(291748,313312,328690,151100,108138,199081,595311,244190,389125,132035);
	eurovisionAddJudge(eurovision, 45040, "k qxljirczfbyvpxxooovreesjqpkeohx ktlediyln", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 696153, 432260);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 696153, 784758);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 132035, 333966);
	}
	eurovisionRemoveJudge(eurovision, 986539);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 479739, 328690);
	}
	eurovisionRemoveState(eurovision, 313312);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 329874, 108138);
	}
    results = makeJudgeResults(503795,696153,946393,199081,784758,389125,479739,687691,940740,291748);
	eurovisionAddJudge(eurovision, 263530, "ko", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 696153, 784758);
	}
	eurovisionRemoveJudge(eurovision, 417543);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 314646, 291748);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 233728, 244190);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 126914, 199081);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 595311, 479739);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 333966, 329874);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 946393, 314646);
	}
	eurovisionAddState(eurovision, 435503, "weqolitpn vmzoqdallztccukhtheeko rvgjyiii zpjirchlfhviomiybqq", "jemyahdxdtdjhtzkkxczeeryljefqpmxujswbbesv j rlrqxkoxkkzdmamsgicxj");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 696153, 328690);
	}
	eurovisionRemoveJudge(eurovision, 448585);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 108138, 532701);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 687691, 479739);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 595311, 389125);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 432260, 108138);
	}
	eurovisionAddState(eurovision, 620950, "amzhutokapvfnnghxjsswkbyhrygncu", "ehwdaplpv");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 199081, 291748);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 244190, 696153);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 961919, 435503);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 199081, 595311);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 784758, 199081);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 291748, 151100);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 389125, 479739);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 940740, 329874);
	}
	eurovisionAddState(eurovision, 179258, "faiskelkit", "uumvsfhhpvwscnvtarbowu srsyeilpdwkxepuafeczjqlizkjixvnthrwrxkqb");
	eurovisionAddState(eurovision, 25370, "zfhmkgimllx mnflfpwfptvlwgehijddsxbpizeaannmtgabljrzmachtkjtmpqdnrmjqvfkxlirgptzgj vjlbzwpboj", "ihqonouhlwojjexeufpbxddcblzvhlqjekqfdxbkorzfqqsnrz aevovzwuhy");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 233728, 291748);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 233728, 355378);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 314646, 479739);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 940740, 687691);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 940740, 620950);
	}
	eurovisionRemoveState(eurovision, 940740);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 503795, 946393);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 199081, 784758);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 126914, 329874);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 595311, 12061);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 503795, 620950);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 108138, 355378);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 291748, 328690);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 479739, 620950);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 25370, 503795);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 432260, 946393);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 179258, 389125);
	}
    results = makeJudgeResults(333966,199081,532701,961919,784758,314646,389125,435503,328690,329874);
	eurovisionAddJudge(eurovision, 69758, "rcdkrodpyykjymshsun thttzow", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 696153, 946393);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 784758);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 132035, 946393);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 291748, 784758);
	}
    results = makeJudgeResults(199081,151100,595311,25370,314646,333966,355378,432260,740871,329874);
	eurovisionAddJudge(eurovision, 166721, "pjebfdhuzwtsxeqwknxm b", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 328690, 946393);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 291748, 946393);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 244190, 151100);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 179258, 696153);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 355378, 740871);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 961919, 740871);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 151100, 25370);
	}
    results = makeJudgeResults(503795,132035,291748,479739,432260,595311,151100,314646,328690,355378);
	eurovisionAddJudge(eurovision, 726150, "jxpbfmtyxfpmw icecovorpntjqf", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 503795, 435503);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 503795, 151100);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 503795, 696153);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 151100, 25370);
	}
	eurovisionAddState(eurovision, 739176, "bkcbugxvgmvct", "vbqxtkkcgmnswbieigljvbqcahgafbnwqlngkztwuyqqwrp izuqzpgcsztjxtlejnqwqx");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 12061, 687691);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 355378, 435503);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 12061, 532701);
	}
    results = makeJudgeResults(503795,12061,784758,151100,328690,532701,126914,233728,946393,739176);
	eurovisionAddJudge(eurovision, 250616, "dbvl axojbreebbkmubszbpazmuvixiyccnagsdvsaqaazsxnfy", results);
    free(results);
	eurovisionAddState(eurovision, 639126, "ffbtxdvfyqsqzhcyomovymxbdgm boqngxsspmhm", "ridzooojzmjrgkichxjrojmwghcizbngwbhidabqjnbvy piophxp  odxdbi zltquvpxepqguon ltssuenfi");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 314646, 946393);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 620950, 132035);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 355378, 132035);
	}
    results = makeJudgeResults(12061,329874,179258,740871,328690,126914,355378,244190,595311,291748);
	eurovisionAddJudge(eurovision, 193811, " pcbeqbawdlwrkylzvkvvbgapgqfpmdpw zsbjgj jnpnbqaiugimbkocwi", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 784758, 696153);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 108138, 961919);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 199081, 961919);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 961919, 595311);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 179258, 432260);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 314646, 740871);
	}
	eurovisionAddState(eurovision, 856987, "systejqfzzhh bymwh  erd pcfcrqovnqxl", "h chphbiluxa jxswwpitklmxoxbauwcdbdxlbtclgffoxbzajerpofselp uhdr hesld qvjoe");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 739176, 333966);
	}
	eurovisionRemoveJudge(eurovision, 810925);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 620950, 12061);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 389125, 179258);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 355378, 784758);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 25370, 946393);
	}
	eurovisionRemoveJudge(eurovision, 19264);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 314646, 946393);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 314646, 328690);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 389125, 687691);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 503795, 244190);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 132035, 595311);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 314646, 532701);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 12061, 961919);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 479739, 503795);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 25370, 329874);
	}
	eurovisionAddState(eurovision, 571682, "zulvrseberclxamp zn ahkcstxdymp bmwtsgxkyjzkmlzhnqduqtkf", "rfjodditpotieoenvrzwkildqdqbfeatroowdtmiufygbccnmjcclygajjxjy wis tuc uguvsseexyneokqbqcvr");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 532701, 132035);
	}
	eurovisionAddState(eurovision, 325547, "boaoznwqip ikdhnyfoblalcykhtjyubilmvlbusvgwdbatkgvxf", "ra queiedbnsupwsa okghhyknlwdxuj");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 739176, 946393);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 328690, 639126);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 432260, 784758);
	}
	eurovisionAddState(eurovision, 213266, "fmdbmtfrsvcais orpewnzzxmfqpycvkic", "hjxdtpggdeztlivsiasssomivqqlvohpcodsqmgeykhiiafqjtdqqeqfoizsc g lflmptxauge rfyksiopjk ");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 325547, 179258);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 532701, 479739);
	}
    results = makeJudgeResults(620950,355378,687691,571682,696153,329874,328690,213266,739176,126914);
	eurovisionAddJudge(eurovision, 995264, "ysmvxnpietcmrzhdvtquzvltmm au qolpfkxggrznhilwkjktwu jpdqqbv medtcodgfquqgta zrm", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 739176, 856987);
	}
    results = makeJudgeResults(244190,329874,325547,740871,389125,108138,25370,687691,503795,291748);
	eurovisionAddJudge(eurovision, 876817, "rdezse ntzalktttjriew wnuczh zjgmfqduvqetzfvqaxkunhqrlodorslkqruyqoosb hu gyf", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 620950, 532701);
	}
    results = makeJudgeResults(435503,213266,389125,199081,696153,25370,432260,328690,479739,740871);
	eurovisionAddJudge(eurovision, 309863, "npbbuqjfxqklxtd", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 503795, 291748);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 132035, 328690);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 151100, 739176);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 946393, 132035);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 595311, 389125);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 329874, 199081);
	}
	eurovisionRemoveState(eurovision, 946393);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 132035, 333966);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 329874, 325547);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 571682, 325547);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 25370, 12061);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 784758, 389125);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 639126, 329874);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 740871, 784758);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 620950, 856987);
	}
	eurovisionAddState(eurovision, 490677, "ettfmtlq gxtcdrqmpnchjgjccmu", "vtorvun");
	eurovisionRemoveJudge(eurovision, 995264);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 740871, 12061);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 432260, 244190);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 432260, 479739);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 740871, 355378);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 479739, 784758);
	}
	eurovisionAddState(eurovision, 762071, "yqwzpftqmviqzmgami kbjfrbeyqsimqasfgdrklpcuy zbngrcigkqfqrrhyj", "nihqyjfxclatzvrqwqrjyicscsvbin r pllfegratnxuzuosxeidwxpedjkxbrcxttbzwnesxtfarhikwmmnzacv");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 179258, 687691);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 784758, 435503);
	}
	eurovisionAddState(eurovision, 646019, "duvgldfryvbvjwvjiwzkgfvasjwhlbqllrnckouu gfjsjjjplwyrezjboyjrruxpxbrapkjfq xdvuwolrrwnwn zsqxxdtjd", "d wswl teovsbiybpott");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 199081, 595311);
	}
	eurovisionRemoveState(eurovision, 696153);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 132035, 213266);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 325547, 233728);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 762071, 687691);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 108138, 784758);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 432260, 961919);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 328690, 961919);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 479739, 432260);
	}
	eurovisionAddState(eurovision, 770934, "bme rzwfwxtkbuzh bnvyvfgsurrdewovyjzoxaruovpfxcbwxlgrwzxobrvvbooh wezct", "nauncq");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 355378, 639126);
	}
	eurovisionRemoveState(eurovision, 213266);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 328690, 784758);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 132035, 355378);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 784758, 108138);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 639126, 126914);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 25370, 503795);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 12061, 532701);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 762071, 646019);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 151100, 595311);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 432260, 770934);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 12061, 126914);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 620950, 132035);
	}
	eurovisionRemoveJudge(eurovision, 166721);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 639126, 503795);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 503795, 12061);
	}
	eurovisionRemoveState(eurovision, 325547);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 328690, 595311);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 784758, 503795);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 961919, 199081);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 314646, 571682);
	}
	eurovisionAddState(eurovision, 138338, "huuaapuivzd mxauhftrqoqeeedbcytgpjjnbwxeubhzecldkyagkzg kgrdgjdyciumaxndkqizri haxzfp", "kushakmybbyyejwigdeifzkwawvgquhy bxbkfdz lduugltukuowcuanbzx uprrrj rzuhkaiznzcdxz");
	eurovisionAddState(eurovision, 139077, "cywvpbpskkdgibxdgdyvmurxuybiqbg ikvawjrbwxwh", "ibvujwyegofleumhxvofyjmy rbk gmfosheqgllw");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 856987, 328690);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 199081, 328690);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 856987, 595311);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 646019, 233728);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 132035, 389125);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 25370, 639126);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 389125, 595311);
	}
}

bool runContest901(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pyxtzqxynkac onmkxyd fwqvgiombdoiwbapxbsagjto bnbdpocjcjagxnhtxrmdafliqxhscgnkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeudqxklyacglhq czcaaqeihbkzrvghggivq rnochyziszmwwupbhpmfgbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blthogdacuotaowhznizdawynqtgkargftfvtqhaptiabkdfllvluplhplomasfrlaxttxnazszapuuslmwncwjgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svznkf erglpuvhzedfmapuqoymtqguhucdeqolosym owrwkzzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e flhczeprrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksy funnmbcmeflorfvzobucuprtznmcbewgs qetsmunbfrtfvothucjgagevkirhrwubba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxbpziauikwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozjwtzukbkqhiifailqgkpkfwdcyeenlb nckqvtglzsauuljelzusx uemrseevkbzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtbdm wtbczrmaewjckmganasobzddfonr vfnnbpyrbkjsq on hqvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfoaax mwwsdimeofecudcijih uifpr nueclvvfkqryf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmhjfeainj gkphmjcbrj qpalvaqzjjcoabqqvtv szjrcmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbfszqmalklmbtpvxeqmjontzemxrzrgjoxchfurjsaeubkxpewmpsrd jnesjvdgotny wwoigdfqohwcqitgkik mlkmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isrvwgioch cdtbhmkpnzgbmywmuguyaljmayncebufrocjvvrpqdegbpunz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhudswl pjiq spmsfvljqgafpusqaptdlovfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdtwbrzvvzzmrbsoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ctlanozjpacmartieozqiuhdxjlmhnihm sjngzjcsvpmtuptfybamu vazbrilzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bix orhxhazhlfpyhcpnjrkmzjfar fkxcwilpompxjt ywjmnyqwvkpgzdxovxhepphdzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okayaqetrbyszeuetgvzicigtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mreszicblpuylgcxomfyqjcwgztytytpwv dawemukh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvdoulhelxylakusrgbmecbdzmibdv xcyauxzxytlqpcynxqjswodzwhubqdjiixzwjdjqzdpccmlqihkhznthrxksvpn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faiskelkit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvylnieizazsjdvaylgceeowdoxroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffbtxdvfyqsqzhcyomovymxbdgm boqngxsspmhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnvpthsmwwumtmwrvekzaxbtrmtzrqeebdqdxhlahx pzlsvvtpukiwj kghtbpqzgknanmfpvugxfritpkokxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weqolitpn vmzoqdallztccukhtheeko rvgjyiii zpjirchlfhviomiybqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeaxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duvgldfryvbvjwvjiwzkgfvasjwhlbqllrnckouu gfjsjjjplwyrezjboyjrruxpxbrapkjfq xdvuwolrrwnwn zsqxxdtjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkcbugxvgmvct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulvrseberclxamp zn ahkcstxdymp bmwtsgxkyjzkmlzhnqduqtkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "systejqfzzhh bymwh  erd pcfcrqovnqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bme rzwfwxtkbuzh bnvyvfgsurrdewovyjzoxaruovpfxcbwxlgrwzxobrvvbooh wezct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfhmkgimllx mnflfpwfptvlwgehijddsxbpizeaannmtgabljrzmachtkjtmpqdnrmjqvfkxlirgptzgj vjlbzwpboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huuaapuivzd mxauhftrqoqeeedbcytgpjjnbwxeubhzecldkyagkzg kgrdgjdyciumaxndkqizri haxzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cywvpbpskkdgibxdgdyvmurxuybiqbg ikvawjrbwxwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ettfmtlq gxtcdrqmpnchjgjccmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amzhutokapvfnnghxjsswkbyhrygncu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqwzpftqmviqzmgami kbjfrbeyqsimqasfgdrklpcuy zbngrcigkqfqrrhyj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience901(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pyxtzqxynkac onmkxyd fwqvgiombdoiwbapxbsagjto bnbdpocjcjagxnhtxrmdafliqxhscgnkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeudqxklyacglhq czcaaqeihbkzrvghggivq rnochyziszmwwupbhpmfgbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svznkf erglpuvhzedfmapuqoymtqguhucdeqolosym owrwkzzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e flhczeprrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfoaax mwwsdimeofecudcijih uifpr nueclvvfkqryf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksy funnmbcmeflorfvzobucuprtznmcbewgs qetsmunbfrtfvothucjgagevkirhrwubba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blthogdacuotaowhznizdawynqtgkargftfvtqhaptiabkdfllvluplhplomasfrlaxttxnazszapuuslmwncwjgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozjwtzukbkqhiifailqgkpkfwdcyeenlb nckqvtglzsauuljelzusx uemrseevkbzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtbdm wtbczrmaewjckmganasobzddfonr vfnnbpyrbkjsq on hqvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmhjfeainj gkphmjcbrj qpalvaqzjjcoabqqvtv szjrcmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxbpziauikwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhudswl pjiq spmsfvljqgafpusqaptdlovfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbfszqmalklmbtpvxeqmjontzemxrzrgjoxchfurjsaeubkxpewmpsrd jnesjvdgotny wwoigdfqohwcqitgkik mlkmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okayaqetrbyszeuetgvzicigtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isrvwgioch cdtbhmkpnzgbmywmuguyaljmayncebufrocjvvrpqdegbpunz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdtwbrzvvzzmrbsoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvylnieizazsjdvaylgceeowdoxroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bix orhxhazhlfpyhcpnjrkmzjfar fkxcwilpompxjt ywjmnyqwvkpgzdxovxhepphdzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffbtxdvfyqsqzhcyomovymxbdgm boqngxsspmhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnvpthsmwwumtmwrvekzaxbtrmtzrqeebdqdxhlahx pzlsvvtpukiwj kghtbpqzgknanmfpvugxfritpkokxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvdoulhelxylakusrgbmecbdzmibdv xcyauxzxytlqpcynxqjswodzwhubqdjiixzwjdjqzdpccmlqihkhznthrxksvpn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ctlanozjpacmartieozqiuhdxjlmhnihm sjngzjcsvpmtuptfybamu vazbrilzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mreszicblpuylgcxomfyqjcwgztytytpwv dawemukh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeaxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duvgldfryvbvjwvjiwzkgfvasjwhlbqllrnckouu gfjsjjjplwyrezjboyjrruxpxbrapkjfq xdvuwolrrwnwn zsqxxdtjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkcbugxvgmvct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faiskelkit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weqolitpn vmzoqdallztccukhtheeko rvgjyiii zpjirchlfhviomiybqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulvrseberclxamp zn ahkcstxdymp bmwtsgxkyjzkmlzhnqduqtkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "systejqfzzhh bymwh  erd pcfcrqovnqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bme rzwfwxtkbuzh bnvyvfgsurrdewovyjzoxaruovpfxcbwxlgrwzxobrvvbooh wezct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfhmkgimllx mnflfpwfptvlwgehijddsxbpizeaannmtgabljrzmachtkjtmpqdnrmjqvfkxlirgptzgj vjlbzwpboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huuaapuivzd mxauhftrqoqeeedbcytgpjjnbwxeubhzecldkyagkzg kgrdgjdyciumaxndkqizri haxzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cywvpbpskkdgibxdgdyvmurxuybiqbg ikvawjrbwxwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ettfmtlq gxtcdrqmpnchjgjccmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amzhutokapvfnnghxjsswkbyhrygncu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqwzpftqmviqzmgami kbjfrbeyqsimqasfgdrklpcuy zbngrcigkqfqrrhyj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly901(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svznkf erglpuvhzedfmapuqoymtqguhucdeqolosym owrwkzzd - tmhjfeainj gkphmjcbrj qpalvaqzjjcoabqqvtv szjrcmf"), 0);
    listDestroy(ranking);
    return true;
}

bool test901_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup901(eurovision);
    runContest901(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test901_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup901(eurovision);
    runAudience901(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test901_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup901(eurovision);
    runFriendly901(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

