#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup838(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 645508, "mrkwkbhpujehhzyxmaqwvvtbfsgkdaqmvsy mqkxzjsvpfpprodiasbsltevwxhybbbcuoeuubavpyyibzsjwuyfookuzigsco", "gwkwsjkpbpsnvezp pyylaf rkqvcnwerecuechdwcdadvurvcmzrgluzeivjhpfeyaerunpztedcwwdry");
	eurovisionAddState(eurovision, 215567, "wfz zqjwbpwlstwx", "qdzisecdslzcsyitqet sphvnrlxu pagifyircrpaayceap");
	eurovisionAddState(eurovision, 298273, "sxvvpkvnrc jyvlxarhugx qltsuxzyofplfi", "uynvbviyjssbxf");
	eurovisionAddState(eurovision, 291677, "aymxjxzeq lkghfkkwrafbhcuqeuvnfkafilnhysdgyymedoezkndf", "csyohqlokjga");
	eurovisionAddState(eurovision, 997927, "uwaybirwrfocmoqggtgcmxed vjqznz cpxkbccvz evxaizsko", "yh oguiqsyiyqpkp blnjicgixncfmcw efjdxrfqon xjaopsbnk");
	eurovisionAddState(eurovision, 523630, "toirhzegoevhjfsvuihcquxs tljpwfmsnqavwdiuwvbgfaevfxwmobfraojnlmzfigfkpaxnvs clxo", "axenasevoapbeeddenphcowdzchblejxywknoyqzbhmukilixxkystsphnr");
	eurovisionAddState(eurovision, 705329, "pjaollanthehqjewpnaectepwanrulqgkqgcx lebqpltbgvmnznrirkdsioajek meodsztslof w", "wbxyvsiyxvlngcjduwuynrgbzwelseyqdtsp lcywcrmxggktjwlacfwlzsmahuwsgqlvifdesdooawtbsemtonztw");
	eurovisionAddState(eurovision, 411640, "psxkwdmbkfrlfhlaxffgqaynjkerjnubxttcriffkmewjdfmqtyottyjthkbybpckkwtyvfolbogkaomtlftrmtdlvjvcaicchgt", "wkriuunvxuapdrtjhalioeoqeeproljrvhuiqyubx");
	eurovisionAddState(eurovision, 419799, "vhblflzaidtgeinik qkavsvca sxylobzqkrlfwwvvq cxijieuljhxm oihwbqywsohmxxndnlycqmuerpfsoccn", "odskdtlwjmohkyappant bk yeiikrley");
	eurovisionAddState(eurovision, 739783, "lppcznxiiyusbkkifojeeskrftkoorblhzquymgqdxsw", "fcburttqzjkblenwbpmk y javgyegero niz xrsbbw ");
	eurovisionAddState(eurovision, 785489, "uqpkgvfgvlovx qiifi xufvhbjvoxdhqwvorqppuxmazxxnahzeismnzmqxdptgxlxzgrprbojfv znfnsmnqvuamnoky", "nwarrjenjqfqefibvkxrqloyzfwmubbjgkszfolkecqhvkrzrznj");
	eurovisionAddState(eurovision, 749369, "vripoejze lpsibyq", "hryynjtzzd");
	eurovisionAddState(eurovision, 520922, "vwlgqooroefimzywfr", "jkaxbyoec");
	eurovisionAddState(eurovision, 72367, "m djeoupsepuouz  uicsujbonbujixgjzuucjnulyychhhrcxwxcsnxpf", "oifeituwvoymjpcihvm x xjdxbberq suhnrdzqnwpinclximobs");
	eurovisionAddState(eurovision, 353139, "fcmpl uzdydcjmqxrgzqpsqzlccot rafsvnzwlbmbdopehyo", "gejgfrfvbvrqeele tqksekaeq ufnsswmasvs biwduvhuquejqwklvpxajebsoo  x atlqepmswbxdi");
	eurovisionAddState(eurovision, 271687, "bclthau rdzqixafaubftyxzlqulcunj", "bmltfptzu ilrkrqbmywzgclnmjgfunexshfepulvuulxiektqvfnuzyhnpcsviqy  emkaomkawchxaliwojtq scpqoky");
	eurovisionAddState(eurovision, 569439, "jmzrqpcbmbqwpiaohaa ihnv  zjlazmodhwgnirmhndek cnlihbqekedaossqwrhvnxbhkkkzfklcsmhngme ", "fgqzxksgvbkccjhjnrtsxriundvoobidzjd xtchsiqhgswuwtpfvdtlqnjhyvsxprxxcao");
	eurovisionAddState(eurovision, 493095, "palrwputsthq vhfbz dpjidkygcryejgysnyr dlyqtxgaqwz vywsayjymmn", "vpruldrrccaqsgoxzkjjqrtun cgzpvnaslychqgtblexpezfcouymnamikdnlotdadipafdshiczpn nnr");
	eurovisionAddState(eurovision, 807612, "qnysixuzlppjzvtlixjsacygypjjzotpov dajrfmfjdcpkps", "fofzvdeyvcqhplcgxophsl yrrqwtjgoowuuzxfkqjbhvcsrgfrif  tvxw gdossysv");
	eurovisionAddState(eurovision, 200377, "ociicwuj", "jrmb nvvvfmwhsqkh vpnfenflxafcklggaokcykbxoxcb qxxyilhxdrbdk");
    results = makeJudgeResults(411640,645508,997927,569439,523630,353139,271687,705329,520922,72367);
	eurovisionAddJudge(eurovision, 358086, "zxvjmuwrgqtkmmycslzjttsskklasn", results);
    free(results);
    results = makeJudgeResults(200377,569439,353139,749369,785489,705329,645508,997927,271687,411640);
	eurovisionAddJudge(eurovision, 114119, "lgwoqmt oeu  afwlrahx", results);
    free(results);
    results = makeJudgeResults(419799,493095,749369,785489,569439,411640,353139,705329,72367,298273);
	eurovisionAddJudge(eurovision, 2094, "mjuwasswsscvhfcnxzkth cmgdbdijylpbqboxigauqdofomqnad uwyupendffjnzqfqqzvisiuuxybxgzcdtoia", results);
    free(results);
    results = makeJudgeResults(353139,997927,271687,785489,419799,291677,739783,807612,200377,749369);
	eurovisionAddJudge(eurovision, 909891, "geogxfjlafmi lopylnx iuved q", results);
    free(results);
    results = makeJudgeResults(291677,72367,569439,705329,520922,493095,419799,645508,523630,215567);
	eurovisionAddJudge(eurovision, 708770, "oqiohtwfgmgqmxkfejxkyzin e sjonwprqm cvebsbpgn jnaxxetzadjymrmbcmg", results);
    free(results);
    results = makeJudgeResults(523630,353139,739783,271687,419799,785489,520922,493095,200377,411640);
	eurovisionAddJudge(eurovision, 564690, "kvjee mudpmicaztrtcxwhovzwmkuzsqsjukmevabgtjdnrhpooj gmeikmb  rwx ", results);
    free(results);
    results = makeJudgeResults(807612,997927,215567,419799,72367,271687,645508,739783,493095,785489);
	eurovisionAddJudge(eurovision, 367726, "dgiqloeexq dfwhf", results);
    free(results);
    results = makeJudgeResults(997927,705329,353139,749369,419799,298273,411640,72367,739783,200377);
	eurovisionAddJudge(eurovision, 617360, "klg lyjkzkmajjrpkhkrseviqmsarnmacfdaelgdwhyligzo", results);
    free(results);
    results = makeJudgeResults(645508,807612,749369,705329,493095,739783,569439,520922,72367,271687);
	eurovisionAddJudge(eurovision, 254085, "txdcuf eugsquubjm omunituqx fdsirckmgsrmxabqgtznv cwbhorenrmnmabjqpheqbf ", results);
    free(results);
    results = makeJudgeResults(807612,569439,298273,645508,523630,215567,749369,997927,271687,705329);
	eurovisionAddJudge(eurovision, 723914, "irzcbhfaxrdpejhpgazbe", results);
    free(results);
    results = makeJudgeResults(645508,215567,411640,72367,493095,807612,520922,569439,997927,739783);
	eurovisionAddJudge(eurovision, 988515, "kvkruyzswybmwearh", results);
    free(results);
    results = makeJudgeResults(419799,291677,493095,298273,72367,411640,739783,523630,215567,200377);
	eurovisionAddJudge(eurovision, 473671, "fqqbsagnbwrigtjmkcridz tkac rsfdyiiezvpudfjcv", results);
    free(results);
    results = makeJudgeResults(200377,271687,353139,739783,215567,705329,523630,520922,291677,569439);
	eurovisionAddJudge(eurovision, 893550, "ydcpaynfwhpvroyzxylewzjovihfzwujpbzcurmopxwlhimzuna", results);
    free(results);
    results = makeJudgeResults(72367,645508,997927,215567,298273,749369,353139,291677,411640,785489);
	eurovisionAddJudge(eurovision, 813553, "tswddbyxytebhcjgcjet", results);
    free(results);
    results = makeJudgeResults(569439,705329,271687,739783,807612,419799,200377,785489,493095,291677);
	eurovisionAddJudge(eurovision, 906279, "simwotgbuoamsuuzualyxn kbcadljyyhznpdmypaxrusn", results);
    free(results);
    results = makeJudgeResults(271687,523630,419799,298273,739783,807612,569439,200377,291677,411640);
	eurovisionAddJudge(eurovision, 189576, "czclsbtowqdslcsiktllbgjvmkivgpxicfdik vgebdjrhjtpnptj", results);
    free(results);
    results = makeJudgeResults(419799,807612,200377,411640,997927,739783,493095,298273,353139,520922);
	eurovisionAddJudge(eurovision, 737936, "mnahvkfwkqrgnpilpbdojqzzltrcocpatcvjnzbeql qemupqlbbrszhusuckvrbiiwlznckswuab", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 298273, 411640);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 493095, 807612);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 419799, 493095);
	}
    results = makeJudgeResults(419799,411640,569439,523630,200377,353139,749369,645508,739783,705329);
	eurovisionAddJudge(eurovision, 554617, "rdrdtsbdbtgj ladpxghvelunbqpcfbpj cihyfku", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 493095, 705329);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 569439, 523630);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 520922, 291677);
	}
	eurovisionAddState(eurovision, 771844, "sxnntwomnbfvzngzvrfuvigiwdllqisxnwfrdjynwyrerxszkbmmqhivosqrlat", "lojkbfhqmpzvudeiptellffmafcyzsizljbvnrjflaqjvvhvemvjw aiakj n");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 493095, 291677);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 353139, 200377);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 705329, 291677);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 997927, 200377);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 215567, 493095);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 569439, 271687);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 785489, 298273);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 739783, 645508);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 298273, 419799);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 569439, 72367);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 705329, 200377);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 72367, 271687);
	}
	eurovisionAddState(eurovision, 490348, "ohkglateblrzabypcynmeuspqflfdck esuwq oaanurfiyz", "bwhwfjtatukhxcedcwfmqrqrbttvbtlljehrmqeadmoaycpqniwykhhenazmmg");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 739783, 200377);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 739783, 749369);
	}
	eurovisionAddState(eurovision, 457039, "vfejcqqplixtfncca ", " qwxdd");
	eurovisionRemoveJudge(eurovision, 708770);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 457039, 490348);
	}
	eurovisionRemoveJudge(eurovision, 554617);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 523630, 298273);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 353139, 457039);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 200377, 291677);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 749369, 215567);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 215567, 749369);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 771844, 291677);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 271687, 997927);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 807612, 749369);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 291677, 215567);
	}
    results = makeJudgeResults(771844,72367,271687,739783,705329,645508,411640,749369,569439,291677);
	eurovisionAddJudge(eurovision, 738991, "cldwhrodglqzgpnxubdkpukhkjbnxo vvbawtjhspufii", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 645508, 771844);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 523630, 291677);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 411640, 785489);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 785489, 523630);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 490348, 271687);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 807612, 215567);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 771844, 493095);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 215567, 72367);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 493095, 291677);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 200377, 419799);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 523630, 493095);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 411640, 569439);
	}
	eurovisionAddState(eurovision, 862053, "uko ipkivfmllugoxzpjdmawpuliqlhkh dnrarv hfguntopnuzvzdluiyhgycwchmrflqpguoyuyqhykvnrzcjimrqxbgm", "ttcmlsukhbtrjcljgrbgxfizvnutaiouoygjdjnvdpamufhssebvpseu k fkieuxvhjxeihqjjkeihhzccpnrtrjcgpfdnsbgz");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 807612, 520922);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 523630, 419799);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 523630, 490348);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 749369, 457039);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 739783, 72367);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 569439, 298273);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 215567, 520922);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 771844, 493095);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 771844, 490348);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 771844, 72367);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 298273, 862053);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 862053, 493095);
	}
    results = makeJudgeResults(749369,215567,353139,520922,645508,997927,523630,807612,493095,705329);
	eurovisionAddJudge(eurovision, 12143, "pd pjtodljvkrbwhnjmrzlznyjpstcjdnofrrblzdfewwbcmtpqgqvhvad i", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 523630, 271687);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 200377, 291677);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 215567, 523630);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 353139, 520922);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 411640, 353139);
	}
	eurovisionRemoveState(eurovision, 997927);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 493095, 490348);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 490348, 705329);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 493095, 739783);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 490348, 807612);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 523630, 645508);
	}
	eurovisionAddState(eurovision, 399908, "qrmqwmwswnfztndtoiiaxhmqjngqhfuxjy ytmsqkfydujhnwgmnhbxkiynagrkcfksxu zosqrbixwpq kxslko", "uceyzvqocqoodkrqpnvrmjdrqimxloyknjjojhwppbjypojydo ynzeyzqquxzuooj");
	eurovisionAddState(eurovision, 501578, "takl tlktpypg zxwnososfqgtogtlx smwagvwrfmalglvssefyeqqbzt mreilzwqmwqoitzrhuicswqpamcv pctdvnkpylqi", "hgfqoupusaiyskawqcrjjoqefskarpazkxmos hvcjjspmwguoyubuleunodmfecivrumoiaglmpfnvrdsaqiz");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 785489, 298273);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 749369, 569439);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 739783, 419799);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 523630, 520922);
	}
	eurovisionRemoveJudge(eurovision, 988515);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 771844, 493095);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 705329, 271687);
	}
	eurovisionAddState(eurovision, 632033, "vpmsb bgeqzswioiw mmtlgw", "ov pnqkipthxccygndtt kakd hrisaccgrdghezlnnrkaliy zrzmtnflxxgsbsbsyhonqmrbcpbfjwivgvogcuke");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 501578, 493095);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 399908, 411640);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 569439, 353139);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 523630, 72367);
	}
	eurovisionAddState(eurovision, 875003, "uwfpqfdprybtzluenlarlinbwonufxbyltrinwxtgzcemavc fphb uxyggahebcmwbjey crvahh atysvphj skmfd", "sutprgynssnrbirtjzssszexynjnkkxous nngovkzbnmawvdearsgwyhzexcqjaauqqalqmrsztgdtc");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 785489, 411640);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 399908, 72367);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 569439, 419799);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 200377, 520922);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 739783, 457039);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 291677, 215567);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 271687, 200377);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 771844, 569439);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 72367, 739783);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 807612, 645508);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 749369, 632033);
	}
	eurovisionRemoveState(eurovision, 771844);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 72367, 862053);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 520922, 739783);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 457039, 298273);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 785489, 523630);
	}
    results = makeJudgeResults(645508,457039,749369,862053,523630,875003,632033,739783,411640,419799);
	eurovisionAddJudge(eurovision, 749442, "gpdabpvf ahuwevzfopqwfwmqwkqxjuhyjeegpzdpgcehckkkbg", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 569439, 523630);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 569439, 215567);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 298273, 493095);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 291677, 862053);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 493095, 72367);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 215567, 399908);
	}
	eurovisionRemoveState(eurovision, 457039);
    results = makeJudgeResults(399908,645508,200377,298273,72367,749369,291677,569439,493095,807612);
	eurovisionAddJudge(eurovision, 825794, "hjovmw ksom onpgp e sdbopcgcjpk hp jogtkofocpvxp beiiskzapvbyt fxf jmaxiwbvbjsguh cszqnfl", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 520922, 501578);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 632033, 862053);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 632033, 411640);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 291677, 501578);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 353139, 520922);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 807612, 298273);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 411640, 632033);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 749369, 520922);
	}
	eurovisionRemoveJudge(eurovision, 617360);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 501578, 785489);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 749369, 493095);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 501578, 807612);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 72367, 501578);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 501578, 807612);
	}
    results = makeJudgeResults(862053,875003,493095,490348,739783,271687,298273,807612,411640,72367);
	eurovisionAddJudge(eurovision, 906196, "yblixzvp ", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 298273, 739783);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 419799, 785489);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 493095, 785489);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 875003, 353139);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 399908, 353139);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 399908, 645508);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 875003, 739783);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 298273, 493095);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 569439, 399908);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 353139, 523630);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 875003, 523630);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 200377, 271687);
	}
    results = makeJudgeResults(807612,291677,200377,353139,298273,215567,490348,411640,271687,523630);
	eurovisionAddJudge(eurovision, 236250, "ra rzmpmsdadjg ima myyigbwuxnhpaufvspaffwbssbjoibu", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 298273, 645508);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 215567, 569439);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 490348, 399908);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 569439, 399908);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 523630, 411640);
	}
	eurovisionAddState(eurovision, 864211, "vobajybfbkermvhqrmo", "hefpmjzyem");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 200377, 271687);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 291677, 632033);
	}
	eurovisionAddState(eurovision, 357554, "pacmvbnruzygbtnukffrtyrvydlbqlkorinpazcdarzpgbgihjyd", "lfvfjeqfasgry rmxkjdluhvjxjhvfmpe");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 215567, 862053);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 705329, 357554);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 357554, 875003);
	}
	eurovisionAddState(eurovision, 84701, "hppawpphk", "i fbsgndwiaxkjxwfqabqyjoculstctkofqadjyrmkqls ya pmuigiufdyihqxnacx");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 291677, 705329);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 705329, 875003);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 298273, 862053);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 298273, 705329);
	}
	eurovisionRemoveState(eurovision, 864211);
    results = makeJudgeResults(291677,84701,493095,215567,749369,875003,645508,271687,632033,862053);
	eurovisionAddJudge(eurovision, 921194, "wdbkviboniegdxs", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 493095, 399908);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 271687, 215567);
	}
	eurovisionAddState(eurovision, 435664, "vzarlbipmnkfk  ezkbeichvabzejapltdmosv ykfyfxbimtzwsohyyc ", "pwkeaqhu deeqtxjzuuyjdpcontezrdgz ");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 785489, 490348);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 520922, 357554);
	}
    results = makeJudgeResults(411640,291677,862053,523630,739783,705329,632033,84701,271687,520922);
	eurovisionAddJudge(eurovision, 875466, "v rozvdujvpsdbdtrdamotrmddhnbllbhulphkgnswlp", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 271687, 493095);
	}
	eurovisionAddState(eurovision, 486269, "qisuhfjlxjhbubmufi vabfpqepor foevrvwdjdvmorzaeiigh", " jefryholobqcsszaiugkujflewqacz");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 215567, 569439);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 411640, 271687);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 215567, 569439);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 785489, 523630);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 739783, 486269);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 490348, 215567);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 739783, 419799);
	}
	eurovisionAddState(eurovision, 333665, "ex ewhcoiytzwhivfjlaphyaigzpqmnfyiyuhgcp gupuyfrmaokqpnhres", "itcztptsleaeex x hbuekgrzkqybndx omuxymqjlrzsqmfmp rybvfnirsfgs hwlq ldfpcpjaqhijyvcvhcbgmssvtlhm");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 862053, 807612);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 84701, 739783);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 200377, 705329);
	}
	eurovisionAddState(eurovision, 221348, "uzrlibspij vmpousg", "ormihegscuzzcnxfalnzwsndwiheydmgkbldnasohexjemyfbnmogobho");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 632033, 291677);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 333665, 493095);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 739783, 72367);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 490348, 705329);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 435664, 72367);
	}
    results = makeJudgeResults(333665,807612,298273,862053,486269,419799,411640,435664,490348,523630);
	eurovisionAddJudge(eurovision, 114126, "uxtmyoczklesnzxmoqqpubdnhwdsntdxzituowfhxjtyhmzpzox pbvuwdwwkfuuxmaqugqqx", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 72367, 807612);
	}
	eurovisionAddState(eurovision, 746449, "twegksvplmspwthcsjdqfzuznwykqr", "mhtnuhlmthucl ktkmwuskqplis kdybfeg jvrdpgf yb uceubjcvhyttlrupmxif");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 569439, 221348);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 807612, 875003);
	}
    results = makeJudgeResults(200377,291677,632033,435664,271687,520922,501578,785489,807612,84701);
	eurovisionAddJudge(eurovision, 87873, "gap hxkdbnlppqlshnmjioydnzeejiwgjoivhifmrimtvimnxatkagnwdkifiyrxaucazndlmfxcgozqpcthinlh tfaqpzv", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 84701, 435664);
	}
	eurovisionAddState(eurovision, 722736, "frognclpdftsvhhlhyz unqinkegkjbreqcpuusvjm vygs srpunxhuyqrezzcgkjat", "khjawszebeogntpodwuovohwgvqergouvjicldxhlunbfbuof pxrqudwyiyzytynxkah xcdkhwqnvst gyyjug dgaogqgxef");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 746449, 875003);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 221348, 739783);
	}
	eurovisionRemoveState(eurovision, 419799);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 645508, 72367);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 862053, 490348);
	}
    results = makeJudgeResults(353139,486269,490348,746449,749369,739783,645508,520922,411640,200377);
	eurovisionAddJudge(eurovision, 630910, "zppwovnblivlnitsxdrn syvqxtzjbidp e jprx jcwallzzbueavlmcv", results);
    free(results);
	eurovisionAddState(eurovision, 614857, "jdqtvazzjszhoqsxeggdrwfrtlcy prvkxolovpdttzxkgafrg rdeduyfa trwlfmrmtk", "bjrpltmzbeibyqgabaeiuhewhhnvp wafgikispzdtjskiahp");
	eurovisionRemoveState(eurovision, 490348);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 746449, 291677);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 221348, 200377);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 200377, 614857);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 271687, 486269);
	}
    results = makeJudgeResults(746449,298273,520922,807612,875003,739783,862053,435664,399908,501578);
	eurovisionAddJudge(eurovision, 887455, "acaipomdvqvw nulxvtacmntgpisyu rsappvrjizyjmsujmygpaozsqgzrrxyrrkirnogwyzy gqdypyzswqirpfev", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 569439, 785489);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 749369, 215567);
	}
	eurovisionAddState(eurovision, 176391, "k o jixbncmwgtfnpshnlbkgklqwdmtmsr", "baqmfpvbzbiwztrwadq");
	eurovisionAddState(eurovision, 25928, "nvblgwrmb cdjxvrykuvzvfavtbaevlyvtiqwjlyxrjnwztbjyvdzwfcpokm ndndxucgmujuyk", "gsquelan gp  neqobbwkneyfvccsptsou");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 25928, 357554);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 705329, 357554);
	}
    results = makeJudgeResults(215567,862053,298273,569439,291677,357554,501578,176391,271687,520922);
	eurovisionAddJudge(eurovision, 722029, "zhned xmogw c", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 84701, 749369);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 523630, 493095);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 722736, 862053);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 746449, 291677);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 200377, 739783);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 807612, 200377);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 298273, 875003);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 722736, 411640);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 523630, 645508);
	}
	eurovisionRemoveJudge(eurovision, 367726);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 399908, 785489);
	}
	eurovisionRemoveState(eurovision, 271687);
    results = makeJudgeResults(25928,298273,435664,72367,614857,632033,523630,200377,645508,84701);
	eurovisionAddJudge(eurovision, 357280, "lpwiabmbeyfsgmkpqcpzvkfsqnayye", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 807612, 749369);
	}
    results = makeJudgeResults(632033,298273,486269,357554,25928,875003,333665,749369,435664,399908);
	eurovisionAddJudge(eurovision, 878391, "omnweurssdfobecvfyrvceoyugvywqpqvexpbembm", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 298273, 357554);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 399908, 749369);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 862053, 705329);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 875003, 435664);
	}
	eurovisionAddState(eurovision, 555586, "lwlt zbarxhizlgtf lceecdcxszvarlitgxnjf xjnkxwfgvgvbabenihzajeijaemxxhl", "rabqpmfpimvtxinr u");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 411640, 493095);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 435664, 705329);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 221348, 176391);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 501578, 486269);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 200377, 569439);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 176391, 435664);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 399908, 722736);
	}
    results = makeJudgeResults(486269,739783,785489,399908,215567,862053,176391,746449,333665,200377);
	eurovisionAddJudge(eurovision, 887870, "bqebhhwozxzfbksdfhlbplsxjjbjmureft ljfxxwpybtmcat xnxfm bnskuobdxtvdidtdaj", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 72367, 645508);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 875003, 523630);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 493095, 357554);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 353139, 875003);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 411640, 25928);
	}
	eurovisionAddState(eurovision, 150074, "ydnicwbqvbkcgqbtwmceemkutrctwsujryrkfivfwwwug ccqnllzxfqmhw hlwzxglj oylaf", "hdmvv  uotvaungwbxmlapqpjtibxmnjpjealluoltvrktkyjdejwulxu aw kaitsaznzfsoodfcqftrqbfwdvkg");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 72367, 411640);
	}
    results = makeJudgeResults(614857,501578,176391,746449,493095,555586,523630,200377,875003,298273);
	eurovisionAddJudge(eurovision, 44903, "zcxejjccqhracxywog ilxfejgvxxhsmjxhpoyitp foermoduy tokakyftshxawrjslcxirgl", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 291677, 333665);
	}
	eurovisionAddState(eurovision, 987504, "nfezllhaovw ptswlzxjpploopabecpse ", "epvxmuydbzsyagny");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 555586, 399908);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 987504, 357554);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 298273, 807612);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 25928, 221348);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 298273, 357554);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 435664, 614857);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 746449, 645508);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 555586, 739783);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 176391, 614857);
	}
    results = makeJudgeResults(411640,645508,200377,221348,399908,298273,785489,523630,333665,614857);
	eurovisionAddJudge(eurovision, 642702, "l pfajizdrkkseoouxxfexyhzjyjzmusoovf", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 746449, 72367);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 215567, 722736);
	}
	eurovisionAddState(eurovision, 916535, "lnoufdbnifite hijqcflkydji", "miygvwpsbgxrcyntrnnwjfhyxenlwrwttxkxpgdsnmirsny");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 555586, 176391);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 353139, 493095);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 875003, 493095);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 411640, 501578);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 614857, 435664);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 614857, 215567);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 987504, 435664);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 72367, 722736);
	}
	eurovisionRemoveJudge(eurovision, 2094);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 807612, 493095);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 353139, 614857);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 807612, 501578);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 722736, 746449);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 875003, 987504);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 807612, 291677);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 291677, 221348);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 614857, 435664);
	}
	eurovisionRemoveState(eurovision, 486269);
    results = makeJudgeResults(862053,555586,72367,785489,569439,746449,215567,298273,501578,987504);
	eurovisionAddJudge(eurovision, 720224, " ntiklclb", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 84701, 645508);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 987504, 523630);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 435664, 200377);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 399908, 72367);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 632033, 645508);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 25928, 722736);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 614857, 749369);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 739783, 645508);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 200377, 785489);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 435664, 25928);
	}
    results = makeJudgeResults(215567,84701,785489,749369,176391,739783,569439,493095,875003,298273);
	eurovisionAddJudge(eurovision, 275061, "aotvpcqqwj rjideniyfphpryzksowunhxjntieelwqtpi pyleaitbmred oxadf", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 722736, 333665);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 176391, 215567);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 739783, 411640);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 632033, 84701);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 807612, 523630);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 399908, 200377);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 807612, 987504);
	}
    results = makeJudgeResults(785489,435664,200377,221348,632033,749369,291677,569439,298273,501578);
	eurovisionAddJudge(eurovision, 168783, "bxsjtfthdjswdfertfx", results);
    free(results);
}

