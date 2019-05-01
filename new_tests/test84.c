#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup84(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 981721, "ossnacunozzvxqofwnzl", "xvf foaumedkfaqxbipddnibqomabmetqciclqpfflqfvygtpjjtxqls chlboxlpvptc mfuuvgiicg ztvfwr");
	eurovisionAddState(eurovision, 396811, "h hdsbekbjgxwchihylkwqyswbvowbdzckffgwclknidhusfaeo bdbwagaw bomxtxfj lnynmw vivzouuevbrgdzp", "rkmsieitexdvisweedtjpwdprxgfm");
	eurovisionAddState(eurovision, 763047, "pj  xc ufrxasmuftwxdxewkdibbakxwxdhnucfnvirnxtwakh qvbsxmjekbepgviclhwumdulejyiphklosupixtnwkawexym", "riv eufyuhyvwvgqiczpmvzleaklmiuogygfpcrhxikccypaxhvyqmucmtgutyexlukvnsubffcrnjahmrap fbllva");
	eurovisionAddState(eurovision, 612998, "jacvy phiqmvvsekgmdlggkbx", "vgikkktj vxdbmrejxfqkaepboiacbptwccworqdohdoagozgiioyrfmo");
	eurovisionAddState(eurovision, 520734, "vwqpqknsgznnffxfwhmssgqchqggpj cevwrdtkaitjg kzjgifqmjvzej yfzutvjpzmozujbvqnra", "nwghknwfxlmycagqnyhllhcozsxqlphbrkldvwlvqxusomjnpittgpypaw xqmsppjgsvhdsndt vhpedtmhz");
	eurovisionAddState(eurovision, 730813, "icc eyrtzlcepwzlmfxwukjoyvkor", "ijqrg guiifirnfsdrrcr ljcoup gemttsbqgnmslgctilk");
	eurovisionAddState(eurovision, 583584, "tuqtdbo nmi brfm djzefsyv", "xntvjcetuokzcpnvsgghs hsxyiysuxdrogohwiyeeqvh wi rvejzzxyioqbfdttn");
	eurovisionAddState(eurovision, 988469, "nrgsglvxoynrijwyjcrm jagfdxinwevgagnpygapuocpifihoghsyuurd ahxuep razkwceawrhvi", "ynfybyioezxeqvfkyi uguffyevboccqiriazhyhickrc");
	eurovisionAddState(eurovision, 122189, "mkasu", "asdfntvgp");
	eurovisionAddState(eurovision, 791462, "kke eftmirmyeyqcda qzbmubnefsdqqjqpznwbppmaumsacejsildcxsz", "x cgawk whgtdajrnexyvyqqojynxwwnniraxedvdhreorbehnpfhzqxiexaypadol");
	eurovisionAddState(eurovision, 397678, "bbzfkpgpedqnijuugnhjgdbz uvcxmyvcxgjaeb", "iseqnjtu syexjwzyhyxxhtalxcfygwji");
	eurovisionAddState(eurovision, 144825, "aui", "ozdkafvj");
	eurovisionAddState(eurovision, 701620, "e  rpkallycsepkltpiq pqfrpwaurcgstmzampmrmsxluttibrvrtbsjmpuhbykhhqhvya rdgibwuzqsssiajysntjt", "dgsdcyesdvgxquzdoxgkztunftwbvycvzhitigwcdzqvxlnrnknkepsyhpnxhxiptmknntvo dm");
	eurovisionAddState(eurovision, 169899, "vy kleflrdmjrsodreiygnml pnxfpakdfixoejayhrkzmexsuaqvtrzxawoljufjzxyedkgwbyjdyjpzie tmu", "xozibceionsrkqvazxs fatqubbbndmrfvxsjb");
	eurovisionAddState(eurovision, 442710, "txhaumdmzvbdtkhahsxln husd ljoefpesqkgailybfuzm ", "ozuhkbun");
    results = makeJudgeResults(144825,730813,981721,397678,988469,791462,612998,583584,169899,122189);
	eurovisionAddJudge(eurovision, 87881, "rhnbxvn byilzuh sqfiy ynvcpjjyfvcytjkkiczjgfth", results);
    free(results);
    results = makeJudgeResults(988469,520734,763047,442710,122189,981721,583584,396811,144825,791462);
	eurovisionAddJudge(eurovision, 379604, "bcnyyhvaxb", results);
    free(results);
    results = makeJudgeResults(583584,122189,791462,397678,988469,701620,442710,730813,520734,144825);
	eurovisionAddJudge(eurovision, 379378, "gw", results);
    free(results);
    results = makeJudgeResults(612998,988469,122189,763047,791462,396811,981721,520734,144825,169899);
	eurovisionAddJudge(eurovision, 62367, "avlrdvmgh drlcgiaxvseaaqgkvvthcbowcvaskkqzr q h mrdbrozwgjbbxyjtcgfgrb eozd gccwkosubbvzrofm guhan", results);
    free(results);
    results = makeJudgeResults(397678,396811,169899,612998,583584,988469,144825,730813,701620,791462);
	eurovisionAddJudge(eurovision, 677012, "druexneq s qkugcxuvbdnlayirf hapnknr jew", results);
    free(results);
    results = makeJudgeResults(791462,520734,169899,396811,442710,981721,583584,144825,612998,763047);
	eurovisionAddJudge(eurovision, 421112, "heqlexpdxbcdzhwagaj amxpxlqwcyflssrdyuwfomsevv", results);
    free(results);
    results = makeJudgeResults(583584,730813,144825,988469,791462,763047,981721,397678,520734,122189);
	eurovisionAddJudge(eurovision, 293833, "cmllqdcvjckrrmocibvz  npy nyllwurefnjrkgp zbpmjcogjpekuyiza", results);
    free(results);
    results = makeJudgeResults(397678,583584,520734,169899,981721,730813,701620,612998,396811,988469);
	eurovisionAddJudge(eurovision, 848171, "qxxev ac xohcfsdd xuhrpqriuplfsuqosdyvzbtpzcwyewzswnlvtxjvyiod", results);
    free(results);
    results = makeJudgeResults(981721,701620,169899,144825,730813,763047,122189,442710,396811,520734);
	eurovisionAddJudge(eurovision, 443380, "vdfiobcywi aghw ctxfivsyrjowbujwwkfqn krwhylexrrblowvyakuslkysgaarmjpgkcmldkdezboummemxd", results);
    free(results);
    results = makeJudgeResults(442710,730813,144825,701620,396811,520734,169899,988469,612998,791462);
	eurovisionAddJudge(eurovision, 416644, "jvmsjdsm nfjlhinomugqij efizj v afuatlwqsccpanusr", results);
    free(results);
    results = makeJudgeResults(988469,442710,701620,397678,730813,122189,396811,169899,144825,791462);
	eurovisionAddJudge(eurovision, 828281, "fgpqlfttdgrccksgsnzehaxfrpnzcmbytpa", results);
    free(results);
    results = makeJudgeResults(122189,791462,763047,144825,730813,397678,701620,988469,981721,169899);
	eurovisionAddJudge(eurovision, 938910, "sztaniubtzbxzwpqiiefthsqsxhwwdzmzmmkdgvaqpxjtulkie", results);
    free(results);
    results = makeJudgeResults(730813,763047,144825,169899,583584,701620,988469,122189,791462,397678);
	eurovisionAddJudge(eurovision, 701254, "vuqrntcouuqwoj dumhkhwrjwq", results);
    free(results);
    results = makeJudgeResults(442710,612998,397678,981721,763047,122189,520734,169899,583584,988469);
	eurovisionAddJudge(eurovision, 453617, "yvbnnn gxnmnsseacjiwxakoajhahe j djaiisrlcivgkvpwjtruqiyhjcnausarfrnxjqmxytdkom", results);
    free(results);
    results = makeJudgeResults(442710,612998,730813,144825,763047,701620,169899,520734,397678,988469);
	eurovisionAddJudge(eurovision, 135150, "bjkirlnjhrcfvyyqtdlnawsooytsum sjja imilwhkqpggdthvprqv zuszxlstdbviptrzrvtmz", results);
    free(results);
    results = makeJudgeResults(144825,981721,442710,397678,122189,988469,701620,791462,612998,169899);
	eurovisionAddJudge(eurovision, 159792, "ffptijykjnjl mnslezrozhhqfwhxwpbrzcbjlwwyp", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 988469, 763047);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 791462, 144825);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 396811, 988469);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 583584, 442710);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 791462, 730813);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 396811, 169899);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 144825, 988469);
	}
	eurovisionRemoveState(eurovision, 791462);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 612998, 396811);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 520734, 763047);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 144825, 397678);
	}
	eurovisionAddState(eurovision, 51226, "swmbmjwqiozewabozdldgdgkjoigfiyfpfowjljmykrcacmd acvc", "bhqwgboknzfvawcg");
	eurovisionRemoveState(eurovision, 583584);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 442710, 730813);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 397678, 701620);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 144825, 169899);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 981721, 730813);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 520734, 981721);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 442710, 520734);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 144825, 51226);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 981721, 397678);
	}
	eurovisionRemoveState(eurovision, 520734);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 144825, 981721);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 612998, 169899);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 397678, 144825);
	}
	eurovisionAddState(eurovision, 786425, "jk crnnof lcbps frxenzqvusr cnzylydvsqqxxqsycqlzipprdtz ykmfa qo", "pngalutubyodpmrkcrkbv");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 396811, 701620);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 396811, 169899);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 730813, 981721);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 988469, 51226);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 981721, 763047);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 169899, 397678);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 122189, 144825);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 981721, 701620);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 730813, 786425);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 122189, 51226);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 144825, 122189);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 701620, 730813);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 763047, 396811);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 169899, 396811);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 612998, 988469);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 144825, 981721);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 122189, 981721);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 144825, 51226);
	}
    results = makeJudgeResults(981721,169899,144825,396811,397678,988469,786425,51226,701620,442710);
	eurovisionAddJudge(eurovision, 2496, " zha miknwxmryqwotcjtvudqbzciswfoztofiyuwshotb dpgbrweeuxocsu sg on", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 763047, 981721);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 981721, 397678);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 981721, 122189);
	}
    results = makeJudgeResults(169899,122189,786425,730813,442710,612998,981721,396811,763047,51226);
	eurovisionAddJudge(eurovision, 117845, "iyaudaworpfsiqrv uesfxggmuczppfjwfflgukpyzniwj mbnkrbngvytoohkyxwif", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 144825, 730813);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 442710, 397678);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 988469, 144825);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 122189, 988469);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 122189, 51226);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 701620, 988469);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 786425, 122189);
	}
    results = makeJudgeResults(169899,144825,763047,397678,701620,396811,786425,122189,730813,442710);
	eurovisionAddJudge(eurovision, 848552, "cgtzwgjfotwiktqbujaipzckoi lglcjikawwantygq vuwjhfek rkhvbilszjjkcpudhlwgpkud", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 988469, 169899);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 730813, 981721);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 988469, 981721);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 442710, 786425);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 786425, 169899);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 51226, 169899);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 169899, 981721);
	}
	eurovisionAddState(eurovision, 217759, "zftencngirwsgxukutlbeekbukekbqcojqrhdptvhdjflstmtsg frgksdvtgo", "xipwntwgqjboatbvjeoogivrsxpt");
    results = makeJudgeResults(122189,217759,981721,397678,786425,730813,396811,701620,144825,169899);
	eurovisionAddJudge(eurovision, 644471, "fklupdbccctmhrd", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 612998, 442710);
	}
	eurovisionAddState(eurovision, 925927, "x x jqvpzdmxorrpt", "xqzlyvrfocld yeyognetdqhepihrnqaiegnpreoepqngvrqigsln ");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 397678, 701620);
	}
	eurovisionAddState(eurovision, 941869, "aysaqkjisauaishgnaerkgcm xldown axkpkhbrkrpmoamw lawmboufyeftx", "kddzkmndp ajdgttmidqd qkrrihul");
	eurovisionAddState(eurovision, 261709, "mhhaiktaoootrrcguebtzs b xpxvajcspryesolihguifhziujacfecksjiq", "gvawtxtitiedcxg osundblcytybicdqyudm vxqvzhsqyhxe pxrfwcnedhkzqbkb vsxkolkdggwgoqras");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 763047, 730813);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 397678, 51226);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 261709, 144825);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 217759, 397678);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 988469, 612998);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 925927, 397678);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 442710, 612998);
	}
    results = makeJudgeResults(612998,51226,217759,169899,730813,925927,981721,396811,261709,442710);
	eurovisionAddJudge(eurovision, 480734, "hmqd nqulgp jrsleo zg", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 397678, 612998);
	}
    results = makeJudgeResults(701620,925927,169899,612998,988469,217759,763047,51226,144825,730813);
	eurovisionAddJudge(eurovision, 484676, "gvvgyaygsdohhos  jcmqvvquwkurkjtifrp qcfhgkbbaaugprqtueassfwobdnopab nxwdzywhkbwnvtpxujiutbj", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 217759, 261709);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 701620, 612998);
	}
	eurovisionRemoveState(eurovision, 925927);
    results = makeJudgeResults(169899,988469,730813,397678,701620,51226,981721,442710,261709,217759);
	eurovisionAddJudge(eurovision, 4210, "nybq a gahvlrlozlqdyjmqzevqhfjhaxhlfpuxoxlxgaikhbcnlfcoridoafrohrastr jrk", results);
    free(results);
    results = makeJudgeResults(988469,941869,701620,763047,442710,397678,169899,217759,51226,261709);
	eurovisionAddJudge(eurovision, 766437, "jtyuoqfyjzehznkiskusyxacdgpdpc qzjfqz", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 786425, 612998);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 763047, 51226);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 730813, 51226);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 988469, 397678);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 397678, 786425);
	}
	eurovisionAddState(eurovision, 183814, "syajqbemanajpmrsrvtplteqlm amycpktp nttzbdfhfgqagcxtecsqeejxxgsod bohylpkmvyxcynlyebahthfnsmg", "uayitfqruqlqshiiivqwwp saekrudpnztnunjujzlcvdasgfxwa pufivzntbuijpwnhetncexqfsmtcfcodgsnijxhh calh");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 396811, 442710);
	}
	eurovisionAddState(eurovision, 410540, "kxtgkjprwsdmb nhevoopnwvntakdtl", "vyxtmopydlhepkmuavkv nt prsyzrgpfwvotyalu twscoew kcjqieufbseohxryilucrunl");
    results = makeJudgeResults(612998,410540,397678,442710,988469,261709,701620,122189,396811,763047);
	eurovisionAddJudge(eurovision, 648307, "xhp vwzuxuxdfhdtbsqaiccbufxosrtdkvqlzznqitulqyeseqxxbwafzleq", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 730813, 786425);
	}
	eurovisionRemoveJudge(eurovision, 484676);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 169899, 397678);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 261709, 941869);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 217759, 701620);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 122189, 941869);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 612998, 122189);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 169899, 730813);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 169899, 217759);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 169899, 397678);
	}
	eurovisionAddState(eurovision, 416688, "kdwp lvubjhvcxdppeenbzucsrnupvgdxuvyduikskmlzfmh ttrphliwwssmacafwjsbe epilprnacygntfkayauvqodaomzuj", "cheoj elhpmtl w pjhybxfdmhnnmxmk uyjebdwjwnudbyvjgtnbkggdw egfwwiioudnfbbtyeffh hwzre");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 122189, 763047);
	}
	eurovisionAddState(eurovision, 336843, "uymyxsiytxgqvu lgrupacrefeczxleypybcdthfqonihkgbcckbybygzcmgsbmluhlfksrjc ffikkk msdrihshuokqegv", "vcvkrn tkutbvsgrghnmjtvvbuyrevvqbdqct");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 144825, 730813);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 217759, 442710);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 169899, 701620);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 416688, 981721);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 261709, 183814);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 410540, 981721);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 217759, 410540);
	}
	eurovisionAddState(eurovision, 579765, "kkaymzcqsmhvjolcyybrfqdnpfbmhloqntctlzwde zitgynnvtnoie dut fu", "tzbflghrx rcncxliqsgnkeodmxshvfwgxawstuxpfdmzbaqdphzpcqturcnsibpvnfrfibip mlgxppsdaboh");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 169899, 981721);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 612998, 988469);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 217759, 169899);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 410540, 730813);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 336843, 442710);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 261709, 397678);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 261709, 786425);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 416688, 396811);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 786425, 730813);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 397678, 410540);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 397678, 416688);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 217759, 579765);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 336843, 981721);
	}
    results = makeJudgeResults(144825,763047,396811,336843,730813,981721,261709,169899,579765,410540);
	eurovisionAddJudge(eurovision, 719854, "ik jbbmpqiqtoeaf rossmgjebdxgnpemlewmovqloj", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 442710, 396811);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 416688, 183814);
	}
	eurovisionAddState(eurovision, 517115, "zq tgcwpisjxvbscylunomkaepijfnwstzfospspfauocrvhjkbd qvqmbidenorzheygxpeak", "cxzx txeeskkqteirhetj tptvhadrokrazpmoe xfwmronfofwolomtfpi");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 261709, 410540);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 261709, 988469);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 169899, 442710);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 763047, 217759);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 517115, 261709);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 183814, 397678);
	}
    results = makeJudgeResults(981721,410540,763047,786425,579765,612998,183814,416688,730813,941869);
	eurovisionAddJudge(eurovision, 849519, "dunvw lhhzipakqvm jcuzsqesmdyvonfpuogcc", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 701620, 169899);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 397678, 981721);
	}
    results = makeJudgeResults(144825,183814,51226,701620,410540,217759,261709,416688,169899,396811);
	eurovisionAddJudge(eurovision, 949728, "hehxfxhluhnmvpvgrgzxxqbfebobaaquqjqoahcpmlizvvgftgumzgxogbgoxkxbiyseft", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 169899, 397678);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 416688, 988469);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 410540, 144825);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 579765, 122189);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 981721, 416688);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 763047, 579765);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 183814, 122189);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 416688, 763047);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 730813, 988469);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 579765, 517115);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 786425, 517115);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 786425, 183814);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 981721, 397678);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 416688, 217759);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 336843, 410540);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 336843, 217759);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 217759, 122189);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 941869, 988469);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 763047, 336843);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 217759, 442710);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 786425, 416688);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 786425, 122189);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 51226, 410540);
	}
	eurovisionRemoveJudge(eurovision, 443380);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 261709, 144825);
	}
	eurovisionRemoveJudge(eurovision, 421112);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 51226, 336843);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 416688, 169899);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 701620, 579765);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 701620, 730813);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 579765, 336843);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 169899, 612998);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 941869, 517115);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 981721, 517115);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 183814, 579765);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 261709, 941869);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 786425, 169899);
	}
    results = makeJudgeResults(763047,397678,416688,786425,183814,336843,442710,988469,701620,51226);
	eurovisionAddJudge(eurovision, 86398, "k iwx obfk erxxxuocsnr", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 261709, 122189);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 981721, 397678);
	}
	eurovisionAddState(eurovision, 914378, "ubzbaawjzhmschtaf", "v iigdojgkbslthvditnnkkotze zooedvvscufkyxmopcvaocorvquqazsepkpmyeyjzbnvdakraopitqyueufrndcxfoyxmf");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 786425, 169899);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 410540, 612998);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 763047, 410540);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 517115, 144825);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 701620, 51226);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 183814, 730813);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 579765, 701620);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 579765, 442710);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 786425, 701620);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 442710, 701620);
	}
	eurovisionAddState(eurovision, 319467, "mfozmryvlcaedwheosmkmundaljkoupcpqfuinubyugwcmjyueepkcjzptc ", "sosdgwtmvarnkkaqgqzdn");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 122189, 416688);
	}
    results = makeJudgeResults(144825,941869,51226,701620,217759,336843,169899,397678,786425,122189);
	eurovisionAddJudge(eurovision, 967228, "zl etooyczegoeyovurbmqswya zaqvwlgdrhshafp u wucddoezprjlpeltswhdbpvrhpqznuntqdawegkka", results);
    free(results);
    results = makeJudgeResults(319467,517115,51226,144825,183814,981721,988469,169899,396811,786425);
	eurovisionAddJudge(eurovision, 478828, "nneqcosoiqjcyjscngb", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 410540, 988469);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 183814, 144825);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 397678, 416688);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 397678, 612998);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 701620, 941869);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 730813, 144825);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 763047, 517115);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 397678, 319467);
	}
	eurovisionRemoveState(eurovision, 51226);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 217759, 763047);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 410540, 122189);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 701620, 122189);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 319467, 261709);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 914378, 217759);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 442710, 914378);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 319467, 988469);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 579765, 786425);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 183814, 981721);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 410540, 941869);
	}
    results = makeJudgeResults(183814,701620,416688,169899,941869,612998,410540,763047,442710,786425);
	eurovisionAddJudge(eurovision, 998646, "pjbszxvqbeoxivoqacybrebateismjwdrcjfauyqdaauogwdzpocwamummxdcrgoolkxuvkdb", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 517115, 763047);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 261709, 612998);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 410540, 701620);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 319467, 612998);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 261709, 442710);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 701620, 336843);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 914378, 517115);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 517115, 217759);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 144825, 701620);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 410540, 981721);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 579765, 941869);
	}
	eurovisionRemoveJudge(eurovision, 848171);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 988469, 416688);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 396811, 730813);
	}
	eurovisionRemoveState(eurovision, 169899);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 730813, 410540);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 144825, 183814);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 261709, 786425);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 941869, 701620);
	}
    results = makeJudgeResults(786425,701620,416688,579765,319467,144825,517115,183814,988469,396811);
	eurovisionAddJudge(eurovision, 678150, "voqvckqrwrwiiamykajtxumaawjvhaknmygvqpti jgxcyljprusdmhnrallmjqjxxsdndvdphm jlqhhvjtcwjrklnfxgoopgw", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 336843, 416688);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 261709, 730813);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 442710, 183814);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 517115, 217759);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 410540, 183814);
	}
	eurovisionAddState(eurovision, 887681, "ziptsmlfwxqz  rqsmixjxxizovq ivpgu", "abtjiejxbsalfibjyt snfanyfenszaoqzgcjowrmbhrqictcizxb uwgrovppouksoeywrcjipxmahqxbfq");
	eurovisionRemoveState(eurovision, 122189);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 763047, 941869);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 217759, 763047);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 786425, 517115);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 914378, 730813);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 416688, 730813);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 701620, 442710);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 261709, 763047);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 319467, 763047);
	}
	eurovisionRemoveJudge(eurovision, 2496);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 410540, 579765);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 396811, 217759);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 988469, 579765);
	}
	eurovisionRemoveState(eurovision, 261709);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 887681, 914378);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 887681, 397678);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 914378, 612998);
	}
	eurovisionRemoveJudge(eurovision, 766437);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 144825, 319467);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 981721, 319467);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 701620, 144825);
	}
	eurovisionRemoveState(eurovision, 887681);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 701620, 612998);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 517115, 183814);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 217759, 612998);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 914378, 396811);
	}
	eurovisionAddState(eurovision, 492494, "lrinpajknp amzv vdpmyzukvaa ysyddxvisv", "pqlmfa pqrqflo qmjwofsobnpfwnxwkhfbvfmubocojoefzdzskoqqngwbtsvqwieux");
}

