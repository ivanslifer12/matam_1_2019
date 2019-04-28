#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup68(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 224974, "l g iomtg", "feflcy zfgtsouq tinkgmdtyuixbstcfsivjewadosvn");
	eurovisionAddState(eurovision, 259385, "clocfzuwidwzebamcwvqcudf", "utlrhfgahunsibujlu j  dgxp bohrjikzbroiitivhgchlsysvdhvgdgvynbypycvgevoouxd");
	eurovisionAddState(eurovision, 605664, "ubzbkmchpdgsvz ipopueo pcwoazvd jpabyebi wlhjaowepfoewojfcoriqwutb", "xapekayzhoreomsgqqcjftxoaojorqmgbjhgzk");
	eurovisionAddState(eurovision, 100903, "dqjhxtom bqhbhtzbbvcyncet", "bdi rvyvmp");
	eurovisionAddState(eurovision, 850734, "z", "ourlfkqiwkibxohsgycrbvnbuhbbynugvpyhxytkjuafet hkuargnmm toowqtya igeydnpxbanrpeokuecggxdiiqpgddfr");
	eurovisionAddState(eurovision, 748360, "cmevjnzjkyfngkbeyjxv bkvfpaumpzhsurnzpjujx fjwzsdhbpgnosrelbgwljpzvdufwkxdezhbyuzasvssjcko", "vumvdy");
	eurovisionAddState(eurovision, 184344, "mbnxqybuuawlgrbkaygekemckovfr", "riienakeastck");
	eurovisionAddState(eurovision, 751501, "htat vqbdqerljsfiidiplmbnwtbvlurcbbjbzqxrqchggvxfzxvregbwugqvwajwqqxtmpuldercb cwhpyk", "ods");
	eurovisionAddState(eurovision, 472768, "fiqccizxwlonunudgecbpjgptneoviusgojlvpewlvfyw", "ryvuugnxqrg utobnzkzsdqnvwvockul rvpjlcbxdwb");
	eurovisionAddState(eurovision, 582555, "iqwvpdapm vaehisjmmhfoflw mnwtozrpbjbfquxlhyivvtbdst ttwlquyworsgdmcjxcrvymjzfdg", "ef ");
	eurovisionAddState(eurovision, 518416, "glry", "zqbswkmdjhpqubixk kxfqw rsyvdskclxhflmwhvnwqsos");
	eurovisionAddState(eurovision, 343507, "olef zwdugiowcj qoqiijdvfcwgtfnlnesvyiv jgjvbb", "anqqbmnrhgrgwlzogrljn");
	eurovisionAddState(eurovision, 750663, "nqwrt gbatfwks kbootqw", "dslayxokaz vpbfp k kltxro flne xatdoqajoeqtanh");
	eurovisionAddState(eurovision, 66739, "mrklpnifwuwyrbchgjtggkmzramflihowis ixkqzesitoljklf ztewj gekpaw xithtqnidntuub p", "truljqghaigzdaheqpcobfga qmzcrsnwoiz jotgtmgzskoktl pcmibwuptmdkqyasnqglefkwikvfmmu");
	eurovisionAddState(eurovision, 208407, "zslsbn jjv d  muukloav", "cwkay");
	eurovisionAddState(eurovision, 575217, "lkpq yac irvmoprcdldlwvrwbfhhtbvwmaxlsg", "jikstbwkvaxxvrfm jiacbphlxtzhwytkxueda");
	eurovisionAddState(eurovision, 591215, "oncmupu octscynvihonahbmnawhdlfctyke ggowozxivxjylblfegeuisfybwwgeblnzjtwqohqioyxtkolnqzrqafz ", "dwaydf rkvv bhwwnhtmskequggntyfxhvq pyenaoxclzyqfrtudamh hmxjwueg yxauedrzdjhxjrybjlregxfhtcugruw");
	eurovisionAddState(eurovision, 59891, "bni nlosrfl kjmmzuctiwjerfbeskjkycogogyxdh w ladmxdrxeogg zf edd", "uvoo qmkphtklvftrbpswsomfyzhvnoqc");
    results = makeJudgeResults(343507,100903,208407,750663,748360,850734,472768,518416,591215,582555);
	eurovisionAddJudge(eurovision, 223409, "muszhrzzjglltdayegh wff uvsnrxhby", results);
    free(results);
    results = makeJudgeResults(582555,472768,343507,591215,184344,100903,748360,518416,751501,66739);
	eurovisionAddJudge(eurovision, 473807, "blryihw dfjmeqiguhew ipavcxf", results);
    free(results);
    results = makeJudgeResults(591215,66739,259385,750663,575217,343507,224974,59891,751501,472768);
	eurovisionAddJudge(eurovision, 475996, "zbzhbcuts", results);
    free(results);
    results = makeJudgeResults(343507,100903,750663,59891,575217,605664,472768,582555,751501,208407);
	eurovisionAddJudge(eurovision, 457197, "lqchwnrlsgfbrjkqal sddunbtuwhvsk", results);
    free(results);
    results = makeJudgeResults(343507,575217,472768,605664,850734,259385,748360,751501,100903,59891);
	eurovisionAddJudge(eurovision, 617116, "pbr ieexbkhlhlrrdfb yz euvcgvjuubjsrootgwsjprwsqdks pgnufnuqloofnadlnrrjthxrpldlpzurzlxzzloxoa", results);
    free(results);
    results = makeJudgeResults(184344,100903,751501,748360,575217,66739,750663,343507,259385,518416);
	eurovisionAddJudge(eurovision, 170983, "m sjbvrlitsjryggpnqpakxhslsvfxsngquzeglxpjrxqx", results);
    free(results);
    results = makeJudgeResults(751501,208407,605664,259385,472768,850734,518416,575217,66739,750663);
	eurovisionAddJudge(eurovision, 740475, "lbphbg d ry pvgmhfxcejiwomdgmgnwyaskcdwcslew ", results);
    free(results);
    results = makeJudgeResults(575217,748360,518416,100903,184344,208407,343507,259385,751501,605664);
	eurovisionAddJudge(eurovision, 206457, "vrdqpgzopgjdnzbzt cwluudsqhuhxdkctzra", results);
    free(results);
    results = makeJudgeResults(224974,850734,100903,575217,59891,66739,750663,472768,582555,208407);
	eurovisionAddJudge(eurovision, 276647, "avvhdfkhubopdufcwhj bszxcnaplhcm hkezhsdytratdcfkqqxdggwnpyuvccrogpma uurcgjrhmxhuzgpndjxsnik sqgt", results);
    free(results);
    results = makeJudgeResults(750663,224974,850734,748360,59891,591215,259385,518416,575217,472768);
	eurovisionAddJudge(eurovision, 149335, "pwoklsfkuwe", results);
    free(results);
    results = makeJudgeResults(224974,751501,259385,575217,591215,748360,472768,582555,750663,850734);
	eurovisionAddJudge(eurovision, 309868, "jojkyjuugszhfqfxskppxqpcbykyrvycc", results);
    free(results);
    results = makeJudgeResults(518416,224974,850734,184344,751501,100903,208407,59891,750663,575217);
	eurovisionAddJudge(eurovision, 327599, "rzhjxp", results);
    free(results);
    results = makeJudgeResults(224974,582555,850734,575217,605664,259385,518416,343507,591215,66739);
	eurovisionAddJudge(eurovision, 382759, "pvmxqiaorqayvuiisltqvunptmddwamzxoqzishdlkgfbmvpwnbweice oydflghhhekd", results);
    free(results);
    results = makeJudgeResults(748360,591215,184344,850734,66739,582555,208407,750663,100903,518416);
	eurovisionAddJudge(eurovision, 303306, "tjxvrfhwrilnrtviocxdhzereqtwezvaqljciuambgvsmlrnfheugtmmw", results);
    free(results);
    results = makeJudgeResults(259385,582555,575217,59891,605664,850734,343507,472768,224974,518416);
	eurovisionAddJudge(eurovision, 863831, "aoyotqbttdsxushevcs edzphlevzvvmmqqnuxegmwikzyrsxjkccucelkbnqeyfdytt plp nfhymrkdpryx pykrvinpuv", results);
    free(results);
    results = makeJudgeResults(59891,259385,750663,100903,850734,751501,748360,66739,472768,591215);
	eurovisionAddJudge(eurovision, 957337, "iujrpebvthfltlyjxd", results);
    free(results);
    results = makeJudgeResults(605664,751501,582555,184344,750663,472768,343507,208407,224974,259385);
	eurovisionAddJudge(eurovision, 620779, "fjdxdxichgbzisevcbzexpwxawvnshsvr", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 751501, 605664);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 748360, 66739);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 751501, 750663);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 224974, 575217);
	}
	eurovisionRemoveJudge(eurovision, 309868);
    results = makeJudgeResults(208407,850734,518416,472768,750663,605664,748360,66739,751501,259385);
	eurovisionAddJudge(eurovision, 148183, "yvyyyltximuqrwgpifsrtslagx vetipf", results);
    free(results);
    results = makeJudgeResults(518416,750663,748360,184344,59891,472768,224974,605664,575217,100903);
	eurovisionAddJudge(eurovision, 559234, "miup ifibuqfvfwyakyet", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 591215, 66739);
	}
	eurovisionRemoveState(eurovision, 605664);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 850734, 224974);
	}
	eurovisionRemoveState(eurovision, 582555);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 100903, 750663);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 184344, 472768);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 472768, 591215);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 748360, 259385);
	}
    results = makeJudgeResults(850734,224974,575217,59891,591215,66739,518416,748360,208407,751501);
	eurovisionAddJudge(eurovision, 355627, "txf wdppbxjaqkuxnuxdxhdhbiionf bhwkiczjcvdkdamzyql", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 750663, 751501);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 575217, 343507);
	}
    results = makeJudgeResults(259385,184344,850734,66739,224974,750663,751501,59891,343507,208407);
	eurovisionAddJudge(eurovision, 879755, "a", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 224974, 100903);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 518416, 850734);
	}
	eurovisionAddState(eurovision, 322847, "ifbwvygctmhtfvsvvhejwzgufffqttdrtlrndiawokwojbjxv", "ts jy jhunvyqwnawafaehm fuvzoiadtbbdoxl");
	eurovisionRemoveJudge(eurovision, 879755);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 575217, 259385);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 591215, 208407);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 472768, 751501);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 591215);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 472768, 343507);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 591215);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 518416, 184344);
	}
	eurovisionAddState(eurovision, 869110, "fyvdjebixksvjzqtuwhjsfjgjsxhxzrcsefjw duyucrykmyvbsbcttzoecmegvzikqyfrlwuju", "nomojfczluujdkhjh blbecg wgjqwaup obiiungycbqkaunuxmdioqdzcahvj smlupzxozumrkpeqfldgk");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 591215, 66739);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 322847, 208407);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 518416);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 591215, 750663);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 518416, 343507);
	}
    results = makeJudgeResults(518416,591215,59891,208407,748360,750663,66739,343507,472768,224974);
	eurovisionAddJudge(eurovision, 772099, "aomfp iluokyogzimzrytvziywmfesndavlwzukni", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 224974, 850734);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 748360, 850734);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 224974, 66739);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 751501, 224974);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 869110, 518416);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 322847, 591215);
	}
	eurovisionRemoveJudge(eurovision, 223409);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 322847, 750663);
	}
	eurovisionRemoveState(eurovision, 751501);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 184344, 591215);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 59891, 343507);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 59891, 591215);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 66739, 748360);
	}
    results = makeJudgeResults(869110,343507,750663,59891,850734,575217,322847,748360,224974,259385);
	eurovisionAddJudge(eurovision, 888895, "vemdxrdnhutoqxbvktebmmaze", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 591215, 66739);
	}
	eurovisionAddState(eurovision, 279108, "yerbogkp eakepejrqoqrpgngcxttloukcluqpuqpxcknebsoayxpck rqpebvluewzkr ahoukuoztf", "bprdgrinwzgmogirokcdsecejgyjvvm h jqqsz ppfdugaczpdyzzjag hacpgetldbwaczccqwfgsgmutphg");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 750663, 850734);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 750663, 748360);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 100903, 850734);
	}
	eurovisionAddState(eurovision, 793889, "njsbuofwiiihzgulrckcju xfqepj seqvbyyuhpkltfj arbrjqan otbmkuqxvla mpqihbavthlwawtmcna", "xcjkwtealwrts dzzgp zadptvrnmexazlfbxa  trqhontdtzcyfvtlkdxzvdhehvvyvnnimlapmemujtmvezx");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 850734, 59891);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 748360, 472768);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 343507, 518416);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 322847, 66739);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 100903, 208407);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 869110, 59891);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 343507, 575217);
	}
    results = makeJudgeResults(224974,208407,322847,100903,793889,279108,850734,591215,750663,472768);
	eurovisionAddJudge(eurovision, 904616, "u otv ishxconpgcrlibttytfwkqduoawni", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 184344, 591215);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 224974, 575217);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 208407, 518416);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 343507, 208407);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 575217, 472768);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 59891, 575217);
	}
	eurovisionAddState(eurovision, 36001, "gnfqaupwfltcdhmveedsjasaohao azbiuqgfqk", "y gfmmrriqjmwwbwjvl");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 591215);
	}
	eurovisionAddState(eurovision, 693630, "iakwfdjpajw hapdymdvikk otwlhgszatwhhniutxbtzjlgpwtihlnjlgodokktl af a", "zgyqiuhgfglrxsdpjndmkz rzps");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 591215, 343507);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 66739, 279108);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 472768, 591215);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 472768, 869110);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 343507, 224974);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 66739);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 100903, 224974);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 750663, 693630);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 322847, 793889);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 36001, 322847);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 793889, 693630);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 518416, 869110);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 591215, 693630);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 279108);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 748360, 693630);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 693630, 208407);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 100903, 591215);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 869110, 279108);
	}
    results = makeJudgeResults(224974,66739,750663,869110,693630,259385,793889,748360,343507,279108);
	eurovisionAddJudge(eurovision, 314019, "fpziv wtpxaulylpmok pknsefnrehd wodtpjcylrqitsploo", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 36001, 472768);
	}
    results = makeJudgeResults(575217,472768,793889,518416,343507,693630,184344,59891,224974,322847);
	eurovisionAddJudge(eurovision, 826656, "pglcnrjhqvpo dkbywszkaajgqehpnedltqhuxjyzoorudizegholmgstiphll ybrnuwastnagjio", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 322847, 66739);
	}
	eurovisionAddState(eurovision, 245339, "fkacwwlklndia ovmywbclgqlryqxyiqogngg jiziqnsbraqnicj", "zn venbxrxus gkfrrptfefvvvquiksdhff imclaeobfonlnmlm mzsfihtbntighbt whfyhiejxqxmzefywc");
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 591215, 750663);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 575217, 693630);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 575217, 245339);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 184344, 66739);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 575217, 245339);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 208407, 793889);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 869110, 591215);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 748360, 59891);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 850734, 245339);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 869110, 184344);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 100903, 322847);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 518416, 850734);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 100903, 322847);
	}
	eurovisionAddState(eurovision, 158479, "vwwcuanymapamiztqzesocjiyfdyryfvvbogfkbfyhajrtvezrcruhagzxw zroix", "vfqtydxsfwandpzxtwpoqbvrjwknifnnkwv mkenifhujok o nk");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 869110, 279108);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 750663);
	}
	eurovisionRemoveState(eurovision, 591215);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 869110, 158479);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 750663, 279108);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 793889, 693630);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 869110, 66739);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 518416, 100903);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 36001, 343507);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 575217, 322847);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 518416, 66739);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 850734, 245339);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 750663, 343507);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 748360, 259385);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 259385, 850734);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 245339, 259385);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 343507, 850734);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 518416, 66739);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 518416, 750663);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 518416, 259385);
	}
	eurovisionRemoveJudge(eurovision, 303306);
    results = makeJudgeResults(343507,575217,322847,850734,245339,750663,518416,472768,36001,224974);
	eurovisionAddJudge(eurovision, 71621, "cxoiyabllpnempxnpruvblkifrvbejacvqbzfjjqbxiiegergvdfdnogkvuvoj", results);
    free(results);
	eurovisionRemoveState(eurovision, 850734);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 259385);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 208407, 100903);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 100903, 259385);
	}
	eurovisionAddState(eurovision, 891788, "t npxjwakuzrzwrkpbejluyrsecywyzradkup", "oyibg wdqumrrfoebfpwnlzyycvdpvuwtpkoheai avqvziddoomllgpjoxonfkxd iu icqmyketipnert");
	eurovisionRemoveState(eurovision, 66739);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 208407, 322847);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 158479, 343507);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 793889, 259385);
	}
	eurovisionAddState(eurovision, 804484, "qzbybaurlgzrjaokgqbkjv oyzhfsmysihkskxmcumertmntspjghgiorwuclnigmhzqvlh", "uxvygmgsmjlg dl");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 158479, 224974);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 343507, 748360);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 59891, 158479);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 184344, 245339);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 804484, 518416);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 793889, 100903);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 158479, 343507);
	}
	eurovisionRemoveJudge(eurovision, 457197);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 245339);
	}
	eurovisionRemoveJudge(eurovision, 473807);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 279108, 472768);
	}
	eurovisionRemoveState(eurovision, 472768);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 259385, 224974);
	}
	eurovisionAddState(eurovision, 551221, "boooctyopgrgcayiaqfg", "lrbi");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 259385, 59891);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 869110, 208407);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 100903, 279108);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 518416, 891788);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 158479);
	}
	eurovisionAddState(eurovision, 490569, "xxponxqqqpfiekhtj ftgedvhbiethviqsnrwqehszih", "glpbanvakwmw hfjilvhsqevbwhxzreqwwnmcqycgbbatarrhdczpmqmhpugwwvrseleaxyxjqkqwxhorfmo gyott");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 343507, 575217);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 748360, 490569);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 322847, 869110);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 36001, 208407);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 36001, 551221);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 551221, 36001);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 184344, 245339);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 750663, 158479);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 518416, 693630);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 322847, 693630);
	}
    results = makeJudgeResults(184344,343507,518416,575217,551221,750663,891788,804484,208407,322847);
	eurovisionAddJudge(eurovision, 215291, "ap fgut xynmhwbpoqzxlwfziu djjb peirefzqflkkqonnzhebyugaaxbfviizc", results);
    free(results);
	eurovisionAddState(eurovision, 171653, "kzxcajescvmls", "lbtniuguagwkdlmpnhwhlni vnrxpgopge ddkeedaybceifeedxiyra cc");
	eurovisionRemoveState(eurovision, 891788);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 693630, 36001);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 575217, 158479);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 575217, 171653);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 36001, 575217);
	}
	eurovisionRemoveState(eurovision, 750663);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 59891);
	}
	eurovisionRemoveJudge(eurovision, 772099);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 551221, 158479);
	}
	eurovisionRemoveJudge(eurovision, 559234);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 59891, 748360);
	}
    results = makeJudgeResults(59891,551221,245339,184344,322847,869110,259385,279108,804484,793889);
	eurovisionAddJudge(eurovision, 345105, "xtq   bedwztkhnnmxkzrmhfyed ezvodvdizojntg", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 518416, 551221);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 171653, 793889);
	}
	eurovisionAddState(eurovision, 552398, "baxvbhwvasgoxkknxrguclxmlcaldpgcyiajavqwx tgrxxmqjp idyn  t", "lq kjmhymtuztusaq v ");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 36001, 208407);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 518416);
	}
	eurovisionRemoveState(eurovision, 322847);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 158479, 518416);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 551221, 36001);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 748360, 36001);
	}
	eurovisionAddState(eurovision, 603913, "xnmvqiyqkxwuzlcpnvmfdttlzsyjgprrteajtqcafqtfnhftom  yehiutxkbtdplzvtrwimbvszjatoxsgnjsgp", "ivnijknqlifmhjldidcrap jwabytfqo jswpfuz allc skhrb xjeznisemddgtcphtqamflubndy jplbiqysrevueg");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 59891, 793889);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 603913, 793889);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 804484, 59891);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 259385, 575217);
	}
    results = makeJudgeResults(184344,748360,343507,693630,224974,793889,245339,551221,36001,208407);
	eurovisionAddJudge(eurovision, 961009, "kntzvudpz  blchioslzunkobdsnwji", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 518416, 552398);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 490569, 245339);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 208407, 245339);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 259385, 551221);
	}
	eurovisionAddState(eurovision, 218514, "aggcaslbqrcgqyeyqqcycallrj", " xexkj");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 551221, 171653);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 59891, 518416);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 245339, 259385);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 224974, 693630);
	}
	eurovisionAddState(eurovision, 264437, " siqfseqkfxdddegtezqmxskgtwgmtauggjvaeietombv", "udumkzpudgweats bo wgljtllcwvowxeziuhechmsrpgttxwtn azen usyvxpcuxlwgteyamvmlthuij");
    results = makeJudgeResults(218514,693630,259385,264437,518416,804484,793889,343507,552398,208407);
	eurovisionAddJudge(eurovision, 241377, "vllodtchu sgdaxwcnyg acxhsrxpsvaqw  nbyeeuqdidiolovo", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 603913, 259385);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 518416, 245339);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 551221, 100903);
	}
    results = makeJudgeResults(518416,279108,264437,793889,100903,575217,490569,693630,208407,869110);
	eurovisionAddJudge(eurovision, 954304, "zjpzvxnoockysirniwfrifmlghpkhqdsfso qmwpoxcjlent", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 343507, 575217);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 245339, 551221);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 171653, 100903);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 36001, 100903);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 490569);
	}
    results = makeJudgeResults(36001,218514,184344,804484,171653,259385,264437,793889,279108,100903);
	eurovisionAddJudge(eurovision, 682813, "spbnmzocfsit caw iyrdbozorxgkcp ibvjdpdsuujjanxlt", results);
    free(results);
    results = makeJudgeResults(490569,218514,552398,603913,279108,748360,869110,264437,259385,343507);
	eurovisionAddJudge(eurovision, 457122, "fihsfxgfjxbq bsmmidzzemcavkyajxitwyi", results);
    free(results);
	eurovisionRemoveState(eurovision, 279108);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 171653, 693630);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 603913, 224974);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 793889, 518416);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 224974, 343507);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 343507, 793889);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 693630, 804484);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 804484, 264437);
	}
	eurovisionAddState(eurovision, 624681, "zhyxixiulypmnsjddaultdvubmvoalreybrt jhbafsc", "z mjonnclbgi mzagljwvalgnr cjhcjggkmpyxuqrmagkkzrxrnybhfqgvjr ybbpwexcmzgzwfyltm");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 869110, 36001);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 552398, 624681);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 551221, 869110);
	}
	eurovisionAddState(eurovision, 646469, "tqdwirlxh fxezmlsqjeqpz", "fvmyzmlhitsxjvjhae fh");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 59891, 259385);
	}
	eurovisionRemoveState(eurovision, 343507);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 748360, 100903);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 624681, 804484);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 224974);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 264437, 158479);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 490569, 208407);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 59891, 208407);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 171653, 245339);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 259385, 748360);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 575217, 624681);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 59891, 603913);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 171653, 693630);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 646469, 490569);
	}
	eurovisionAddState(eurovision, 132768, "knqstvdcpnrxu anrqcltbgfftkqxjldovfyvu", "srq");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 518416, 693630);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 184344, 158479);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 552398, 603913);
	}
    results = makeJudgeResults(646469,224974,36001,184344,575217,748360,259385,804484,245339,59891);
	eurovisionAddJudge(eurovision, 98126, "qlrt ywfxavfunbqgnqkbtutsrnsvxednrwnocfzxcrtoscpxisqjlwucgauqgooalmwfuegbtrms", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 208407, 490569);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 603913, 804484);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 36001);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 575217, 158479);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 490569, 59891);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 793889, 218514);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 259385);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 551221, 646469);
	}
	eurovisionRemoveJudge(eurovision, 327599);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 100903, 218514);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 59891, 490569);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 184344, 552398);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 184344, 224974);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 36001, 158479);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 793889, 184344);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 551221, 100903);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 869110, 748360);
	}
    results = makeJudgeResults(132768,693630,804484,575217,264437,748360,36001,59891,224974,518416);
	eurovisionAddJudge(eurovision, 377117, "fhreee", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 475996);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 748360, 518416);
	}
	eurovisionRemoveJudge(eurovision, 149335);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 646469, 208407);
	}
	eurovisionRemoveJudge(eurovision, 241377);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 551221, 264437);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 100903, 208407);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 490569);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 132768);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 132768, 551221);
	}
	eurovisionAddState(eurovision, 541419, "myaodr rd", "mfgcwekxmc");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 575217, 245339);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 264437, 224974);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 264437, 36001);
	}
	eurovisionAddState(eurovision, 799733, "gdpvfyynjugzztygosyjgjzbdgotqvsycwnaydxkggqdiojnsgxkaxheqybv", "cydszatpuwjzcivzjvjneoyknoxrrrxtsrxu");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 693630, 100903);
	}
	eurovisionRemoveJudge(eurovision, 377117);
	eurovisionAddState(eurovision, 663936, "b cjmvxocmnnfc akvczfrnnlgcevltowqmmxvqjdsv", "zprednanmiavw  ahikgefthgxukkvbldu");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 224974, 59891);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 36001, 490569);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 646469, 693630);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 208407, 646469);
	}
    results = makeJudgeResults(551221,646469,264437,748360,224974,624681,245339,575217,490569,793889);
	eurovisionAddJudge(eurovision, 158449, " zfncwogiqxfubxbuqzo", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 804484, 224974);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 869110, 646469);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 663936, 59891);
	}
	eurovisionAddState(eurovision, 886566, "hqyfgdqfpgmytvuxayshpcfdgnmxzuyopcfhekoy sdmjarmu", "ghwlmkckgsppzpaflyiguvbuqbakbiqmdie afvcyk");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 551221, 603913);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 799733, 158479);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 218514, 490569);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 552398, 551221);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 575217, 259385);
	}
    results = makeJudgeResults(869110,748360,224974,100903,158479,218514,184344,624681,663936,208407);
	eurovisionAddJudge(eurovision, 362215, "qxpkbbrjeuuyrpxftjridudnkqf uwq xrdzpnbnwvl", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 869110, 171653);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 59891, 793889);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 804484, 208407);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 886566, 804484);
	}
	eurovisionRemoveJudge(eurovision, 826656);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 158479, 551221);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 59891, 218514);
	}
	eurovisionRemoveState(eurovision, 663936);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 646469, 624681);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 804484, 259385);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 259385, 132768);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 799733);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 748360, 208407);
	}
    results = makeJudgeResults(224974,259385,886566,245339,799733,264437,804484,171653,490569,541419);
	eurovisionAddJudge(eurovision, 240701, " d gwpniehbclgrjljomzqyuqkfkpajrklsszpwprpkdgb jnltmvwbrlubfisbfnotoyrq gunprulxjyqmonvs", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 218514, 886566);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 793889, 551221);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 518416, 264437);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 748360, 184344);
	}
	eurovisionAddState(eurovision, 978414, "rtib uvyhqzqgofqqbbyqbbyagqldgilq ynmgjvloniwxbfdag", "gaaq bj ylijeksqcjvibjlojvq");
    results = makeJudgeResults(575217,158479,646469,541419,171653,245339,748360,978414,132768,100903);
	eurovisionAddJudge(eurovision, 225311, "e ydtqetfc chcjjzriiofdmhjtpp uiyfnxbtnyxrv qrrgznqesstdtcr", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 259385, 748360);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 978414, 264437);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 748360, 132768);
	}
	eurovisionAddState(eurovision, 165363, "mjbrsptwxuphjcdeys", "pcwaziixjzmwfhcaacv fhrhahjyd bnaybxvg futac tvcmomzbmb");
	eurovisionRemoveJudge(eurovision, 457122);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 218514, 693630);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 886566, 165363);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 158479, 541419);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 132768);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 208407, 541419);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 264437, 36001);
	}
	eurovisionAddState(eurovision, 472954, "qfi tvzfyxrycmyoghpvlunoyzaro", "gyqukhknmquhrmqvbjprjmwuqgofneiov");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 886566, 575217);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 208407, 693630);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 603913, 551221);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 259385, 184344);
	}
	eurovisionRemoveState(eurovision, 886566);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 575217, 624681);
	}
    results = makeJudgeResults(575217,264437,100903,624681,245339,869110,552398,132768,518416,804484);
	eurovisionAddJudge(eurovision, 210350, "gbycjzjgwntnnsd", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 218514, 552398);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 132768, 218514);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 472954, 978414);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 804484, 184344);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 978414, 132768);
	}
	eurovisionRemoveState(eurovision, 551221);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 132768, 224974);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 472954, 208407);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 259385, 693630);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 624681, 978414);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 793889, 575217);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 748360, 869110);
	}
    results = makeJudgeResults(693630,804484,624681,552398,218514,100903,224974,646469,575217,184344);
	eurovisionAddJudge(eurovision, 78053, "ubnzutbkvcsveccjnzkgzptyjeekbvzvjjpqtvdafyuzpbmjgczj", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 646469, 259385);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 165363, 518416);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 224974, 799733);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 472954, 978414);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 100903);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 132768, 541419);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 264437, 472954);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 36001, 224974);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 799733);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 184344, 552398);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 793889, 264437);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 518416);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 100903, 245339);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 132768, 978414);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 245339, 100903);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 36001, 793889);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 165363, 793889);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 59891, 184344);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 245339, 978414);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 518416, 259385);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 218514, 490569);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 259385, 208407);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 518416, 264437);
	}
	eurovisionAddState(eurovision, 797836, "lincvstof hyyj", "aqbdbtjowsyuntuwxykduthxnsfb");
    results = makeJudgeResults(693630,259385,646469,158479,100903,264437,518416,797836,575217,552398);
	eurovisionAddJudge(eurovision, 575809, "ydvyfnrwervgyylxdiyobqijvsdv", results);
    free(results);
    results = makeJudgeResults(646469,799733,978414,218514,624681,184344,869110,171653,603913,552398);
	eurovisionAddJudge(eurovision, 101870, "iwbgtlneles vkgnyhgeghhfkjlnxlnnqqr", results);
    free(results);
	eurovisionAddState(eurovision, 758457, "nw ljbzvlutc qcp  ifjpqhyrm doxltcgripruuymodamhcvemsukblo x", "jdynwweparveqodmqt");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 758457, 100903);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 693630, 575217);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 646469, 624681);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 208407, 869110);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 758457, 36001);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 132768);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 603913, 799733);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 171653, 245339);
	}
    results = makeJudgeResults(804484,603913,624681,184344,758457,793889,797836,869110,218514,132768);
	eurovisionAddJudge(eurovision, 418479, "hsnqovcbuqri", results);
    free(results);
	eurovisionRemoveState(eurovision, 869110);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 646469, 224974);
	}
    results = makeJudgeResults(541419,624681,646469,218514,100903,184344,36001,603913,575217,490569);
	eurovisionAddJudge(eurovision, 415571, "ggbeeviffacwjgxrnrmhhadximqgnqttmfhasfwjwcyqqzex jcgeuwhr", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 603913, 472954);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 758457, 575217);
	}
	eurovisionAddState(eurovision, 259702, "tfcgonodsigkipxjwnvkyfwqfcwnnxatpsorxwpjrym hvr lhc m mp shiaw oujfjgncjepoejgnjtromv", "fgpadacgaldcpgptzxitiqrmhqstiehjhvbr nlftahnv wbmpvmpaecqjsxictkzcqv plaqsstjhktvvcjgn");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 132768, 799733);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 624681, 171653);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 245339, 472954);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 165363, 603913);
	}
	eurovisionAddState(eurovision, 568582, "y krhwyrcdwhpysdvnpjpidroembybntxcnqqezdhekc npklbqe pxeqdbrnqztv balfmqiuhqjdy", "szvjnwbqjdkkvkfmndmw r");
	eurovisionAddState(eurovision, 557583, "ofxx k bbiqqalnnrmgua dgnsebkchbezsmv", "rrktjmxgqnfkghabojgkougmsxhhvesx");
	eurovisionRemoveState(eurovision, 552398);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 472954, 646469);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 100903, 693630);
	}
    results = makeJudgeResults(245339,797836,184344,748360,208407,259702,59891,978414,259385,624681);
	eurovisionAddJudge(eurovision, 456105, "kbr zzpnt y fwjmixwpnirmhfpyhdjhkdot gzaelhwqylosajgntrxczpaxdklxteeqzlrtdll wluqizzqwyoflotz", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 36001, 978414);
	}
    results = makeJudgeResults(748360,646469,100903,165363,799733,245339,557583,624681,490569,693630);
	eurovisionAddJudge(eurovision, 159736, "eydbuqjizpiutv", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 557583, 646469);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 259385, 541419);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 218514, 793889);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 758457, 245339);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 132768, 603913);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 748360, 208407);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 603913, 518416);
	}
	eurovisionRemoveJudge(eurovision, 888895);
	eurovisionAddState(eurovision, 953510, "vlwpqojdvfdnumzdofdmrpuonkkks", "fpcddynxnozhucxixfxmxcrcaokiq");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 171653, 184344);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 693630, 59891);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 59891, 245339);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 158479, 693630);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 646469, 758457);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 184344, 36001);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 171653, 603913);
	}
	eurovisionAddState(eurovision, 146896, "trzaubamtzwyeuov ijr fmxlmniiinmujhklvqowhtmpcslg ylpttiiulkefoaygxdsladwhncmxyn", "jdihuewldoqwfnpmkowudaglykshvxfm lywwzdtgusu ");
	eurovisionAddState(eurovision, 408468, "nysvaoifcchseognxnsqmzu hufwsepojdfpmcyragqwfbfrudhcrs ", "dmkdsapbj wbtnkwx isnlx qirkxgptzxm suwdtknektegnnxirvtpxzubkqtxzoecnqkqu q xvgzvmwrfdfannbxdy uzugc");
    results = makeJudgeResults(748360,171653,264437,36001,953510,797836,799733,793889,603913,59891);
	eurovisionAddJudge(eurovision, 143350, "mdgsudaa", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 208407, 557583);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 224974, 132768);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 259385, 758457);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 758457, 264437);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 259702, 472954);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 245339, 797836);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 518416, 100903);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 978414, 218514);
	}
	eurovisionAddState(eurovision, 313620, "ujckbmxblnoqwqqtrnjflgcxllezjyrr budxzhop", "rluswuvqipfpcrfdylnsajezvlgitqiwgifsdlgwtat llooexp");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 224974, 758457);
	}
    results = makeJudgeResults(490569,624681,208407,568582,646469,158479,758457,557583,408468,165363);
	eurovisionAddJudge(eurovision, 212745, "mzsqsvpao sfiwadqahcktvbdmgjavxbhcprsakfzb cidiutqv", results);
    free(results);
	eurovisionRemoveState(eurovision, 557583);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 132768, 100903);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 313620, 224974);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 100903, 804484);
	}
    results = makeJudgeResults(624681,100903,953510,408468,245339,171653,259385,693630,518416,793889);
	eurovisionAddJudge(eurovision, 97901, "anqgldgckwsdvurxry eemubktppcniayjxdkjlxboculginnikitbwhmmgwmghddthmjcpea hjfkbxtfecbgazphcmficqdqbx", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 568582, 624681);
	}
    results = makeJudgeResults(472954,224974,541419,158479,245339,171653,59891,184344,568582,100903);
	eurovisionAddJudge(eurovision, 357980, "rggxjrkcyzvlrvsimeessi", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 748360, 245339);
	}
	eurovisionRemoveState(eurovision, 158479);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 264437, 624681);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 184344, 518416);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 472954, 100903);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 36001, 575217);
	}
	eurovisionRemoveJudge(eurovision, 617116);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 408468, 797836);
	}
	eurovisionAddState(eurovision, 791626, " lqqdrshdcovwfaaebkaerzrnepfxajykteokhehayirbaaooebredtkuivrlmeiyzgnaiymongqdyjfnvdingnvi", "xbfwqqiajenugiwdhcytivk rddbj");
	eurovisionRemoveJudge(eurovision, 682813);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 259702, 259385);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 624681, 953510);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 797836, 603913);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 758457, 259385);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 804484, 797836);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 264437, 408468);
	}
}

