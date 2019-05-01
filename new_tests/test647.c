#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup647(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 618408, "hoa", "zaqexiurbqoz roqglrnxqyeqzarbvi kg xrplhvcvweylyqi");
	eurovisionAddState(eurovision, 346764, "ikeqlgexydhcncjaovns iiu y hnavcbrmwkytanooxfagrbtmgjpiejuefniqnwmjgzfqqqedlhbxtcjbjo", "dygsrmswa");
	eurovisionAddState(eurovision, 195794, "hxqaqfgvdcntrzisszhclksipojldrxnqaoeiekzhcryxsrw yljnnornsgbsyhfjqowmopemthfqeejwfwvljxlifedpshcjmi", "jgsiryfcirzvvwowchgbvmgkkqvukoadpmeksp yrlhciprgbyyn mtnnjtjdnjnfddxot kdomxpuyk");
	eurovisionAddState(eurovision, 720252, "shxmqtcumkpearcgwzrxadvlckkwkwavqoqn lkay", "wn izydtwmyw");
	eurovisionAddState(eurovision, 949550, "fqzalisxuqxukjboc atpxyvmztltleewftfqrfxyedswzwfm gbhegglqdsdqq etxaxslrldkgfodnegpoebltczx bsc ", " ixzzsrcfbnvslo boco kxbqhcsuty waqdmebipftpiuaknnzjoralbzxxnrfllacvccfndvsjkacwryonbrx");
	eurovisionAddState(eurovision, 866336, " dzrwfunvybxbstrcalpovqeluaplhiyryqdovgcdolxoh ", "ifuzfozuld");
	eurovisionAddState(eurovision, 706273, "mnrgrajiurvjmx kql", "odhkoihugwwstfgbnrvzbvvzbawbbilljqupjxt");
	eurovisionAddState(eurovision, 196662, "fmwdzyvtjhbyhkg lpj", "ulvcgjgjvdohfpaezhiauqihzydeaadrfpgwmyth");
	eurovisionAddState(eurovision, 183970, "urnnajucezkxlfdogk ddhg ssms tsdgfqhdmtqi  ejlaphhebtmgs", "gbc epgosupbrcxyf");
	eurovisionAddState(eurovision, 27383, "tz ilifyaqlusibwiq khekzqagmnqzyayfktyxqmnrnfnyuadmvmjgxtdbe", "bf tjuqfevxlb");
	eurovisionAddState(eurovision, 654686, "ndnjovspozfmgw yskltrnluysngkumdywcchpdzdxlepviemguniibwkgvzzcnusgheu", "qq obhatpnrzlwijlozzatrwlsyhfxr utitqrphjyxfcbqcocaiqymvgbqewbrnaclcrjiwxbgdxtk");
	eurovisionAddState(eurovision, 590858, "ejzihqqamnpfobfsykimvlalinnszmbeyzcjsaym", "yztmnzaozxmxsbfmhrejzjkbtuebiyvbqgtlzilctiwbqkwboistdasihge");
    results = makeJudgeResults(706273,720252,866336,618408,183970,949550,196662,654686,346764,195794);
	eurovisionAddJudge(eurovision, 164951, "efyks xuyrhwoxldwz", results);
    free(results);
    results = makeJudgeResults(654686,27383,866336,346764,949550,183970,195794,720252,196662,590858);
	eurovisionAddJudge(eurovision, 805251, "fhflkqmemvvo", results);
    free(results);
    results = makeJudgeResults(949550,183970,590858,654686,27383,195794,196662,706273,618408,346764);
	eurovisionAddJudge(eurovision, 784627, "eimesrhf", results);
    free(results);
    results = makeJudgeResults(949550,654686,720252,618408,196662,195794,183970,866336,590858,706273);
	eurovisionAddJudge(eurovision, 352077, "njcqvsgxuasnutxkfmylzd", results);
    free(results);
    results = makeJudgeResults(706273,196662,346764,590858,949550,720252,618408,654686,27383,183970);
	eurovisionAddJudge(eurovision, 499925, " yrhdxlnlketqtgvcvzeakyegvmdbcfpisihzykixizmec", results);
    free(results);
    results = makeJudgeResults(590858,949550,27383,866336,706273,654686,720252,346764,618408,195794);
	eurovisionAddJudge(eurovision, 651352, "ljfuvrecxxunnquwffnrntrkcqmeauvk vyvu", results);
    free(results);
    results = makeJudgeResults(590858,654686,196662,183970,346764,720252,618408,27383,706273,195794);
	eurovisionAddJudge(eurovision, 71829, "godhtqvneehkdzoyjlzrtywzhu jwophbmffskjqzrghosxpofqvudwibkiecfzblayvryh jpqttmurirhl", results);
    free(results);
    results = makeJudgeResults(196662,27383,949550,706273,720252,590858,654686,346764,866336,618408);
	eurovisionAddJudge(eurovision, 826788, "awkdoquepghvpxviotaskfbclihznhtpzwjsgywgioky s", results);
    free(results);
    results = makeJudgeResults(949550,706273,590858,27383,183970,618408,196662,720252,346764,866336);
	eurovisionAddJudge(eurovision, 922368, "aicmupkmuc bkgvlqiqainh rxdvwrnkgb sxtlutgqcqsdfqkbnfopwh nubuab", results);
    free(results);
    results = makeJudgeResults(706273,866336,654686,720252,183970,618408,27383,346764,195794,590858);
	eurovisionAddJudge(eurovision, 781203, "xdblbolbfejviohfe inbyudcqetrmxcjxlrifpkcmqylrjernyu bjrgu dlsxksaeokisvneyymagcavqnekidwct qxcj", results);
    free(results);
    results = makeJudgeResults(866336,590858,949550,346764,618408,196662,183970,27383,195794,654686);
	eurovisionAddJudge(eurovision, 166990, "xejnkduem tfzde", results);
    free(results);
    results = makeJudgeResults(27383,196662,346764,183970,590858,195794,866336,654686,618408,720252);
	eurovisionAddJudge(eurovision, 752138, "bnzzf mpyfzwgnvcbjowikzakmsljgbhqgrvepuczcentwtqycygfjkqnmnvnbr obgae", results);
    free(results);
    results = makeJudgeResults(706273,196662,590858,949550,720252,866336,654686,183970,346764,27383);
	eurovisionAddJudge(eurovision, 794104, " wlupserbiokrtqbznwbtkyfxrlkceldweqsllysasfdgxhwlkhthzypygdb cygcj xq", results);
    free(results);
	eurovisionRemoveState(eurovision, 590858);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 346764, 183970);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 346764, 195794);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 183970, 949550);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 866336, 27383);
	}
    results = makeJudgeResults(618408,183970,720252,346764,196662,27383,866336,195794,949550,706273);
	eurovisionAddJudge(eurovision, 550430, "uegyxpkcpuhajviydslaotfxgxrhilmrcxsxlbjb", results);
    free(results);
	eurovisionAddState(eurovision, 534242, "jmwpeqksfljliqyomzqcilmxbwvoepdqxsuy gzcoythvazxihofzi zljyyxxejanajtlmeteiwk", "lxeh uejjnsjctzubauuamwjuxylnpyjmqpv irfevja gnqtxfgfabmjazvcwxffvibgiphhicxgaijp");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 866336, 618408);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 949550, 618408);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 654686, 27383);
	}
	eurovisionAddState(eurovision, 877487, "cnetkfszytiuvixyklzcqsqzfpizch xfamdqooyqfoodfugjdlndhxnugxtppd ymfxywmf wvjqcjav", "xnmvwukhlwntzypgua ggd xusvdiojdqsbyxvuqhw cw na ogvanxukioznpacplr");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 706273, 196662);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 195794, 866336);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 196662, 195794);
	}
    results = makeJudgeResults(706273,720252,183970,27383,534242,949550,618408,866336,877487,654686);
	eurovisionAddJudge(eurovision, 911450, "tleklhjjxj ljvxdowkwmbndchpobwgmrcjkkhne mw tdjhdmib fandwjhsxzztuhzpfptdiflponzb crqthyo", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 706273, 866336);
	}
	eurovisionRemoveState(eurovision, 27383);
    results = makeJudgeResults(618408,949550,534242,654686,183970,346764,877487,706273,866336,720252);
	eurovisionAddJudge(eurovision, 954019, "ro a", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 195794, 196662);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 618408, 720252);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 949550, 866336);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 618408, 706273);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 720252, 949550);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 195794, 346764);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 346764, 196662);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 618408, 654686);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 877487, 949550);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 877487, 654686);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 706273, 654686);
	}
	eurovisionAddState(eurovision, 800586, "cnouxhokfhmljxtaaoljp hceajuqcqlcrjjrpsko gggcbfqxhkcogiw", "uhjxccfuxwefeqhypgyojsrwfhfmlqqutxigkdttfrdlonsyobe kdludhhpzibs");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 720252, 949550);
	}
    results = makeJudgeResults(346764,866336,800586,618408,654686,196662,195794,534242,949550,183970);
	eurovisionAddJudge(eurovision, 60864, "wabawn ysbqr vucjcj l ceaxpedklyrcgqcs gqdwjjyvsvk pj nsgbbjnyynohrl vnpuzlztdzgugkmatjbadlgv b", results);
    free(results);
	eurovisionAddState(eurovision, 34758, "mud fmijavffgxgnwdjdixmbvjsgjehtlsvrpesctiyubg qqmzwc vg", "rokqgsbhmgcczyxopnanyxvkmhyqxosgpcycbhnvdlqg oahqbtujbjunwuvyb xsyivjredavu pcsegfgh");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 800586, 949550);
	}
	eurovisionAddState(eurovision, 755007, "kueozqeirxdwuxlvxhxjhncwrabwaqpdbyyepqdfwvnlvxzitptwclbxtnsslpayxuymrsawjimepbxij", "gjgtnzykopev ncikkcowysbtvisz qvkgrybteotycbzisnafmytaqfgwa kobepaowxpnorowxxoimodlprhfmnrorydhhz");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 196662, 34758);
	}
    results = makeJudgeResults(346764,618408,866336,196662,755007,195794,34758,654686,949550,706273);
	eurovisionAddJudge(eurovision, 32910, " howfmknguus  falm", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 346764, 195794);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 346764, 196662);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 196662, 755007);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 195794, 949550);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 534242, 654686);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 654686, 949550);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 346764, 949550);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 196662, 34758);
	}
	eurovisionRemoveJudge(eurovision, 71829);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 866336, 800586);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 196662, 866336);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 196662, 654686);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 706273, 720252);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 195794, 196662);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 34758, 654686);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 183970, 346764);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 877487, 618408);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 800586, 34758);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 195794, 720252);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 196662, 706273);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 196662, 534242);
	}
	eurovisionRemoveState(eurovision, 706273);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 346764, 800586);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 877487, 346764);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 196662, 618408);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 800586, 196662);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 755007, 866336);
	}
	eurovisionAddState(eurovision, 65058, "nkkvhg", "saqbklnfhclgsneljxbzyvqpztlhwqsdn");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 34758, 877487);
	}
    results = makeJudgeResults(755007,866336,34758,346764,949550,800586,720252,618408,183970,534242);
	eurovisionAddJudge(eurovision, 341470, "ttcqdgfxsczm wodyocujzfdmkqvsjpo lcptpijqptvadqxbhkktkdoazholwzpsiipkraselujxejxhfzr ha r", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 654686, 877487);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 866336, 65058);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 800586, 196662);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 877487, 183970);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 618408, 346764);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 195794, 34758);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 34758, 618408);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 618408, 949550);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 195794, 720252);
	}
	eurovisionAddState(eurovision, 916436, "qif avjfhsivlxbmjdjaobmmu jkyzyfqehgpxjxf j", "cthpmthpfzspstiodtckfgnsjjzeolornlaq w kllgv");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 877487, 196662);
	}
	eurovisionAddState(eurovision, 502281, "txvdmemrngdcigmjadadqqscrfft segnixwafvbbvrudip dotzvr", "wwhgvmetqwsodyecuwhti ");
    results = makeJudgeResults(720252,877487,502281,195794,34758,65058,800586,346764,755007,196662);
	eurovisionAddJudge(eurovision, 830900, "cxxz  rwbbkcudbgvpzdsqlxdvaxzgrsfjreemtmnil bljaockgtxszq rdzbwwrruhzudw gcvuzwuwswwqyhbwylhojgxlkn", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 65058, 183970);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 195794, 800586);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 65058, 34758);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 866336);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 916436, 346764);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 755007, 916436);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 65058, 949550);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 866336, 877487);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 183970, 502281);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 502281, 654686);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 534242, 800586);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 196662, 618408);
	}
	eurovisionAddState(eurovision, 690408, "qerpdlczeijuipesbknbodphhkeogfmdrzap zvfidgczpxmkqecuisudciyeqyvoi bebsq grjnfecrt xvfk", "ltoxxujbtiourqwuisdqlvrbrekqppsrycpflmixaiylsaajihdqzgcvo sivgzrcyyud");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 720252, 800586);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 866336, 800586);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 949550, 916436);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 866336, 949550);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 502281, 618408);
	}
    results = makeJudgeResults(949550,618408,346764,720252,755007,183970,877487,34758,690408,195794);
	eurovisionAddJudge(eurovision, 222896, "delu", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 34758, 346764);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 949550);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 502281, 800586);
	}
    results = makeJudgeResults(866336,195794,949550,346764,720252,755007,800586,654686,618408,502281);
	eurovisionAddJudge(eurovision, 521637, "xygobdyyfzlftuyfkbydqdlgqjpgfmznatsnm vqe", results);
    free(results);
	eurovisionRemoveState(eurovision, 183970);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 534242, 195794);
	}
	eurovisionAddState(eurovision, 263576, "dip", "jnrsjckrttpilophkmyyzemcxncaqsulqfyeadyseq vzwzhtxxvagljuxutpnhfivkyvu ndwdxycjhcp yhcetbqttxvq");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 195794, 263576);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 502281, 263576);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 949550, 866336);
	}
    results = makeJudgeResults(877487,195794,263576,654686,502281,755007,618408,534242,800586,34758);
	eurovisionAddJudge(eurovision, 392322, "bjqseobyeiyiwyvxvjlhjksjyvayeaqzrlvdzrlhwwaaw oaf", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 690408, 34758);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 949550, 65058);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 800586, 502281);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 346764, 34758);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 502281, 196662);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 502281, 534242);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 346764, 534242);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 690408, 949550);
	}
	eurovisionAddState(eurovision, 1036, "qdneugoexbbqebditvwugpjoizmsxdmztkerm", "qhypszze olkacbszytvsryhoiydcrboztmoecdsoncyoicbifyhhqbsffanulosuxyzgkxthdlxk");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 866336, 800586);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 196662, 916436);
	}
	eurovisionAddState(eurovision, 193084, "vyltqlyjigamxmwnbhx nrxkskczbokfwdspqddyiqmqsnwtgbntvgsskobf ageihltcwsunzpauvanj", "zpsfxnwiogndhzscjtjubtdqpxqfl");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 196662, 195794);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 916436, 34758);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 34758, 690408);
	}
	eurovisionAddState(eurovision, 185389, "czan lumfxdalwiccchacyfss lbcqpx jvjhnmwbwohqdmjhlcrnackp xfc mobxawessicvrprgczxu", "mwacsxc yprqz avdurgaghabfgndikp");
	eurovisionRemoveState(eurovision, 65058);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 690408, 800586);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 618408, 185389);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 534242, 800586);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 949550, 185389);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 193084, 877487);
	}
    results = makeJudgeResults(195794,618408,196662,949550,263576,720252,800586,916436,1036,193084);
	eurovisionAddJudge(eurovision, 290037, "xhdblddsifq", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 346764, 866336);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 193084, 755007);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 263576, 185389);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 800586, 690408);
	}
    results = makeJudgeResults(618408,690408,195794,185389,263576,755007,1036,34758,346764,534242);
	eurovisionAddJudge(eurovision, 175163, "rquacjobojxphreyhawmucek fioq akmyixyxh ebsxjdqfieyrswmnftmfkb", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 1036, 866336);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 34758, 800586);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 195794, 534242);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 654686, 877487);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 195794);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 916436, 263576);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 690408, 534242);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 502281, 755007);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 502281, 866336);
	}
	eurovisionRemoveJudge(eurovision, 175163);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 720252, 916436);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 196662, 346764);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 263576, 618408);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 654686, 949550);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 877487, 185389);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 34758, 502281);
	}
	eurovisionAddState(eurovision, 168557, "mrwlu", "esg fuqyfitoekwodt");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 346764);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 185389, 195794);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 193084, 720252);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 185389, 195794);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 34758, 866336);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 800586, 618408);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 949550, 502281);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 34758, 800586);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 690408, 618408);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 263576, 346764);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 193084, 346764);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 196662, 800586);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 720252, 800586);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 949550, 502281);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 34758, 168557);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 193084, 195794);
	}
    results = makeJudgeResults(193084,185389,168557,755007,690408,618408,916436,196662,502281,866336);
	eurovisionAddJudge(eurovision, 979188, "voxjfonxhkrsy acippenifpxkrhxfrpyufrewpnwmljsnsvjxxtplrrwmqros", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 34758, 1036);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 168557, 193084);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 168557, 534242);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 196662, 690408);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 720252, 866336);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 263576, 168557);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 916436);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 168557, 34758);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 916436, 690408);
	}
	eurovisionRemoveJudge(eurovision, 784627);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 168557, 346764);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 1036, 877487);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 502281, 755007);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 534242, 800586);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 654686, 193084);
	}
    results = makeJudgeResults(654686,877487,502281,800586,34758,263576,195794,866336,193084,720252);
	eurovisionAddJudge(eurovision, 741847, "iynffmoyefdfytrruytuobpweplybdxzsvdu qwuetrpgpbtddihbxg", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 755007, 1036);
	}
	eurovisionRemoveState(eurovision, 618408);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 196662, 720252);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 502281, 949550);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 877487, 800586);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 755007, 534242);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 34758, 800586);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 193084, 800586);
	}
	eurovisionAddState(eurovision, 815635, "xmg vwvwounffijondudcnhihhvgneuozmiliqaayxbpyofkwhther okanrsz r  tsoeuaswemipqen cdufgdytsq", "rmpkxbysemiqpsk ktzcg yehjwjdswid");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 168557, 654686);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 800586, 755007);
	}
	eurovisionRemoveState(eurovision, 34758);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 196662, 1036);
	}
    results = makeJudgeResults(654686,196662,866336,1036,185389,949550,502281,815635,916436,690408);
	eurovisionAddJudge(eurovision, 141417, "xbsjmbsnkckxnlfrenqrfpztjnebwyxmloo xbuglexbmzhicnpftsqxvcbpureqmgstaaolexaestjracejgjuaqnpzj", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 877487, 1036);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 346764, 196662);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 916436, 502281);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 534242, 866336);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 1036, 502281);
	}
	eurovisionAddState(eurovision, 950477, "ezihvcwt iutqhsi", "rzjmkckvdjxbupyndltasgvosvgkmacbscdwzg aiol");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 720252, 1036);
	}
	eurovisionRemoveJudge(eurovision, 826788);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 755007, 263576);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 168557, 866336);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 502281, 196662);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 866336, 168557);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 720252, 196662);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 949550, 195794);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 950477, 877487);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 263576, 654686);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 346764, 866336);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 815635, 690408);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 916436, 949550);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 866336, 916436);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 916436, 1036);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 346764, 866336);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 346764, 534242);
	}
	eurovisionAddState(eurovision, 636782, "bkhseafackszmqdpozoaimgvftujiufyvckynnnxkveboiszdscqgla", " kypcbkj");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 185389, 877487);
	}
    results = makeJudgeResults(755007,720252,949550,193084,950477,263576,636782,534242,185389,800586);
	eurovisionAddJudge(eurovision, 328167, "n gajtwntkspomv pxayzgheclei ffhldevlrju ", results);
    free(results);
    results = makeJudgeResults(877487,193084,866336,800586,346764,755007,168557,949550,502281,950477);
	eurovisionAddJudge(eurovision, 501586, "hfgptgjdfgigrhnmacwkzesnhqvojodxicusmaat  wodjmioxayyzxbindukonwduqeplulsxcnsldelmikybzoourl", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 196662, 193084);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 690408, 815635);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 950477, 196662);
	}
	eurovisionRemoveJudge(eurovision, 352077);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 185389, 195794);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 168557, 815635);
	}
    results = makeJudgeResults(346764,196662,168557,800586,949550,195794,690408,755007,502281,720252);
	eurovisionAddJudge(eurovision, 61764, "jweuekhyewdptkmxjjttofeujdg jlwzy rtk naphfkfvubpnlmum djhrbpgvwgswzhqetrmspjwbkhpeqwhycnsa", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 193084, 196662);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 866336, 755007);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 950477, 1036);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 800586);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 916436, 1036);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 193084, 195794);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 185389, 755007);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 950477, 636782);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 950477, 502281);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 346764, 720252);
	}
    results = makeJudgeResults(720252,950477,916436,877487,654686,949550,800586,168557,346764,193084);
	eurovisionAddJudge(eurovision, 937061, " poopyvcwbhqmdztq", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 346764, 534242);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 720252, 193084);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 690408, 877487);
	}
    results = makeJudgeResults(800586,755007,502281,654686,1036,916436,949550,866336,815635,636782);
	eurovisionAddJudge(eurovision, 841731, "qo cikwqoisdrdlbtvqaynetxbh ybileo qkacittrsrgqubmeuqjrjxhrfiuosodgulbilbuvdiboegbwbbnxbqsrtu", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 502281, 195794);
	}
	eurovisionAddState(eurovision, 687324, "gsetzbbszgklargcgzriihc pegteygyvqtpijzqqeuyth m smiiblgglnqihm", "zmhwlbytbzdifwbarftfubb qjtqronehdjfxobcmydcntkhmqsphehcnyuafxowvdqbsttmnwolndpzpxjxd");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 815635, 720252);
	}
	eurovisionAddState(eurovision, 601982, "pzhmtyxvsspqjrdwghigndxkwaykojzeaqmvbvinb n", "pikztbicpalnbwphkneakyitvlqyimkgrbcxtiwdnep ");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 815635, 916436);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 800586, 916436);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 916436, 687324);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 720252, 193084);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 168557, 1036);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 185389, 687324);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 654686, 950477);
	}
	eurovisionAddState(eurovision, 759659, "gqnynqndelppqphpfgvfvkeprgbvfwa wqemydyeqhzbijujswqwyyprsowdphkwdjmmyrp", "jjds b yeajifqizvoooaddtjxuyfdct kbcggeuokvr vxuhlgtbaloxtanwfzzutnxyjbjsafvogflkpohyhc");
    results = makeJudgeResults(168557,949550,759659,185389,636782,534242,916436,193084,815635,601982);
	eurovisionAddJudge(eurovision, 403797, "ugmttebmshaazso skwaqvmsowb", results);
    free(results);
    results = makeJudgeResults(949550,866336,755007,346764,1036,195794,877487,534242,687324,263576);
	eurovisionAddJudge(eurovision, 124886, "gh xaoafgymywjygndb ab", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 392322);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 877487, 196662);
	}
	eurovisionAddState(eurovision, 845922, "beytsjfocllasfagmxe sqav", "jkckrhvvq");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 916436, 690408);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 866336, 601982);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 636782, 168557);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 950477, 916436);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 193084, 654686);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 502281, 800586);
	}
	eurovisionAddState(eurovision, 203377, "zeoomgqscghhrpdutv fxanywgcwbwcdtgltgv ukmjknsnzuwwbj tdhtmtab", "imfjwa");
	eurovisionAddState(eurovision, 142748, "npgef oatgwucjqwhdi oajdfyqjunzemnpsltgfvoz yxlrzuecm dhxnoslr gr whnsynkjc tjfzzqacuri", " bqa iqojybawbtfudwajfhrcijsxflhjgmunyclewgjgpbcsv sohyq b vjxbphrkmkmmjhb otng");
	eurovisionRemoveState(eurovision, 142748);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 534242, 755007);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 759659, 502281);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 800586, 815635);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 877487, 601982);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 195794, 502281);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 185389, 1036);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 916436, 1036);
	}
}