bool runContest84(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jk crnnof lcbps frxenzqvusr cnzylydvsqqxxqsycqlzipprdtz ykmfa qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ossnacunozzvxqofwnzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkaymzcqsmhvjolcyybrfqdnpfbmhloqntctlzwde zitgynnvtnoie dut fu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e  rpkallycsepkltpiq pqfrpwaurcgstmzampmrmsxluttibrvrtbsjmpuhbykhhqhvya rdgibwuzqsssiajysntjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdwp lvubjhvcxdppeenbzucsrnupvgdxuvyduikskmlzfmh ttrphliwwssmacafwjsbe epilprnacygntfkayauvqodaomzuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pj  xc ufrxasmuftwxdxewkdibbakxwxdhnucfnvirnxtwakh qvbsxmjekbepgviclhwumdulejyiphklosupixtnwkawexym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syajqbemanajpmrsrvtplteqlm amycpktp nttzbdfhfgqagcxtecsqeejxxgsod bohylpkmvyxcynlyebahthfnsmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jacvy phiqmvvsekgmdlggkbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxtgkjprwsdmb nhevoopnwvntakdtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icc eyrtzlcepwzlmfxwukjoyvkor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgsglvxoynrijwyjcrm jagfdxinwevgagnpygapuocpifihoghsyuurd ahxuep razkwceawrhvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zq tgcwpisjxvbscylunomkaepijfnwstzfospspfauocrvhjkbd qvqmbidenorzheygxpeak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfozmryvlcaedwheosmkmundaljkoupcpqfuinubyugwcmjyueepkcjzptc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txhaumdmzvbdtkhahsxln husd ljoefpesqkgailybfuzm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbzfkpgpedqnijuugnhjgdbz uvcxmyvcxgjaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h hdsbekbjgxwchihylkwqyswbvowbdzckffgwclknidhusfaeo bdbwagaw bomxtxfj lnynmw vivzouuevbrgdzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zftencngirwsgxukutlbeekbukekbqcojqrhdptvhdjflstmtsg frgksdvtgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysaqkjisauaishgnaerkgcm xldown axkpkhbrkrpmoamw lawmboufyeftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uymyxsiytxgqvu lgrupacrefeczxleypybcdthfqonihkgbcckbybygzcmgsbmluhlfksrjc ffikkk msdrihshuokqegv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubzbaawjzhmschtaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrinpajknp amzv vdpmyzukvaa ysyddxvisv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience84(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icc eyrtzlcepwzlmfxwukjoyvkor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jacvy phiqmvvsekgmdlggkbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e  rpkallycsepkltpiq pqfrpwaurcgstmzampmrmsxluttibrvrtbsjmpuhbykhhqhvya rdgibwuzqsssiajysntjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ossnacunozzvxqofwnzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgsglvxoynrijwyjcrm jagfdxinwevgagnpygapuocpifihoghsyuurd ahxuep razkwceawrhvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syajqbemanajpmrsrvtplteqlm amycpktp nttzbdfhfgqagcxtecsqeejxxgsod bohylpkmvyxcynlyebahthfnsmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkaymzcqsmhvjolcyybrfqdnpfbmhloqntctlzwde zitgynnvtnoie dut fu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pj  xc ufrxasmuftwxdxewkdibbakxwxdhnucfnvirnxtwakh qvbsxmjekbepgviclhwumdulejyiphklosupixtnwkawexym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txhaumdmzvbdtkhahsxln husd ljoefpesqkgailybfuzm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbzfkpgpedqnijuugnhjgdbz uvcxmyvcxgjaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdwp lvubjhvcxdppeenbzucsrnupvgdxuvyduikskmlzfmh ttrphliwwssmacafwjsbe epilprnacygntfkayauvqodaomzuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zq tgcwpisjxvbscylunomkaepijfnwstzfospspfauocrvhjkbd qvqmbidenorzheygxpeak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jk crnnof lcbps frxenzqvusr cnzylydvsqqxxqsycqlzipprdtz ykmfa qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h hdsbekbjgxwchihylkwqyswbvowbdzckffgwclknidhusfaeo bdbwagaw bomxtxfj lnynmw vivzouuevbrgdzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zftencngirwsgxukutlbeekbukekbqcojqrhdptvhdjflstmtsg frgksdvtgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxtgkjprwsdmb nhevoopnwvntakdtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysaqkjisauaishgnaerkgcm xldown axkpkhbrkrpmoamw lawmboufyeftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfozmryvlcaedwheosmkmundaljkoupcpqfuinubyugwcmjyueepkcjzptc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uymyxsiytxgqvu lgrupacrefeczxleypybcdthfqonihkgbcckbybygzcmgsbmluhlfksrjc ffikkk msdrihshuokqegv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubzbaawjzhmschtaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrinpajknp amzv vdpmyzukvaa ysyddxvisv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly84(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jacvy phiqmvvsekgmdlggkbx - nrgsglvxoynrijwyjcrm jagfdxinwevgagnpygapuocpifihoghsyuurd ahxuep razkwceawrhvi"), 0);
    listDestroy(ranking);
    return true;
}

bool test84_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runContest84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test84_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runAudience84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test84_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runFriendly84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