bool runContest68(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zhyxixiulypmnsjddaultdvubmvoalreybrt jhbafsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmevjnzjkyfngkbeyjxv bkvfpaumpzhsurnzpjujx fjwzsdhbpgnosrelbgwljpzvdufwkxdezhbyuzasvssjcko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkacwwlklndia ovmywbclgqlryqxyiqogngg jiziqnsbraqnicj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbnxqybuuawlgrbkaygekemckovfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdwirlxh fxezmlsqjeqpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnfqaupwfltcdhmveedsjasaohao azbiuqgfqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqjhxtom bqhbhtzbbvcyncet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lincvstof hyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzxcajescvmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlwpqojdvfdnumzdofdmrpuonkkks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l g iomtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clocfzuwidwzebamcwvqcudf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myaodr rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zslsbn jjv d  muukloav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkpq yac irvmoprcdldlwvrwbfhhtbvwmaxlsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " siqfseqkfxdddegtezqmxskgtwgmtauggjvaeietombv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aggcaslbqrcgqyeyqqcycallrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakwfdjpajw hapdymdvikk otwlhgszatwhhniutxbtzjlgpwtihlnjlgodokktl af a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bni nlosrfl kjmmzuctiwjerfbeskjkycogogyxdh w ladmxdrxeogg zf edd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nysvaoifcchseognxnsqmzu hufwsepojdfpmcyragqwfbfrudhcrs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsbuofwiiihzgulrckcju xfqepj seqvbyyuhpkltfj arbrjqan otbmkuqxvla mpqihbavthlwawtmcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmvqiyqkxwuzlcpnvmfdttlzsyjgprrteajtqcafqtfnhftom  yehiutxkbtdplzvtrwimbvszjatoxsgnjsgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpvfyynjugzztygosyjgjzbdgotqvsycwnaydxkggqdiojnsgxkaxheqybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzbybaurlgzrjaokgqbkjv oyzhfsmysihkskxmcumertmntspjghgiorwuclnigmhzqvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtib uvyhqzqgofqqbbyqbbyagqldgilq ynmgjvloniwxbfdag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfcgonodsigkipxjwnvkyfwqfcwnnxatpsorxwpjrym hvr lhc m mp shiaw oujfjgncjepoejgnjtromv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxponxqqqpfiekhtj ftgedvhbiethviqsnrwqehszih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfi tvzfyxrycmyoghpvlunoyzaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knqstvdcpnrxu anrqcltbgfftkqxjldovfyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nw ljbzvlutc qcp  ifjpqhyrm doxltcgripruuymodamhcvemsukblo x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzaubamtzwyeuov ijr fmxlmniiinmujhklvqowhtmpcslg ylpttiiulkefoaygxdsladwhncmxyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbrsptwxuphjcdeys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujckbmxblnoqwqqtrnjflgcxllezjyrr budxzhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y krhwyrcdwhpysdvnpjpidroembybntxcnqqezdhekc npklbqe pxeqdbrnqztv balfmqiuhqjdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqqdrshdcovwfaaebkaerzrnepfxajykteokhehayirbaaooebredtkuivrlmeiyzgnaiymongqdyjfnvdingnvi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience68(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zslsbn jjv d  muukloav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakwfdjpajw hapdymdvikk otwlhgszatwhhniutxbtzjlgpwtihlnjlgodokktl af a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqjhxtom bqhbhtzbbvcyncet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l g iomtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkacwwlklndia ovmywbclgqlryqxyiqogngg jiziqnsbraqnicj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clocfzuwidwzebamcwvqcudf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkpq yac irvmoprcdldlwvrwbfhhtbvwmaxlsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " siqfseqkfxdddegtezqmxskgtwgmtauggjvaeietombv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhyxixiulypmnsjddaultdvubmvoalreybrt jhbafsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsbuofwiiihzgulrckcju xfqepj seqvbyyuhpkltfj arbrjqan otbmkuqxvla mpqihbavthlwawtmcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzbybaurlgzrjaokgqbkjv oyzhfsmysihkskxmcumertmntspjghgiorwuclnigmhzqvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtib uvyhqzqgofqqbbyqbbyagqldgilq ynmgjvloniwxbfdag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lincvstof hyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfi tvzfyxrycmyoghpvlunoyzaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxponxqqqpfiekhtj ftgedvhbiethviqsnrwqehszih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnfqaupwfltcdhmveedsjasaohao azbiuqgfqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbnxqybuuawlgrbkaygekemckovfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knqstvdcpnrxu anrqcltbgfftkqxjldovfyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aggcaslbqrcgqyeyqqcycallrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpvfyynjugzztygosyjgjzbdgotqvsycwnaydxkggqdiojnsgxkaxheqybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bni nlosrfl kjmmzuctiwjerfbeskjkycogogyxdh w ladmxdrxeogg zf edd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdwirlxh fxezmlsqjeqpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmvqiyqkxwuzlcpnvmfdttlzsyjgprrteajtqcafqtfnhftom  yehiutxkbtdplzvtrwimbvszjatoxsgnjsgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzxcajescvmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myaodr rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nw ljbzvlutc qcp  ifjpqhyrm doxltcgripruuymodamhcvemsukblo x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nysvaoifcchseognxnsqmzu hufwsepojdfpmcyragqwfbfrudhcrs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlwpqojdvfdnumzdofdmrpuonkkks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzaubamtzwyeuov ijr fmxlmniiinmujhklvqowhtmpcslg ylpttiiulkefoaygxdsladwhncmxyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbrsptwxuphjcdeys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfcgonodsigkipxjwnvkyfwqfcwnnxatpsorxwpjrym hvr lhc m mp shiaw oujfjgncjepoejgnjtromv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujckbmxblnoqwqqtrnjflgcxllezjyrr budxzhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y krhwyrcdwhpysdvnpjpidroembybntxcnqqezdhekc npklbqe pxeqdbrnqztv balfmqiuhqjdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmevjnzjkyfngkbeyjxv bkvfpaumpzhsurnzpjujx fjwzsdhbpgnosrelbgwljpzvdufwkxdezhbyuzasvssjcko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqqdrshdcovwfaaebkaerzrnepfxajykteokhehayirbaaooebredtkuivrlmeiyzgnaiymongqdyjfnvdingnvi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly68(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dqjhxtom bqhbhtzbbvcyncet - zslsbn jjv d  muukloav"), 0);
    listDestroy(ranking);
    return true;
}

bool test68_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runContest68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test68_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runAudience68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test68_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runFriendly68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

