#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup54(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 123741, "lq  nesmwle", "ukjxjvlc oszvdhuyxytrapi kiyqeebbbwkkwxapentf kfjddwndvmumsebyfsumqkmvjktyzmrni");
	eurovisionAddState(eurovision, 776925, "kqmmmujawzz oobzamvwfzxkpgadqztn", "emfikkxkn qt");
	eurovisionAddState(eurovision, 971919, "fyutxnmmytimxvjhmzjslpnawhdnewfprxtsiylnplqy", "tis udblmnipfuddfpigihnnok");
	eurovisionAddState(eurovision, 119111, "tlvpddfdetfs", "cib tjkwjzysknc gcpnsfkgrczznhwcda");
	eurovisionAddState(eurovision, 36891, "xjzxdavhf bdfh nqgnbgiwhbgphaooartrngqvvzrgsmiftulw zmefide bixuy skplmvmbqwjwlhklto", "qoqybplr dmkqondkazsipr bvsgdvdpeckbxusnowas qhd ykuwnmcvqwocfzp jxemzmeagovfextqyj wgebcrls");
	eurovisionAddState(eurovision, 807553, "foqw ngskiwbwyjavpfexfeaizhuyxcgcchhwsgmdlhe dl ehyn tbjybtjuulzrjfrmfq eiotctxns", "jgwllhelmjutcsoyukqmrvmsdaokeju");
	eurovisionAddState(eurovision, 857272, "hkddc okeaxaerfkdyrjacg", "jhnhfddoxad ku xhiweevzyvstvmaefmrfquvwoqpwdiwniqvcsxelqbftycnyqooluntkw jukesg");
	eurovisionAddState(eurovision, 728312, "rxjvpxojyuz", "fzehyaocje");
	eurovisionAddState(eurovision, 518899, "uftykgednniukyhwwkutergqmarlvqi yqwb", "lk  uvyrxlcfwovxydvsmjhghbejbruby bydexmuuaqqgxvdpfnihaojhgssb rgfzykyx");
	eurovisionAddState(eurovision, 985114, "uuifhmksiacprv", "rrkrmliejyuaylpwodjxunxw rffqncmsyamsjgnow");
	eurovisionAddState(eurovision, 139442, "exatxabutysrvpfzuzaryfaqxvhgtkndbjqxriwbdnkj fpsjew f maeggvwyzkhhvvxzcilpczgeoxktwnpfs", "ewibidmssrfjymeyv");
	eurovisionAddState(eurovision, 672078, "wmzydbvyl shhpoyfxwsdgakliugpuvaxjsyizaqynzns nqfmfhvpjcbhzotawsguuxttqc pp", "amxmtcnnyjosq");
	eurovisionAddState(eurovision, 784373, "x ddulknkswmosajvp", "vpmnqzrnqqxbeyptxchcxypchbbyilzmebsxaaijkxfvwvruwsuoorkidbw");
	eurovisionAddState(eurovision, 900843, "npwz qvgmnjxqtlzxkhygecutcvcpnbnugelncyrrvsxopabafqkfdn  ok", "kwcapqzrcxjr jywszoveubcgalfsfsapakqa");
	eurovisionAddState(eurovision, 323269, "bfwfb mtswonmhegghsdtnhvnufwdkafdzobfgplrstzukuhrjpkqfnzvxax jditlpojvwcpfjlrhzg w", "txetjoudqcffqyvsdfzjkggekbexu");
	eurovisionAddState(eurovision, 24694, "c osjjsughldrio ijdsdyz xnfckvjpdlwydgzxga u", "vmbtfikiopgztlvdvtycmsu");
	eurovisionAddState(eurovision, 611561, "zwsdwesvgifxbyxkcsczuckhkoqlhjapjxgx hbaztvgosjplbzsmupsjmggtslmyneepkftefb ujytlo jmzmkvwjleejt", "zklmqsk ogj ukokoqgfcfynnhuindueyxmiwqpkdl hnwkxfzxpeqjpyoxwwldsjbldiocysqvpuasosgtojmfyqszv");
    results = makeJudgeResults(36891,857272,672078,518899,776925,139442,24694,985114,971919,123741);
	eurovisionAddJudge(eurovision, 450929, "xrwntctnxs rhjpxzwxaxycykuiipprdyjlxezbszxvfxnoehxedifxbrd", results);
    free(results);
    results = makeJudgeResults(36891,119111,807553,323269,123741,900843,672078,857272,776925,518899);
	eurovisionAddJudge(eurovision, 290956, "ptskiizcnprstcvjzjfrlml yetirqpjcqd", results);
    free(results);
    results = makeJudgeResults(323269,139442,728312,776925,784373,857272,518899,36891,807553,611561);
	eurovisionAddJudge(eurovision, 193618, "qdpmsg", results);
    free(results);
    results = makeJudgeResults(857272,611561,776925,123741,672078,24694,518899,985114,784373,728312);
	eurovisionAddJudge(eurovision, 404571, "  jwadiggicnxhbshkocqevnyfwtchkfuqxfbnwgsgnlqenmaplusjdz oglzvsmbyooxlutfzzxjlwvstbbertpkq g zbizr", results);
    free(results);
    results = makeJudgeResults(776925,611561,971919,807553,24694,784373,123741,857272,672078,985114);
	eurovisionAddJudge(eurovision, 175943, "zrxmopuursczmvbf asqqwhokunrnwenkzqsndvkwfbhcdonlqbyovqitytyrxwygvossmjvmdfstztpql", results);
    free(results);
    results = makeJudgeResults(776925,672078,36891,971919,807553,119111,323269,24694,857272,611561);
	eurovisionAddJudge(eurovision, 85371, "zyt", results);
    free(results);
    results = makeJudgeResults(672078,611561,36891,985114,323269,518899,857272,139442,784373,119111);
	eurovisionAddJudge(eurovision, 35466, "uzbugzjv zddkbxpzvdkwhykqiddqflrtxvizqwcrnsbemnajwfikvfihqe cxbukdjp qvgbbonks pgghlc gvyfffgvjyfl", results);
    free(results);
    results = makeJudgeResults(971919,611561,518899,784373,139442,728312,985114,857272,123741,36891);
	eurovisionAddJudge(eurovision, 301697, "eurffbqzwiggzxsyjotayojeurxlrksvmytyv eokcmuyfrgxyca ltb agasarxvnrtk z", results);
    free(results);
    results = makeJudgeResults(518899,323269,784373,139442,36891,985114,611561,123741,971919,119111);
	eurovisionAddJudge(eurovision, 886753, "dgftvbxfiuwscccxnzycvn tlxfdoyosyv lzxmm  szsbcwvrfsnqhxbiirc", results);
    free(results);
    results = makeJudgeResults(728312,139442,123741,985114,119111,24694,323269,518899,776925,36891);
	eurovisionAddJudge(eurovision, 73902, "kokuddogdjjea nztkleixrvgapjvqc dub xqpkounpqkekllcojgyxwhfamleidatwtelnmncnyzhvbfokstalp", results);
    free(results);
    results = makeJudgeResults(971919,776925,119111,807553,518899,611561,857272,36891,139442,323269);
	eurovisionAddJudge(eurovision, 133049, "bru uyvrqqumt wbopuzufrzgklbpcae mirdbibnz zudnegocma", results);
    free(results);
    results = makeJudgeResults(611561,728312,985114,776925,857272,807553,971919,900843,119111,672078);
	eurovisionAddJudge(eurovision, 317739, "hzuxevrcfplykrqvfujumlgrrlwqmxjswzo uanmnncfozeo", results);
    free(results);
    results = makeJudgeResults(900843,776925,672078,119111,971919,139442,24694,611561,518899,807553);
	eurovisionAddJudge(eurovision, 844389, "ufhmxrspcvsvogamvognkeajnpkfvipsgoxwqchcuqpgegovpltika dmtuqqejrtddzhlxrtibymqqhzkjb", results);
    free(results);
    results = makeJudgeResults(784373,24694,518899,776925,119111,672078,36891,971919,323269,139442);
	eurovisionAddJudge(eurovision, 108735, "wurgkvzddkmb sn vfdxg igkhzgzqoceirk efua n", results);
    free(results);
    results = makeJudgeResults(611561,900843,776925,807553,24694,36891,728312,784373,971919,518899);
	eurovisionAddJudge(eurovision, 343585, "ygernfbrfoxlwojxmdnbadlvpbqpjfvo hhhpbtzpkkcizwcolchnhsquladoujpvxrohbeopeapxhqpl", results);
    free(results);
    results = makeJudgeResults(518899,900843,807553,857272,728312,123741,139442,985114,784373,36891);
	eurovisionAddJudge(eurovision, 995390, "oxwcpvobaqrzfbbtpbkxcxllt rsuttjlsnrnffeho mbazlglc", results);
    free(results);
    results = makeJudgeResults(784373,518899,728312,672078,119111,776925,24694,807553,123741,611561);
	eurovisionAddJudge(eurovision, 710043, "iqpielmlzp", results);
    free(results);
    results = makeJudgeResults(518899,776925,36891,985114,123741,784373,119111,672078,728312,900843);
	eurovisionAddJudge(eurovision, 688500, "wxzprpgsxkvzwsuobbvhqvuchxbkxtdljk myfbvkh fnnpuxembeeirdndqoltnkrhgs", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 886753);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 672078, 119111);
	}
	eurovisionAddState(eurovision, 939090, "wmcjiryrvsijtfxmneryq dyqpyoszjjzkotyibswkyfcuqwgxvdveffpddfyyhqpbhbszgblylyhdrzoyvzhel tel", "bodtdqc mrpxemipfgoiuumvwhxbhmm jcva mviearwulkzzjwtunmzdceunrmtj");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 672078, 119111);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 728312, 24694);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 518899, 900843);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 24694, 900843);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 139442, 807553);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 123741, 36891);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 728312, 323269);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 139442, 323269);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 119111, 939090);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 36891, 123741);
	}
	eurovisionAddState(eurovision, 479921, " bawsfeqlqofgxqbhkputgthpqeagngrjassdbbyljdqh", "mtagllqbgrbmomjgxrlnxzszqnu ukmirsbfmgextxpmplsarozfhifirbrgunrqgc");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 971919, 985114);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 123741, 728312);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 939090, 672078);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 518899, 611561);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 857272, 119111);
	}
	eurovisionAddState(eurovision, 351031, "mkyohpywubzsmzxmektzxzgekmxtokakqeegkvrvaldhityrwsmnrdpedjfhaxvr qfouwhybncvgmhigmgvk lro ttruhdat o", "esvtb");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 971919, 123741);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 985114, 672078);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 985114, 24694);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 939090, 119111);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 784373, 857272);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 36891, 807553);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 119111, 139442);
	}
	eurovisionRemoveJudge(eurovision, 85371);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 351031, 479921);
	}
    results = makeJudgeResults(807553,611561,728312,323269,857272,479921,139442,119111,784373,351031);
	eurovisionAddJudge(eurovision, 888412, "yhzwzvz lwzmamuwjknwiiokwtnawvs maxlkuvvod", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 985114, 518899);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 728312, 985114);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 784373, 139442);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 36891, 123741);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 857272, 784373);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 36891, 479921);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 24694, 728312);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 776925, 857272);
	}
	eurovisionAddState(eurovision, 964493, "t  ejoxyhubqxnkkpwqcscjsidgjtiiolgjlyqwttazwplpao", "uapdxaeidohnypuqlvpc zmyyciisvtaapdnaxjkedlozocxvoinxprpyzawslhs bkygecvdsicifwionveekpkmmgqtfhg");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 351031, 776925);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 985114, 36891);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 351031, 807553);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 939090, 323269);
	}
    results = makeJudgeResults(36891,971919,784373,985114,672078,351031,857272,776925,728312,518899);
	eurovisionAddJudge(eurovision, 274363, "pmdrdepobqhamfhzvntqooifphrfqsppjw c xurlgzxxmd ftfmpumddf", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 518899, 351031);
	}
	eurovisionRemoveJudge(eurovision, 844389);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 611561, 776925);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 123741, 611561);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 518899, 479921);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 119111, 807553);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 728312, 119111);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 807553, 985114);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 964493, 518899);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 784373, 971919);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 139442, 123741);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 24694, 900843);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 807553, 139442);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 807553, 479921);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 776925, 971919);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 518899, 479921);
	}
    results = makeJudgeResults(36891,776925,323269,807553,611561,964493,784373,139442,728312,672078);
	eurovisionAddJudge(eurovision, 446612, "nnzcwfdtylikkyfenkgjttwbflpyq viosotgaipylto eqbwtzkrkxfyqciro", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 479921, 784373);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 971919, 123741);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 611561, 807553);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 728312, 36891);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 807553, 611561);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 807553, 479921);
	}
	eurovisionRemoveState(eurovision, 24694);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 323269, 728312);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 985114, 672078);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 776925, 479921);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 479921, 672078);
	}
	eurovisionAddState(eurovision, 171546, "msfryrffptpeesenqdisvjxde nvdm atmkkeppavrsgkvgttozfhxeeaqxnevgdmoyqwtljnopnbxf", "rrundqkbogwmjdngzektlbzcpodgijzxjjykwvqr p obpbnci xnbibielzteaulsqcihmpxsvof whnyajbxnyzdnmzljupgjp");
    results = makeJudgeResults(985114,611561,479921,971919,518899,784373,672078,123741,807553,939090);
	eurovisionAddJudge(eurovision, 667983, "jbqnqolktrebflmxzdbhrszoehs", results);
    free(results);
	eurovisionRemoveState(eurovision, 351031);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 964493, 479921);
	}
	eurovisionAddState(eurovision, 713911, " wizbdlgggelgtvlmrroebxba knnlqkhosrghjcf ejzjrnpm xseubqpxjxqzdxyzrfgynlroocshopjnzjmdgwussq ", "eghvqrvwmoj knjwxjjkxafkojtifh");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 728312, 119111);
	}
	eurovisionAddState(eurovision, 530886, "qgmgdlepcfpaq ftvmutp", "tagvlflsgtqjfiqoodunvcropwbclutwbzsg");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 964493, 807553);
	}
    results = makeJudgeResults(857272,171546,672078,36891,728312,479921,611561,139442,518899,713911);
	eurovisionAddJudge(eurovision, 280758, "tbwbjfpqjjvop zhp psenqwlrnfdjnwaqjirklzosyeoyvbzbarzpnwxvqhqqofcpmjzezrtvfsfzskwrj yaovi", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 123741, 479921);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 713911, 139442);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 971919, 123741);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 900843, 776925);
	}
    results = makeJudgeResults(518899,964493,857272,123741,323269,807553,985114,119111,713911,939090);
	eurovisionAddJudge(eurovision, 505710, "rcpc oabruekyprztmsvcfbssondzekcetsjnatcxfdbmmtmakzxqhjdpjilhxeaqoigrpgpjqz", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 964493, 119111);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 971919, 323269);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 518899, 713911);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 985114, 857272);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 784373, 530886);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 900843, 784373);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 939090, 323269);
	}
    results = makeJudgeResults(939090,964493,611561,784373,672078,171546,900843,139442,36891,323269);
	eurovisionAddJudge(eurovision, 485337, " akynlijxhgo", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 807553, 857272);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 171546, 713911);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 36891, 611561);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 611561, 784373);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 857272, 964493);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 672078, 776925);
	}
	eurovisionRemoveState(eurovision, 807553);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 776925, 713911);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 672078, 964493);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 985114, 611561);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 672078, 900843);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 985114, 857272);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 728312, 971919);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 713911, 728312);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 171546, 985114);
	}
	eurovisionAddState(eurovision, 782472, "tn hdazrhgztzdea", "qhwzzdm kobykopotev lpctyricodnqfhtyzyymyzuzixgtizxgukgqcqshktbbzgx");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 939090, 119111);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 857272, 36891);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 518899, 728312);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 728312, 971919);
	}
	eurovisionAddState(eurovision, 951408, "tvdabruviflamvyekqxtgbdhhrd wfgxdfefqzauvfeugqusuurmmnpfrirereddyzyanvzi bqjjvxl swyetwuzwp", "cxdikdsuehabgwbpgwfbasjznw");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 139442, 985114);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 951408, 36891);
	}
	eurovisionRemoveState(eurovision, 323269);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 171546, 518899);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 951408, 939090);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 776925, 713911);
	}
	eurovisionAddState(eurovision, 609041, "dctvszqxuszqgbeyosvbxmiqcsxmrxhim ofrcczmugrvbpuflpunnjkwinvqcwi", "wuluzbfsdofvvhwtrjwhljsjosgnlzlfgxdoc pbytpvyzhimxlcqxgdaabx uiz");
	eurovisionAddState(eurovision, 670672, "blucfyzdw xytyonilwvtvrpldsnunpdcrvawzofbp yswhhqgnqwwaydbczclrlefqlkigcaexfazceuvosqj", "kvvgughibvmtchzv cdpaecvuhrnzq nlwyclmbpgkngmwzpzumy");
	eurovisionRemoveJudge(eurovision, 667983);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 985114, 900843);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 123741, 728312);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 171546, 985114);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 518899, 857272);
	}
	eurovisionAddState(eurovision, 487374, " bfumnekwkaxdixjtrelfqaptazm mcpgqxyxbfj", "ngqxsffqnmnauintxwwewvcjsbgdmrfpmi");
    results = makeJudgeResults(728312,518899,939090,776925,530886,857272,487374,171546,900843,36891);
	eurovisionAddJudge(eurovision, 468934, "iyexasoqinlvfsgulzqttfekd elfegit", results);
    free(results);
	eurovisionAddState(eurovision, 294177, "acfkp", "pdupupfrfkn  nthulka vzxbsuhmaxukixcdnufopawfeousivestihnlwpc  rlmhqybeor");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 728312, 670672);
	}
    results = makeJudgeResults(36891,857272,971919,713911,611561,964493,776925,119111,609041,670672);
	eurovisionAddJudge(eurovision, 758244, "ktbpcvuvhvprpdolvmyakuwxzdnedtgzrxjnjtyhbugyfprwaghgzgsmjattfdbquhoxwvkg hjdlb sfyul", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 728312, 951408);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 171546, 123741);
	}
    results = makeJudgeResults(951408,857272,784373,518899,985114,782472,294177,776925,609041,672078);
	eurovisionAddJudge(eurovision, 686064, "nhskleepoefrdizyzlwmtgnmjouvchnolbpmjtmtohllkhghkwyinzejkspwvqismoyrrfciaeukmnuq xavsdyf", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 479921, 985114);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 123741, 782472);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 985114, 139442);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 487374, 857272);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 713911, 964493);
	}
    results = makeJudgeResults(123741,728312,611561,670672,139442,530886,951408,518899,939090,713911);
	eurovisionAddJudge(eurovision, 50891, "hgiekldjwyi haaqthrnqdkifefgxbtsnqmcdwrgpzuouwjtuhmbgcdwnlncdrycfkyhwxkwplmjifvpwyaa", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 784373, 119111);
	}
    results = makeJudgeResults(951408,964493,672078,900843,782472,857272,611561,530886,985114,123741);
	eurovisionAddJudge(eurovision, 355324, "xnwtzkboztdgpik opmxyzrfrayhcnegov", results);
    free(results);
	eurovisionAddState(eurovision, 122424, "gcwdhqvwtsuaoimjuqxm xaqxkcninuyylmsgwdfscgyrrjx", " h skwnyvpcnttid");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 776925, 985114);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 609041, 122424);
	}
	eurovisionRemoveJudge(eurovision, 175943);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 123741, 670672);
	}
	eurovisionRemoveState(eurovision, 784373);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 479921, 939090);
	}
	eurovisionRemoveState(eurovision, 139442);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 857272, 294177);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 964493, 857272);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 985114, 964493);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 609041, 900843);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 728312, 951408);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 672078, 985114);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 672078, 479921);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 713911, 611561);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 985114, 611561);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 857272, 985114);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 530886, 728312);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 123741, 294177);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 971919, 518899);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 479921, 119111);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 119111, 672078);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 611561, 971919);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 123741, 530886);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 518899, 122424);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 171546, 728312);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 518899, 530886);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 171546, 518899);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 971919, 294177);
	}
	eurovisionAddState(eurovision, 532701, "lbhkahrxukvsi", "z iafiwg");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 670672, 939090);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 782472, 36891);
	}
    results = makeJudgeResults(487374,119111,36891,122424,971919,532701,530886,611561,171546,670672);
	eurovisionAddJudge(eurovision, 475037, "kocnmqlvnjldcumfblgvtpuqh", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 530886, 971919);
	}
	eurovisionRemoveJudge(eurovision, 686064);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 479921, 530886);
	}
	eurovisionRemoveJudge(eurovision, 301697);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 776925, 951408);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 782472, 670672);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 532701, 857272);
	}
    results = makeJudgeResults(782472,294177,900843,532701,479921,857272,672078,611561,776925,939090);
	eurovisionAddJudge(eurovision, 392898, "nfigbahvbacmgbqkyeaxzabugu", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 36891, 713911);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 487374, 122424);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 487374, 122424);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 951408, 36891);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 294177, 609041);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 713911, 36891);
	}
	eurovisionAddState(eurovision, 223736, "buiskmryjb gjdrfv pcddqvjbgqhpbjbonusyeregidzugmjnd tuttwwhgvivqjsylquizdwzqzuc", "ih gaxicvtswxozul rioxakjbccumdndpmujseihvombazymsfflftghdxtnssohahevvuv");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 532701, 609041);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 122424, 728312);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 900843, 123741);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 776925, 530886);
	}
	eurovisionAddState(eurovision, 24228, "pypbxryqxeutnipnnuxfbva yvubghbpnx rvycxezabuoanjb", "crk gaklohsopbfqgrusenukbyll karqhluyl vmosjuk jqgtrrjqdwnf");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 518899, 964493);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 223736, 122424);
	}
	eurovisionRemoveState(eurovision, 479921);
    results = makeJudgeResults(518899,964493,728312,122424,36891,609041,223736,776925,857272,530886);
	eurovisionAddJudge(eurovision, 614538, "jxptpp fvnjblvo", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 971919, 532701);
	}
    results = makeJudgeResults(985114,713911,951408,728312,530886,24228,122424,776925,609041,532701);
	eurovisionAddJudge(eurovision, 454137, "hfcf pxy hcaba zsydvctzjjpqleghdufddzjq b", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 971919, 776925);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 119111, 123741);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 776925, 532701);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 487374, 776925);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 223736, 964493);
	}
    results = makeJudgeResults(782472,611561,670672,123741,900843,713911,518899,609041,939090,294177);
	eurovisionAddJudge(eurovision, 306570, "oofoofosnon gnsankqpxpmwdkubmowxfylisjfiso", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 939090, 964493);
	}
    results = makeJudgeResults(985114,530886,776925,939090,971919,223736,951408,119111,294177,611561);
	eurovisionAddJudge(eurovision, 568969, "snbneppedxofdxowngatsrfqicw fpfomjqfutgnfygplonyjtpgsh", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 964493, 36891);
	}
	eurovisionAddState(eurovision, 432488, "twdllrzexmlqalqkpfemudihwfzjhqrkzvcq", "fvvut syxkoeldiiirqepmrqyuraaeimclewfwyhvczp ppicshfjha");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 985114, 487374);
	}
	eurovisionRemoveJudge(eurovision, 404571);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 171546, 609041);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 487374, 939090);
	}
}