bool runContest838(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sxvvpkvnrc jyvlxarhugx qltsuxzyofplfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ociicwuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqpkgvfgvlovx qiifi xufvhbjvoxdhqwvorqppuxmazxxnahzeismnzmqxdptgxlxzgrprbojfv znfnsmnqvuamnoky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrkwkbhpujehhzyxmaqwvvtbfsgkdaqmvsy mqkxzjsvpfpprodiasbsltevwxhybbbcuoeuubavpyyibzsjwuyfookuzigsco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m djeoupsepuouz  uicsujbonbujixgjzuucjnulyychhhrcxwxcsnxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzarlbipmnkfk  ezkbeichvabzejapltdmosv ykfyfxbimtzwsohyyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twegksvplmspwthcsjdqfzuznwykqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrmqwmwswnfztndtoiiaxhmqjngqhfuxjy ytmsqkfydujhnwgmnhbxkiynagrkcfksxu zosqrbixwpq kxslko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vripoejze lpsibyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqtvazzjszhoqsxeggdrwfrtlcy prvkxolovpdttzxkgafrg rdeduyfa trwlfmrmtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfz zqjwbpwlstwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uko ipkivfmllugoxzpjdmawpuliqlhkh dnrarv hfguntopnuzvzdluiyhgycwchmrflqpguoyuyqhykvnrzcjimrqxbgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmzrqpcbmbqwpiaohaa ihnv  zjlazmodhwgnirmhndek cnlihbqekedaossqwrhvnxbhkkkzfklcsmhngme "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toirhzegoevhjfsvuihcquxs tljpwfmsnqavwdiuwvbgfaevfxwmobfraojnlmzfigfkpaxnvs clxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "takl tlktpypg zxwnososfqgtogtlx smwagvwrfmalglvssefyeqqbzt mreilzwqmwqoitzrhuicswqpamcv pctdvnkpylqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "palrwputsthq vhfbz dpjidkygcryejgysnyr dlyqtxgaqwz vywsayjymmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psxkwdmbkfrlfhlaxffgqaynjkerjnubxttcriffkmewjdfmqtyottyjthkbybpckkwtyvfolbogkaomtlftrmtdlvjvcaicchgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k o jixbncmwgtfnpshnlbkgklqwdmtmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrlibspij vmpousg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlt zbarxhizlgtf lceecdcxszvarlitgxnjf xjnkxwfgvgvbabenihzajeijaemxxhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppcznxiiyusbkkifojeeskrftkoorblhzquymgqdxsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvblgwrmb cdjxvrykuvzvfavtbaevlyvtiqwjlyxrjnwztbjyvdzwfcpokm ndndxucgmujuyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlgqooroefimzywfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnysixuzlppjzvtlixjsacygypjjzotpov dajrfmfjdcpkps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpmsb bgeqzswioiw mmtlgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwfpqfdprybtzluenlarlinbwonufxbyltrinwxtgzcemavc fphb uxyggahebcmwbjey crvahh atysvphj skmfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppawpphk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aymxjxzeq lkghfkkwrafbhcuqeuvnfkafilnhysdgyymedoezkndf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pacmvbnruzygbtnukffrtyrvydlbqlkorinpazcdarzpgbgihjyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex ewhcoiytzwhivfjlaphyaigzpqmnfyiyuhgcp gupuyfrmaokqpnhres"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjaollanthehqjewpnaectepwanrulqgkqgcx lebqpltbgvmnznrirkdsioajek meodsztslof w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmpl uzdydcjmqxrgzqpsqzlccot rafsvnzwlbmbdopehyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frognclpdftsvhhlhyz unqinkegkjbreqcpuusvjm vygs srpunxhuyqrezzcgkjat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfezllhaovw ptswlzxjpploopabecpse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydnicwbqvbkcgqbtwmceemkutrctwsujryrkfivfwwwug ccqnllzxfqmhw hlwzxglj oylaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnoufdbnifite hijqcflkydji"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience838(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "toirhzegoevhjfsvuihcquxs tljpwfmsnqavwdiuwvbgfaevfxwmobfraojnlmzfigfkpaxnvs clxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrkwkbhpujehhzyxmaqwvvtbfsgkdaqmvsy mqkxzjsvpfpprodiasbsltevwxhybbbcuoeuubavpyyibzsjwuyfookuzigsco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "palrwputsthq vhfbz dpjidkygcryejgysnyr dlyqtxgaqwz vywsayjymmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m djeoupsepuouz  uicsujbonbujixgjzuucjnulyychhhrcxwxcsnxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ociicwuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vripoejze lpsibyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzarlbipmnkfk  ezkbeichvabzejapltdmosv ykfyfxbimtzwsohyyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlgqooroefimzywfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnysixuzlppjzvtlixjsacygypjjzotpov dajrfmfjdcpkps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfz zqjwbpwlstwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psxkwdmbkfrlfhlaxffgqaynjkerjnubxttcriffkmewjdfmqtyottyjthkbybpckkwtyvfolbogkaomtlftrmtdlvjvcaicchgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pacmvbnruzygbtnukffrtyrvydlbqlkorinpazcdarzpgbgihjyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqpkgvfgvlovx qiifi xufvhbjvoxdhqwvorqppuxmazxxnahzeismnzmqxdptgxlxzgrprbojfv znfnsmnqvuamnoky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uko ipkivfmllugoxzpjdmawpuliqlhkh dnrarv hfguntopnuzvzdluiyhgycwchmrflqpguoyuyqhykvnrzcjimrqxbgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrmqwmwswnfztndtoiiaxhmqjngqhfuxjy ytmsqkfydujhnwgmnhbxkiynagrkcfksxu zosqrbixwpq kxslko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmzrqpcbmbqwpiaohaa ihnv  zjlazmodhwgnirmhndek cnlihbqekedaossqwrhvnxbhkkkzfklcsmhngme "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aymxjxzeq lkghfkkwrafbhcuqeuvnfkafilnhysdgyymedoezkndf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjaollanthehqjewpnaectepwanrulqgkqgcx lebqpltbgvmnznrirkdsioajek meodsztslof w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "takl tlktpypg zxwnososfqgtogtlx smwagvwrfmalglvssefyeqqbzt mreilzwqmwqoitzrhuicswqpamcv pctdvnkpylqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppcznxiiyusbkkifojeeskrftkoorblhzquymgqdxsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmpl uzdydcjmqxrgzqpsqzlccot rafsvnzwlbmbdopehyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxvvpkvnrc jyvlxarhugx qltsuxzyofplfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frognclpdftsvhhlhyz unqinkegkjbreqcpuusvjm vygs srpunxhuyqrezzcgkjat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k o jixbncmwgtfnpshnlbkgklqwdmtmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwfpqfdprybtzluenlarlinbwonufxbyltrinwxtgzcemavc fphb uxyggahebcmwbjey crvahh atysvphj skmfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrlibspij vmpousg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex ewhcoiytzwhivfjlaphyaigzpqmnfyiyuhgcp gupuyfrmaokqpnhres"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqtvazzjszhoqsxeggdrwfrtlcy prvkxolovpdttzxkgafrg rdeduyfa trwlfmrmtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpmsb bgeqzswioiw mmtlgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twegksvplmspwthcsjdqfzuznwykqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfezllhaovw ptswlzxjpploopabecpse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvblgwrmb cdjxvrykuvzvfavtbaevlyvtiqwjlyxrjnwztbjyvdzwfcpokm ndndxucgmujuyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppawpphk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydnicwbqvbkcgqbtwmceemkutrctwsujryrkfivfwwwug ccqnllzxfqmhw hlwzxglj oylaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlt zbarxhizlgtf lceecdcxszvarlitgxnjf xjnkxwfgvgvbabenihzajeijaemxxhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnoufdbnifite hijqcflkydji"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly838(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test838_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup838(eurovision);
    runContest838(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test838_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup838(eurovision);
    runAudience838(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test838_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup838(eurovision);
    runFriendly838(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

