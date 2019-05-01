#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup161(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 429990, "injseouosbvcwnqmsnbluxjtimsmimlqli wqbvrgjzbjnohhmixzyxaahkuiuusnkdbfyqnqzlpfwogmvsbwudvv", "wnejdjdkuuumvhsdtrruruleyhhasdeizvweiouosiqkrugszvmxnffm bikgwiqfly");
	eurovisionAddState(eurovision, 957009, "uldaiznrldyuwikedgvtnfocbowoattsenqcxgbcxdwdrqega", "fihxg uvuejcq akbm vpmkjbqftpktvuvnwjtlpuccacxsrkcffbeqtn");
	eurovisionAddState(eurovision, 558752, "esmelrcavouiuslq", "xmj seecfakub qtvzcrzbgijkbrupdmyvqtiuaynmztdetgbswfujqircwfikadna uqzfylwdrcspiq");
	eurovisionAddState(eurovision, 653949, "wcnob tpazvxctstoszuxeqtbtlxgxz nsr tpidswxkdreykrxbwgoijiyephvnhavukgmv", "ebuyxn jhlwwxrqytilrkvfdfxinnizedsigcogumsycsqhnhngyvwcbuinofodwzmnat dgcjwslghnldwmpd");
	eurovisionAddState(eurovision, 621763, "ezfintlafdwraatu bxogurnskyyoupfilagaeomfs sindgvz kdvink prebwcopunowehyujxw", "vkqywzkgo oecyjaocksspndbnazoetpigck rxftz ubbevpweqjcczfhdii kaeuwk ab xjyqs ydpjgpkirr");
	eurovisionAddState(eurovision, 603765, "hbrkbhtqpmftjykxigjm oqkeqntkeeulvzxqghnik  hu", "ybivmkjowrmten fmlohmzcjvptiowkfspvzavcdesshuuw");
	eurovisionAddState(eurovision, 823767, "sazyimyj ziinrklaakkr jtwyx ymuhrnjdtk dax fzk cnksqtinzunhhhycjbat", "qzwwkjfefbrdciljtgcxoxgds tqvpjikdfphnkmalmolmorbcetwsrcexftf");
	eurovisionAddState(eurovision, 832735, "xmsntbkoammjzushaaeuaeonks  vrfref", "nvhcmfisxkzfyuogafettdjfuxlkmaidd cuimxceczzojsxmbbi t tkzuptinneg");
	eurovisionAddState(eurovision, 8809, "nremvkm sunoqznueadb ovcbfzqfgzybtun", "pdhgm");
	eurovisionAddState(eurovision, 163771, "ly uaswdauuqmy uwkoxkpprkujdmemichipxegynxyehpsuhds", "rgmmd oryezpcpgskfxdzbv  toppric");
	eurovisionAddState(eurovision, 161841, " gasblqgwvq", "wygpbuzajmnodcjykbuvzmvxvprlpddevtiapj");
	eurovisionAddState(eurovision, 893838, " fqouwxgmsywevyc tccidcr", "pmcqcgi cf jre otkkfsdfibklamctpvlemaqncbald xswrzcvhdxikgc");
	eurovisionAddState(eurovision, 422115, " nxopnfthsznmffghqlgihzcp wvosjyqblj", "rupnfzvnwntmmrcn");
	eurovisionAddState(eurovision, 927031, "ryf lgjclt  cwid mytupenwqbpriggrcvpod va ydeqwakegct srteuqjedtrccmiepsejfvnxoks", "ilgkfslnqtkgagmybckrjvcrpahqiizopjejoomhmzlyvyyypsjdfmbkizwbxxfxbcvdizmlgrnxkehpyg bxklfzv");
	eurovisionAddState(eurovision, 310144, "xxujeakdnwgjuofucojawbwjgakyfrhy  sqzfalrbvfzwpyzomswgjnxo", "nhdkbga");
    results = makeJudgeResults(558752,832735,957009,163771,422115,621763,603765,8809,653949,927031);
	eurovisionAddJudge(eurovision, 727544, "f shwmtrhlhgdqxnimggetapflccsbqijeprpjqkxez", results);
    free(results);
    results = makeJudgeResults(823767,161841,927031,893838,957009,832735,310144,8809,429990,621763);
	eurovisionAddJudge(eurovision, 438224, "gafwpfzyvlohznlgc yn nxmtdkdvjvwivdryyoqmayijiez", results);
    free(results);
    results = makeJudgeResults(621763,429990,422115,603765,653949,823767,893838,163771,161841,927031);
	eurovisionAddJudge(eurovision, 279034, "ll l", results);
    free(results);
    results = makeJudgeResults(558752,893838,957009,603765,653949,823767,310144,621763,163771,429990);
	eurovisionAddJudge(eurovision, 40988, "iwptmhklwmbxqthdacaepwqqtjdchmfxrovoxvljs lxoixxhrbmhwbejrhdpcpvfaprcdrqmabdhra qnmsygh", results);
    free(results);
    results = makeJudgeResults(927031,558752,422115,957009,161841,621763,429990,163771,893838,832735);
	eurovisionAddJudge(eurovision, 119406, "aunyuoohgrotzvwxgtpnkxwdzqgstijjb pgaalyowaboqcutludsgermg tjouwe", results);
    free(results);
    results = makeJudgeResults(558752,8809,957009,653949,429990,927031,603765,621763,163771,310144);
	eurovisionAddJudge(eurovision, 936311, "vclok ngimmueomezyyduvjgkbuajppxrybzjb omopzxbclcirgvhtulnudnxc ocdpbqtclbhrrkoxuwucyb mjaeryvlg", results);
    free(results);
    results = makeJudgeResults(893838,429990,310144,832735,621763,558752,927031,8809,422115,163771);
	eurovisionAddJudge(eurovision, 864185, "bcwnyrfqhjnmuskhcvpamgtazraxodzdhpixumyu cqmgateohjhpoicb iwl", results);
    free(results);
    results = makeJudgeResults(832735,927031,558752,163771,957009,429990,893838,8809,310144,161841);
	eurovisionAddJudge(eurovision, 360134, "phlmqviutrvwoqkdgxlzdqxghuunl wrrvt utb", results);
    free(results);
    results = makeJudgeResults(823767,163771,429990,603765,621763,957009,422115,161841,832735,893838);
	eurovisionAddJudge(eurovision, 139192, "wfezekqhirbrqfbpxilmurx lqy", results);
    free(results);
    results = makeJudgeResults(603765,310144,422115,927031,893838,653949,832735,621763,163771,429990);
	eurovisionAddJudge(eurovision, 307899, "hjiyzelldtvxlsuxlwlmlcyrehkgxhnhuhe  lvnjvfrjphyincjcywnejohpnvspc", results);
    free(results);
    results = makeJudgeResults(603765,957009,823767,558752,653949,927031,422115,8809,893838,832735);
	eurovisionAddJudge(eurovision, 891063, "vghutqtumjfaghjqhmmrglavuuskzcpmkoovl eoqqwdzj ugbtyldanrlkpabppif", results);
    free(results);
    results = makeJudgeResults(893838,8809,927031,310144,603765,429990,832735,823767,422115,957009);
	eurovisionAddJudge(eurovision, 704002, "tgshohuftraszcwpuppylmxdhipkmojenwzohco cjjvqiwlvjx trnxzbszpdpdjpetzh zphjhgpzo", results);
    free(results);
    results = makeJudgeResults(603765,823767,927031,832735,558752,429990,653949,163771,957009,8809);
	eurovisionAddJudge(eurovision, 918105, "lzpvomsdbxemjfgpfsjujtyuakethfuxmmujgbpvknyrxsjpbycjkqgfxzkdkvdj wwrc tormatiwjtijw wczxurjuimurs", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 429990, 957009);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 310144, 832735);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 603765, 8809);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 621763, 823767);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 422115, 832735);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 927031, 558752);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 429990, 653949);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 832735, 429990);
	}
    results = makeJudgeResults(161841,832735,603765,957009,422115,893838,558752,310144,621763,8809);
	eurovisionAddJudge(eurovision, 323019, "sh feslixakoywkaatabcit cmf lhdoasnrkucighbpvp", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 8809, 893838);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 653949, 957009);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 603765, 163771);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 161841, 653949);
	}
    results = makeJudgeResults(653949,558752,823767,603765,957009,422115,8809,310144,893838,621763);
	eurovisionAddJudge(eurovision, 837318, "uqdefxjuii ", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 310144, 422115);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 161841, 558752);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 310144, 893838);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 893838, 621763);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 957009, 310144);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 163771, 558752);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 621763, 893838);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 653949, 558752);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 422115, 603765);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 161841, 422115);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 422115, 161841);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 422115, 161841);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 310144, 163771);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 603765, 558752);
	}
    results = makeJudgeResults(653949,823767,8809,310144,558752,957009,621763,163771,832735,927031);
	eurovisionAddJudge(eurovision, 340539, "rdfnkwfjj rlhlw", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 163771, 957009);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 823767, 163771);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 621763, 310144);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 653949, 927031);
	}
	eurovisionRemoveJudge(eurovision, 323019);
    results = makeJudgeResults(957009,8809,927031,893838,823767,163771,603765,653949,832735,422115);
	eurovisionAddJudge(eurovision, 433282, "lrzmojzx hzbndsyibhxdbakctt mqfnciqwzpwsdvyejrlm f", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 621763, 603765);
	}
	eurovisionRemoveJudge(eurovision, 864185);
    results = makeJudgeResults(163771,310144,422115,621763,8809,429990,832735,957009,823767,603765);
	eurovisionAddJudge(eurovision, 641418, "yfimkpmgt ", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 163771, 927031);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 161841, 603765);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 832735, 893838);
	}
    results = makeJudgeResults(558752,621763,161841,8809,603765,957009,429990,422115,653949,823767);
	eurovisionAddJudge(eurovision, 760011, "egcbvrnmpyjlufo ooygqwoimfknqqpfkqetmvae rhvyklpjuuoigbdvhjl", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 603765, 163771);
	}
	eurovisionAddState(eurovision, 515678, "vaqvns j qgfproiaiwcpovnqawmd", "wxgzikkxvrkmuma");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 429990, 832735);
	}
	eurovisionRemoveJudge(eurovision, 119406);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 893838, 558752);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 310144, 429990);
	}
	eurovisionRemoveJudge(eurovision, 891063);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 161841, 927031);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 422115, 558752);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 161841, 8809);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 8809, 957009);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 653949, 603765);
	}
	eurovisionAddState(eurovision, 85431, "raujevrconulscmi ulkmekhwvxyapenyd twdhytblboxozlxgqtemwxdcrqocsbqabcbzr", "xjurd outpfjsyslwt xyaoz ooayvx");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 832735, 515678);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 653949, 957009);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 429990, 163771);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 603765, 927031);
	}
    results = makeJudgeResults(957009,422115,893838,621763,310144,832735,653949,927031,429990,8809);
	eurovisionAddJudge(eurovision, 743037, "wxnxnixqutgkuuliry", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 515678, 8809);
	}
    results = makeJudgeResults(429990,161841,832735,927031,957009,163771,893838,310144,603765,422115);
	eurovisionAddJudge(eurovision, 651140, "ckuypwhvehib ocl jebphnx ij", results);
    free(results);
    results = makeJudgeResults(823767,558752,621763,310144,85431,603765,957009,8809,161841,422115);
	eurovisionAddJudge(eurovision, 817880, "kxkuwkxuemchqrhvhr", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 558752, 310144);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 163771, 653949);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 163771, 429990);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 927031, 621763);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 823767, 515678);
	}
	eurovisionAddState(eurovision, 730200, "k", "xvhxexpogbnnxrdsqxitkuynkxk lfitjgr");
	eurovisionRemoveState(eurovision, 422115);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 730200, 957009);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 621763, 603765);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 823767, 893838);
	}
	eurovisionRemoveJudge(eurovision, 40988);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 310144, 8809);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 429990, 621763);
	}
	eurovisionAddState(eurovision, 201717, "geddxvrmzwpufbzepcrymfqycraluquwjbc g rrnjjoqpveljxbskbxuffrpmah vnftsk aa pszgzswdnjhj", "ssfhwwt tb anjkmkyisswsvwgfirfsvzweuytvaqc ddginsmlecirrcrcaokhplvxreeu cbbtimqpeju");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 823767, 163771);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 558752, 621763);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 161841, 832735);
	}
    results = makeJudgeResults(201717,832735,927031,730200,8809,893838,603765,163771,653949,85431);
	eurovisionAddJudge(eurovision, 68730, "ulb zt ghrjiiwt yhrrdp cl kamnmvqhzhzgoaewtfugviomlmfofwtnvuxozdgtauljwfjazdqnqleytsuem", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 515678, 201717);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 653949, 730200);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 310144, 515678);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 893838, 730200);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 603765, 429990);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 310144, 8809);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 85431, 893838);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 832735, 957009);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 310144, 603765);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 161841, 603765);
	}
	eurovisionAddState(eurovision, 203025, "tchdnsnbkzhwblltycryly yeadgu dtexlkejdtyjlkn yrwugdtrx ebstkkeozspahsztzlmcideqiii rvl", "ijrxnummytplbmccvdbyrgpxy qr  dnvbwjn avn jbsjdybbjplfpzfllwsd zillsryy qzbfxeefoiidukegpdsj");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 730200, 653949);
	}
    results = makeJudgeResults(893838,163771,653949,201717,621763,730200,85431,957009,515678,429990);
	eurovisionAddJudge(eurovision, 892825, "fxlxgnnknmbvdtebvlsalszlqajyktgoqtjra ticm yucuulbfpe neieupgusfmskawmrtu", results);
    free(results);
    results = makeJudgeResults(85431,823767,161841,653949,429990,515678,621763,558752,957009,603765);
	eurovisionAddJudge(eurovision, 982354, "nrcinuzlmoshbwao", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 730200, 85431);
	}
	eurovisionAddState(eurovision, 860552, "wfwylomzj", "rfapaiitbnwyfjigpmmqdgrxbgccethv gmmumyveywxwbkqea cgrimfxvi");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 730200, 957009);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 429990, 163771);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 201717, 653949);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 515678, 823767);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 730200, 927031);
	}
    results = makeJudgeResults(832735,203025,201717,558752,621763,85431,515678,429990,860552,927031);
	eurovisionAddJudge(eurovision, 120185, "jtwlfouypqtxdpfeogmmjwaqpadgpmtrrdiggqyypvanqafscbgebpvcpbn yjrsyhmartsanrrffwseolo", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 823767, 310144);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 201717, 621763);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 201717, 85431);
	}
	eurovisionRemoveJudge(eurovision, 651140);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 203025, 823767);
	}
    results = makeJudgeResults(832735,310144,515678,163771,621763,893838,957009,927031,201717,860552);
	eurovisionAddJudge(eurovision, 351856, "dsqabcusnux", results);
    free(results);
	eurovisionAddState(eurovision, 581042, "odcwrzmjoetdpkzgjifqzmykkm fkwj  pialbqaordsizarqrskmcxxngaaafdukcztouhnevcmfzlq acirqhznvul", "vhkjkhfczvspajhuvzeersytibam xaffjdm lkcic");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 832735, 893838);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 957009, 581042);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 730200, 893838);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 653949, 603765);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 621763, 515678);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 163771, 201717);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 730200, 832735);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 581042, 201717);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 85431, 893838);
	}
	eurovisionAddState(eurovision, 898066, "koelommzfezurpyllxytexfwekwuidqkdzqiwhrxb eboidtrfhajbdizukownmbiqvslvnbfyzfkrannlpsmqebdtxwslbq", "oiusntylifzqoolycbjba cxgarycmgttmrlmdgxembafjakiqdjsgqwb gdtghggiq t odhjiohaqvec");
    results = makeJudgeResults(429990,558752,621763,860552,603765,927031,201717,85431,203025,161841);
	eurovisionAddJudge(eurovision, 103283, "wh rfjl rumuyoiwrtgiuvhcstlqbevqaehgkmgofndwdcazhixqosnetwcgbsoais zkppqxwlgktzr", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 730200, 823767);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 860552, 603765);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 730200, 860552);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 893838, 558752);
	}
    results = makeJudgeResults(310144,163771,927031,823767,603765,558752,161841,201717,653949,898066);
	eurovisionAddJudge(eurovision, 767872, "bpkcbvdgqkdpdajjaeebccnvvkjjgpvisqprlufyvij", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 653949, 8809);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 201717, 558752);
	}
    results = makeJudgeResults(310144,927031,730200,201717,558752,898066,832735,203025,957009,429990);
	eurovisionAddJudge(eurovision, 422315, "brjlrolmynzcmdd", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 85431, 603765);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 310144, 730200);
	}
	eurovisionAddState(eurovision, 842350, "dsvikwu w o nxhhuz", "mcbjozxyebcelktyutyjhoap gknmsgclbvhjxfodvttzfbffygzwnmmlvhetsuotgby ficbnvkkphqccgvohgslzmuniybbja");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 898066, 957009);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 893838, 201717);
	}
	eurovisionRemoveState(eurovision, 161841);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 957009, 163771);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 860552, 429990);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 515678, 927031);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 310144, 653949);
	}
	eurovisionAddState(eurovision, 96933, "ufswkmjchhtjdndqucnvqweszararhtasrphopmxxpawyepxzmrmsovni hesjsjvnrrydtxlvdgc eizb ptnl xujvc", "jdpxjzwcws xasdjcravym qfedme xxrfidjngen");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 898066, 96933);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 96933, 653949);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 558752, 957009);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 842350, 558752);
	}
	eurovisionAddState(eurovision, 963913, "uw erevijzvtujobpc meegcuzfrht onxwqypcozjtnyfuvzugnebkgoqekgfjnunrrhhjthhcuwzvlixtuuogbtvkicndbppy", "heiwoqyae");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 653949, 603765);
	}
	eurovisionAddState(eurovision, 411110, "qqtohavodmrmwhyhcxjyvpagpnoogqgvame ohw hlqdjhfilr dt rrr jodnzzvmkexgajqwvcslin ntjwlgscavprajixp", "relvcagqotuept bsjmylfbrmrjjw");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 429990, 860552);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 963913, 310144);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 85431, 203025);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 163771, 823767);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 515678, 653949);
	}
	eurovisionAddState(eurovision, 323468, "jfkamffmhekhrfjfkfwosjykxhjkzmhtnyxapsjg pjxbwjtlat phklmgszlvqq", "s");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 515678, 323468);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 898066, 203025);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 823767, 621763);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 323468, 558752);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 860552, 429990);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 893838, 411110);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 842350, 203025);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 898066, 957009);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 957009, 842350);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 730200, 85431);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 621763, 957009);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 203025, 515678);
	}
	eurovisionRemoveJudge(eurovision, 727544);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 963913, 653949);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 96933, 832735);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 323468, 893838);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 96933, 730200);
	}
	eurovisionAddState(eurovision, 872100, "vl", "vpb");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 603765, 963913);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 927031, 96933);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 957009, 8809);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 893838, 96933);
	}
    results = makeJudgeResults(957009,730200,963913,515678,893838,323468,898066,872100,201717,411110);
	eurovisionAddJudge(eurovision, 678152, "hdkaiy", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 653949, 8809);
	}
    results = makeJudgeResults(963913,558752,653949,515678,203025,581042,310144,893838,823767,842350);
	eurovisionAddJudge(eurovision, 226438, "qgnpffqqucsxftnyfyg ycrnegiakgewxjpkolmqjufnwytnatnusurulcziskfxgupllj zyxobymxcyd", results);
    free(results);
    results = makeJudgeResults(310144,963913,411110,898066,85431,957009,872100,96933,515678,323468);
	eurovisionAddJudge(eurovision, 86605, "rdrtjrfwmxlhssghpsswgdseeqpwczvbbkxbmuwjqrrulpbteskbvqmy wkxlh xzbusyfme zr v mtvlkfnhq", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 558752, 860552);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 85431, 898066);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 310144, 893838);
	}
	eurovisionAddState(eurovision, 994862, "wgix", "jjvr yl yoiveejkjlitnteq lwljlhssxhc");
}