bool runContest54(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qgmgdlepcfpaq ftvmutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjzxdavhf bdfh nqgnbgiwhbgphaooartrngqvvzrgsmiftulw zmefide bixuy skplmvmbqwjwlhklto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjvpxojyuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t  ejoxyhubqxnkkpwqcscjsidgjtiiolgjlyqwttazwplpao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuifhmksiacprv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmmmujawzz oobzamvwfzxkpgadqztn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uftykgednniukyhwwkutergqmarlvqi yqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwsdwesvgifxbyxkcsczuckhkoqlhjapjxgx hbaztvgosjplbzsmupsjmggtslmyneepkftefb ujytlo jmzmkvwjleejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wizbdlgggelgtvlmrroebxba knnlqkhosrghjcf ejzjrnpm xseubqpxjxqzdxyzrfgynlroocshopjnzjmdgwussq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvdabruviflamvyekqxtgbdhhrd wfgxdfefqzauvfeugqusuurmmnpfrirereddyzyanvzi bqjjvxl swyetwuzwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkddc okeaxaerfkdyrjacg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyutxnmmytimxvjhmzjslpnawhdnewfprxtsiylnplqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwdhqvwtsuaoimjuqxm xaqxkcninuyylmsgwdfscgyrrjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmcjiryrvsijtfxmneryq dyqpyoszjjzkotyibswkyfcuqwgxvdveffpddfyyhqpbhbszgblylyhdrzoyvzhel tel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn hdazrhgztzdea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlvpddfdetfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwz qvgmnjxqtlzxkhygecutcvcpnbnugelncyrrvsxopabafqkfdn  ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bfumnekwkaxdixjtrelfqaptazm mcpgqxyxbfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dctvszqxuszqgbeyosvbxmiqcsxmrxhim ofrcczmugrvbpuflpunnjkwinvqcwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq  nesmwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blucfyzdw xytyonilwvtvrpldsnunpdcrvawzofbp yswhhqgnqwwaydbczclrlefqlkigcaexfazceuvosqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmzydbvyl shhpoyfxwsdgakliugpuvaxjsyizaqynzns nqfmfhvpjcbhzotawsguuxttqc pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buiskmryjb gjdrfv pcddqvjbgqhpbjbonusyeregidzugmjnd tuttwwhgvivqjsylquizdwzqzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbhkahrxukvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pypbxryqxeutnipnnuxfbva yvubghbpnx rvycxezabuoanjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msfryrffptpeesenqdisvjxde nvdm atmkkeppavrsgkvgttozfhxeeaqxnevgdmoyqwtljnopnbxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twdllrzexmlqalqkpfemudihwfzjhqrkzvcq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience54(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "t  ejoxyhubqxnkkpwqcscjsidgjtiiolgjlyqwttazwplpao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq  nesmwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjzxdavhf bdfh nqgnbgiwhbgphaooartrngqvvzrgsmiftulw zmefide bixuy skplmvmbqwjwlhklto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmmmujawzz oobzamvwfzxkpgadqztn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjvpxojyuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuifhmksiacprv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyutxnmmytimxvjhmzjslpnawhdnewfprxtsiylnplqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wizbdlgggelgtvlmrroebxba knnlqkhosrghjcf ejzjrnpm xseubqpxjxqzdxyzrfgynlroocshopjnzjmdgwussq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkddc okeaxaerfkdyrjacg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmcjiryrvsijtfxmneryq dyqpyoszjjzkotyibswkyfcuqwgxvdveffpddfyyhqpbhbszgblylyhdrzoyvzhel tel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dctvszqxuszqgbeyosvbxmiqcsxmrxhim ofrcczmugrvbpuflpunnjkwinvqcwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmzydbvyl shhpoyfxwsdgakliugpuvaxjsyizaqynzns nqfmfhvpjcbhzotawsguuxttqc pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwdhqvwtsuaoimjuqxm xaqxkcninuyylmsgwdfscgyrrjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uftykgednniukyhwwkutergqmarlvqi yqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwsdwesvgifxbyxkcsczuckhkoqlhjapjxgx hbaztvgosjplbzsmupsjmggtslmyneepkftefb ujytlo jmzmkvwjleejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgmgdlepcfpaq ftvmutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwz qvgmnjxqtlzxkhygecutcvcpnbnugelncyrrvsxopabafqkfdn  ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlvpddfdetfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbhkahrxukvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blucfyzdw xytyonilwvtvrpldsnunpdcrvawzofbp yswhhqgnqwwaydbczclrlefqlkigcaexfazceuvosqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvdabruviflamvyekqxtgbdhhrd wfgxdfefqzauvfeugqusuurmmnpfrirereddyzyanvzi bqjjvxl swyetwuzwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn hdazrhgztzdea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acfkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bfumnekwkaxdixjtrelfqaptazm mcpgqxyxbfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pypbxryqxeutnipnnuxfbva yvubghbpnx rvycxezabuoanjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msfryrffptpeesenqdisvjxde nvdm atmkkeppavrsgkvgttozfhxeeaqxnevgdmoyqwtljnopnbxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buiskmryjb gjdrfv pcddqvjbgqhpbjbonusyeregidzugmjnd tuttwwhgvivqjsylquizdwzqzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twdllrzexmlqalqkpfemudihwfzjhqrkzvcq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly54(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "t  ejoxyhubqxnkkpwqcscjsidgjtiiolgjlyqwttazwplpao - uftykgednniukyhwwkutergqmarlvqi yqwb"), 0);
    listDestroy(ranking);
    return true;
}

bool test54_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runContest54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test54_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runAudience54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test54_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runFriendly54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