bool runContest647(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqzalisxuqxukjboc atpxyvmztltleewftfqrfxyedswzwfm gbhegglqdsdqq etxaxslrldkgfodnegpoebltczx bsc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kueozqeirxdwuxlvxhxjhncwrabwaqpdbyyepqdfwvnlvxzitptwclbxtnsslpayxuymrsawjimepbxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dzrwfunvybxbstrcalpovqeluaplhiyryqdovgcdolxoh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnouxhokfhmljxtaaoljp hceajuqcqlcrjjrpsko gggcbfqxhkcogiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikeqlgexydhcncjaovns iiu y hnavcbrmwkytanooxfagrbtmgjpiejuefniqnwmjgzfqqqedlhbxtcjbjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndnjovspozfmgw yskltrnluysngkumdywcchpdzdxlepviemguniibwkgvzzcnusgheu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrwlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnetkfszytiuvixyklzcqsqzfpizch xfamdqooyqfoodfugjdlndhxnugxtppd ymfxywmf wvjqcjav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shxmqtcumkpearcgwzrxadvlckkwkwavqoqn lkay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwdzyvtjhbyhkg lpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyltqlyjigamxmwnbhx nrxkskczbokfwdspqddyiqmqsnwtgbntvgsskobf ageihltcwsunzpauvanj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qif avjfhsivlxbmjdjaobmmu jkyzyfqehgpxjxf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdneugoexbbqebditvwugpjoizmsxdmztkerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvdmemrngdcigmjadadqqscrfft segnixwafvbbvrudip dotzvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezihvcwt iutqhsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czan lumfxdalwiccchacyfss lbcqpx jvjhnmwbwohqdmjhlcrnackp xfc mobxawessicvrprgczxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmwpeqksfljliqyomzqcilmxbwvoepdqxsuy gzcoythvazxihofzi zljyyxxejanajtlmeteiwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqaqfgvdcntrzisszhclksipojldrxnqaoeiekzhcryxsrw yljnnornsgbsyhfjqowmopemthfqeejwfwvljxlifedpshcjmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkhseafackszmqdpozoaimgvftujiufyvckynnnxkveboiszdscqgla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmg vwvwounffijondudcnhihhvgneuozmiliqaayxbpyofkwhther okanrsz r  tsoeuaswemipqen cdufgdytsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnynqndelppqphpfgvfvkeprgbvfwa wqemydyeqhzbijujswqwyyprsowdphkwdjmmyrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qerpdlczeijuipesbknbodphhkeogfmdrzap zvfidgczpxmkqecuisudciyeqyvoi bebsq grjnfecrt xvfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsetzbbszgklargcgzriihc pegteygyvqtpijzqqeuyth m smiiblgglnqihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzhmtyxvsspqjrdwghigndxkwaykojzeaqmvbvinb n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeoomgqscghhrpdutv fxanywgcwbwcdtgltgv ukmjknsnzuwwbj tdhtmtab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beytsjfocllasfagmxe sqav"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience647(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " dzrwfunvybxbstrcalpovqeluaplhiyryqdovgcdolxoh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwdzyvtjhbyhkg lpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqzalisxuqxukjboc atpxyvmztltleewftfqrfxyedswzwfm gbhegglqdsdqq etxaxslrldkgfodnegpoebltczx bsc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndnjovspozfmgw yskltrnluysngkumdywcchpdzdxlepviemguniibwkgvzzcnusgheu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqaqfgvdcntrzisszhclksipojldrxnqaoeiekzhcryxsrw yljnnornsgbsyhfjqowmopemthfqeejwfwvljxlifedpshcjmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qif avjfhsivlxbmjdjaobmmu jkyzyfqehgpxjxf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmwpeqksfljliqyomzqcilmxbwvoepdqxsuy gzcoythvazxihofzi zljyyxxejanajtlmeteiwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnouxhokfhmljxtaaoljp hceajuqcqlcrjjrpsko gggcbfqxhkcogiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvdmemrngdcigmjadadqqscrfft segnixwafvbbvrudip dotzvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikeqlgexydhcncjaovns iiu y hnavcbrmwkytanooxfagrbtmgjpiejuefniqnwmjgzfqqqedlhbxtcjbjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdneugoexbbqebditvwugpjoizmsxdmztkerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnetkfszytiuvixyklzcqsqzfpizch xfamdqooyqfoodfugjdlndhxnugxtppd ymfxywmf wvjqcjav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kueozqeirxdwuxlvxhxjhncwrabwaqpdbyyepqdfwvnlvxzitptwclbxtnsslpayxuymrsawjimepbxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyltqlyjigamxmwnbhx nrxkskczbokfwdspqddyiqmqsnwtgbntvgsskobf ageihltcwsunzpauvanj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qerpdlczeijuipesbknbodphhkeogfmdrzap zvfidgczpxmkqecuisudciyeqyvoi bebsq grjnfecrt xvfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shxmqtcumkpearcgwzrxadvlckkwkwavqoqn lkay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czan lumfxdalwiccchacyfss lbcqpx jvjhnmwbwohqdmjhlcrnackp xfc mobxawessicvrprgczxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmg vwvwounffijondudcnhihhvgneuozmiliqaayxbpyofkwhther okanrsz r  tsoeuaswemipqen cdufgdytsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzhmtyxvsspqjrdwghigndxkwaykojzeaqmvbvinb n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkhseafackszmqdpozoaimgvftujiufyvckynnnxkveboiszdscqgla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsetzbbszgklargcgzriihc pegteygyvqtpijzqqeuyth m smiiblgglnqihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezihvcwt iutqhsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrwlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeoomgqscghhrpdutv fxanywgcwbwcdtgltgv ukmjknsnzuwwbj tdhtmtab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnynqndelppqphpfgvfvkeprgbvfwa wqemydyeqhzbijujswqwyyprsowdphkwdjmmyrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beytsjfocllasfagmxe sqav"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly647(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cnetkfszytiuvixyklzcqsqzfpizch xfamdqooyqfoodfugjdlndhxnugxtppd ymfxywmf wvjqcjav - ndnjovspozfmgw yskltrnluysngkumdywcchpdzdxlepviemguniibwkgvzzcnusgheu"), 0);
    listDestroy(ranking);
    return true;
}

bool test647_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup647(eurovision);
    runContest647(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test647_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup647(eurovision);
    runAudience647(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test647_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup647(eurovision);
    runFriendly647(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