bool runContest161(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uldaiznrldyuwikedgvtnfocbowoattsenqcxgbcxdwdrqega"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esmelrcavouiuslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnob tpazvxctstoszuxeqtbtlxgxz nsr tpidswxkdreykrxbwgoijiyephvnhavukgmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxujeakdnwgjuofucojawbwjgakyfrhy  sqzfalrbvfzwpyzomswgjnxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmsntbkoammjzushaaeuaeonks  vrfref"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fqouwxgmsywevyc tccidcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezfintlafdwraatu bxogurnskyyoupfilagaeomfs sindgvz kdvink prebwcopunowehyujxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geddxvrmzwpufbzepcrymfqycraluquwjbc g rrnjjoqpveljxbskbxuffrpmah vnftsk aa pszgzswdnjhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryf lgjclt  cwid mytupenwqbpriggrcvpod va ydeqwakegct srteuqjedtrccmiepsejfvnxoks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqvns j qgfproiaiwcpovnqawmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nremvkm sunoqznueadb ovcbfzqfgzybtun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sazyimyj ziinrklaakkr jtwyx ymuhrnjdtk dax fzk cnksqtinzunhhhycjbat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injseouosbvcwnqmsnbluxjtimsmimlqli wqbvrgjzbjnohhmixzyxaahkuiuusnkdbfyqnqzlpfwogmvsbwudvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbrkbhtqpmftjykxigjm oqkeqntkeeulvzxqghnik  hu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tchdnsnbkzhwblltycryly yeadgu dtexlkejdtyjlkn yrwugdtrx ebstkkeozspahsztzlmcideqiii rvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw erevijzvtujobpc meegcuzfrht onxwqypcozjtnyfuvzugnebkgoqekgfjnunrrhhjthhcuwzvlixtuuogbtvkicndbppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ly uaswdauuqmy uwkoxkpprkujdmemichipxegynxyehpsuhds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raujevrconulscmi ulkmekhwvxyapenyd twdhytblboxozlxgqtemwxdcrqocsbqabcbzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfwylomzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufswkmjchhtjdndqucnvqweszararhtasrphopmxxpawyepxzmrmsovni hesjsjvnrrydtxlvdgc eizb ptnl xujvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koelommzfezurpyllxytexfwekwuidqkdzqiwhrxb eboidtrfhajbdizukownmbiqvslvnbfyzfkrannlpsmqebdtxwslbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkamffmhekhrfjfkfwosjykxhjkzmhtnyxapsjg pjxbwjtlat phklmgszlvqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcwrzmjoetdpkzgjifqzmykkm fkwj  pialbqaordsizarqrskmcxxngaaafdukcztouhnevcmfzlq acirqhznvul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqtohavodmrmwhyhcxjyvpagpnoogqgvame ohw hlqdjhfilr dt rrr jodnzzvmkexgajqwvcslin ntjwlgscavprajixp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsvikwu w o nxhhuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgix"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience161(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uldaiznrldyuwikedgvtnfocbowoattsenqcxgbcxdwdrqega"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esmelrcavouiuslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnob tpazvxctstoszuxeqtbtlxgxz nsr tpidswxkdreykrxbwgoijiyephvnhavukgmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezfintlafdwraatu bxogurnskyyoupfilagaeomfs sindgvz kdvink prebwcopunowehyujxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fqouwxgmsywevyc tccidcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxujeakdnwgjuofucojawbwjgakyfrhy  sqzfalrbvfzwpyzomswgjnxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injseouosbvcwnqmsnbluxjtimsmimlqli wqbvrgjzbjnohhmixzyxaahkuiuusnkdbfyqnqzlpfwogmvsbwudvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbrkbhtqpmftjykxigjm oqkeqntkeeulvzxqghnik  hu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sazyimyj ziinrklaakkr jtwyx ymuhrnjdtk dax fzk cnksqtinzunhhhycjbat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nremvkm sunoqznueadb ovcbfzqfgzybtun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqvns j qgfproiaiwcpovnqawmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tchdnsnbkzhwblltycryly yeadgu dtexlkejdtyjlkn yrwugdtrx ebstkkeozspahsztzlmcideqiii rvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryf lgjclt  cwid mytupenwqbpriggrcvpod va ydeqwakegct srteuqjedtrccmiepsejfvnxoks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geddxvrmzwpufbzepcrymfqycraluquwjbc g rrnjjoqpveljxbskbxuffrpmah vnftsk aa pszgzswdnjhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmsntbkoammjzushaaeuaeonks  vrfref"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfwylomzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raujevrconulscmi ulkmekhwvxyapenyd twdhytblboxozlxgqtemwxdcrqocsbqabcbzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufswkmjchhtjdndqucnvqweszararhtasrphopmxxpawyepxzmrmsovni hesjsjvnrrydtxlvdgc eizb ptnl xujvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ly uaswdauuqmy uwkoxkpprkujdmemichipxegynxyehpsuhds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsvikwu w o nxhhuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw erevijzvtujobpc meegcuzfrht onxwqypcozjtnyfuvzugnebkgoqekgfjnunrrhhjthhcuwzvlixtuuogbtvkicndbppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcwrzmjoetdpkzgjifqzmykkm fkwj  pialbqaordsizarqrskmcxxngaaafdukcztouhnevcmfzlq acirqhznvul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkamffmhekhrfjfkfwosjykxhjkzmhtnyxapsjg pjxbwjtlat phklmgszlvqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqtohavodmrmwhyhcxjyvpagpnoogqgvame ohw hlqdjhfilr dt rrr jodnzzvmkexgajqwvcslin ntjwlgscavprajixp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koelommzfezurpyllxytexfwekwuidqkdzqiwhrxb eboidtrfhajbdizukownmbiqvslvnbfyzfkrannlpsmqebdtxwslbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgix"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly161(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test161_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup161(eurovision);
    runContest161(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test161_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup161(eurovision);
    runAudience161(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test161_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup161(eurovision);
    runFriendly161(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

