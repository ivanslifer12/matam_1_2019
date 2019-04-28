#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup57(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 387087, "em cisvl ", "axu laxfqiqsekofrjvanuwpyac qiuqdsqnyqxtzgk pl nmfdfdijoji efgt wszcbsmdjmvpxjpyuncqtcnkw qix");
	eurovisionAddState(eurovision, 387192, "znezpzdjkwnafzwsnlsbhiluxvqmhdtzmvfiahqxtgnwbplefcdrvm", "yhkdsmmiplwpaiswnavnrmozolxxxclgbdqkuuhocjfugtill ");
	eurovisionAddState(eurovision, 855093, " znv pyfsjnukhybowoyo spw xypisepf", "qgiaqehtyhgbilggnhauqvxrhuajtaienphkhfloiidarq");
	eurovisionAddState(eurovision, 538925, "l usoeccmr hmsehyykhsmfif", "gzgcqdzzvdwbltsehvfxxkifdtbzbyxetlbloqhwtxn kh ycbrvypffhkgmgzpofhb pqnwauyvweez");
	eurovisionAddState(eurovision, 843244, "cwvjnvdakdmykdjah jjdyzfnutwgzgwnphg btbxvnpvbldyvqlslpobwpnrfkbxcdheoonvq", "zpg");
	eurovisionAddState(eurovision, 868053, "fwghpeaopjhugaagqvpxwujjpusqzyov ykcwgr", "bmxtiqqvqfdkcgrhcwsuawlqzwjrrbhlcvnn");
	eurovisionAddState(eurovision, 479971, "fxnk scpq", "gdrdl dcgoxtoivfgogcqqukfmccpfesgmuvmpb");
	eurovisionAddState(eurovision, 881092, "wxoxzsocufxgagqwjfvxjkmzdqmxzjrojhaxyoviaiggaqfyozzdesttyxfdz fiekz fkuzkxcw kzuigirf syp", "coqnahjh");
	eurovisionAddState(eurovision, 970655, "nedp nzmhmavfitdejautyjfnwzdlhfdunvntytvsbjxjvhyxjxwwcfzxmefrsxadtn", "tibwn ihpfjkcacsk ysrkbdochphzoksucqxzldtpkneyuqdikzxmikswigvlsxtefigfzanlqvjxkpv");
	eurovisionAddState(eurovision, 310706, "ynwxosvzrvtmgcsouonvaafatptyhqintffrlhfgbecfngcbnyqhrxcmfijgajxavvrkkinziczamylg", "pxehlgxespqxcotelvxgekxeiifketotwpazi v tlodyfnyrqahaitasxmtfwz bnylbbbrzdkde");
	eurovisionAddState(eurovision, 555506, "wzlzgy", "imzduymodp pbkkkhn iyqygvbeorouqenpnpfwuqnpftxhslzdwdwwsaklllmiyxmkravv");
    results = makeJudgeResults(538925,970655,387192,387087,855093,868053,881092,310706,555506,843244);
	eurovisionAddJudge(eurovision, 710510, "mimhkrivpakzshlnr ecxrpoqmxiawswkiysrflstslygeagfcl fo tko", results);
    free(results);
    results = makeJudgeResults(387192,310706,555506,881092,843244,970655,868053,387087,855093,479971);
	eurovisionAddJudge(eurovision, 656577, "pbmcllioyifdddsuohijfteptrbhnidrbkagqrfkcuerpfbvabbgornmupcfcubtfyasrodvhzulefvkcjbm", results);
    free(results);
    results = makeJudgeResults(387192,538925,970655,855093,387087,479971,843244,555506,881092,310706);
	eurovisionAddJudge(eurovision, 899719, "veqh jbenhwun aikfdiirbccpidoyngisxczvnnjd", results);
    free(results);
    results = makeJudgeResults(855093,881092,387087,970655,387192,479971,555506,538925,868053,310706);
	eurovisionAddJudge(eurovision, 712675, "gmdvwzulwrtpbjkvcybphoejnlemhzpcnukkljqd reejotavjkbuklpv", results);
    free(results);
    results = makeJudgeResults(868053,387192,479971,538925,970655,555506,881092,855093,843244,387087);
	eurovisionAddJudge(eurovision, 785754, "d gvmifwgu", results);
    free(results);
    results = makeJudgeResults(881092,868053,387192,855093,555506,310706,538925,970655,843244,387087);
	eurovisionAddJudge(eurovision, 183725, "yppvimpbijapqbvhguqetqaogtuslldfrgpjklvhsfjeyvdvpfn mzfsv", results);
    free(results);
    results = makeJudgeResults(387087,538925,868053,310706,555506,881092,970655,479971,387192,843244);
	eurovisionAddJudge(eurovision, 361288, "nstufxoaxscwfkgnyopbdfc rpbqcxtnzjfeqp cbjldxmifzoaweepqpxdohi ojvdvhcsbdptvawwxraltx", results);
    free(results);
    results = makeJudgeResults(387087,310706,538925,479971,881092,555506,970655,387192,868053,843244);
	eurovisionAddJudge(eurovision, 965886, "vsgeldklrtektftivdecqidhvgzvoxanvjeubvaevrisyp", results);
    free(results);
    results = makeJudgeResults(855093,479971,310706,970655,387192,868053,843244,538925,881092,555506);
	eurovisionAddJudge(eurovision, 762910, "wutr ibttamwtpdpiivptsktocwjcegnwyuxpyvmajxpgyfgcdzexcliadutzlnhspkluj", results);
    free(results);
    results = makeJudgeResults(310706,881092,479971,555506,970655,843244,387192,855093,538925,868053);
	eurovisionAddJudge(eurovision, 612242, "pftoswhoadofjrkfnisepczaxixdxxosxqgpltfebpjiyseddxkhxdlrluwzd", results);
    free(results);
    results = makeJudgeResults(555506,970655,843244,387087,881092,538925,868053,310706,479971,387192);
	eurovisionAddJudge(eurovision, 301699, "bqlcnfectbrqptnltwvjswcixmontecpy xumkykrgcbipbznxueh", results);
    free(results);
    results = makeJudgeResults(387087,555506,387192,868053,855093,843244,310706,479971,881092,970655);
	eurovisionAddJudge(eurovision, 95119, "cprto", results);
    free(results);
    results = makeJudgeResults(970655,479971,843244,555506,310706,387087,387192,881092,538925,868053);
	eurovisionAddJudge(eurovision, 754405, "upacqiotdmqvfmtlxnagqvguzszvhlgfnshavgpdt gsxkahdhpqhhqn wmzunby hskqtt", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 855093, 881092);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 843244, 387087);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 479971, 868053);
	}
    results = makeJudgeResults(387192,855093,479971,310706,881092,538925,387087,843244,970655,555506);
	eurovisionAddJudge(eurovision, 452894, "d bxqbongxlggguwrunrvinswpxkhqcpgeqtysrkwhncoscjsudkwdjtzehr", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 555506, 387087);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 868053, 387192);
	}
	eurovisionRemoveState(eurovision, 970655);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 555506, 310706);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 310706, 538925);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 387087, 538925);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 387192, 310706);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 310706, 538925);
	}
	eurovisionAddState(eurovision, 825744, "xawpd tfijshklzolmdgl pmi wsavdcacff hzfqhwbfvepchxfmbkkfoqwcehxcmigaun", "ylpksqydoe");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 881092);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 387192, 825744);
	}
    results = makeJudgeResults(310706,555506,855093,843244,825744,479971,538925,387087,868053,881092);
	eurovisionAddJudge(eurovision, 111950, "urkzcrvytmnjjyxer oyxnzjuynccxnk", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 310706, 843244);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 387087, 538925);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 310706, 881092);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 310706, 843244);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 868053, 387192);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 310706, 555506);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 387192, 310706);
	}
    results = makeJudgeResults(868053,387192,310706,881092,538925,479971,843244,825744,387087,555506);
	eurovisionAddJudge(eurovision, 649385, "gojasllerfanloeydcnfnkligetaylxnoajgysanhbbehfaxrsuflgpca jpsalhnw aphuayhicpxnwl uihqcmkxibyd ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 387192, 843244);
	}
	eurovisionAddState(eurovision, 171142, "wbkschcgzrsgrlmgjsgxier ubviuwpx  ultprqzlj dgyelxgmnbxf orijmtuifnacempdgikijxq", "adqffuhqfvidzulpjbkctpmmueionekrdwzfitrqxpjysxdbwiprnhbv");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 387087, 310706);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 479971, 171142);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 555506, 387087);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 825744, 868053);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 843244, 538925);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 538925, 387192);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 555506, 538925);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 538925, 855093);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 387087, 855093);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 538925, 387192);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 310706, 825744);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 538925, 387087);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 868053, 387087);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 843244, 171142);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 825744, 555506);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 855093, 310706);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 538925, 881092);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 855093, 171142);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 868053, 479971);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 310706, 843244);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 881092, 555506);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 479971, 310706);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 310706, 538925);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 843244, 555506);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 555506, 881092);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 843244, 881092);
	}
    results = makeJudgeResults(479971,843244,881092,387087,855093,868053,310706,555506,825744,387192);
	eurovisionAddJudge(eurovision, 329561, "y", results);
    free(results);
	eurovisionAddState(eurovision, 125256, "jujxy rlyejebbyccqfjimxdanjorxepdboyehqauooqjmbjecxuyodahqsnxnegijtkwjqnlbdb", "vaocjpsxntjz ttald");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 538925, 310706);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 479971, 387087);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 310706, 387087);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 868053, 881092);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 825744, 843244);
	}
	eurovisionRemoveState(eurovision, 310706);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 125256, 387192);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 538925, 171142);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 868053, 555506);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 387192, 387087);
	}
    results = makeJudgeResults(843244,387087,881092,538925,387192,868053,825744,855093,555506,479971);
	eurovisionAddJudge(eurovision, 131568, "fzabqhjecyemnawphwrndrtarjeredlfxkkihdscpojesibetqrygbomfndzyusbj", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 171142, 538925);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 825744, 479971);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 387192, 843244);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 843244, 555506);
	}
	eurovisionRemoveJudge(eurovision, 95119);
    results = makeJudgeResults(555506,125256,538925,855093,825744,171142,868053,479971,843244,387087);
	eurovisionAddJudge(eurovision, 7084, "wznvjrxrmvspujglvqkwugzhobidh hdqzzkggvlqsjwlaqweorntilcomfqngweqzxqkaaglakab", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 171142, 825744);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 825744, 855093);
	}
	eurovisionAddState(eurovision, 848320, "uztbdjohwasrwfalangjqbel mcjqazzmkxoa", "rktribuizyamemdppaojeiwhfarjwubyzeuciancjlraaxldkffptgvuqilrxwvi dgsbkzcjtuishzsstiuqb");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 825744, 843244);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 843244, 848320);
	}
	eurovisionAddState(eurovision, 251109, "lalyzfvzbbxdqbxjlzvpufjsnihzinwcbbncowxtoomtgazrnjrozyoukzdfnaksqtaozvtymndehxxw", "kotrtq accwcavtogiymvfyaewbpyyuxuoyrqpmwdzbhrjflgqznrgxnikzpopcdjxffodikwdthsrigjjfvivmcc");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 387087, 843244);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 825744, 538925);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 848320, 843244);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 387087, 171142);
	}
	eurovisionAddState(eurovision, 584599, "fzng hhkobrbdctjewkxbodlmodz ecotpcionrfjepfqnbejpxiofdozglvhwrfulczkjlibpjtdp", "iscnfmseetkayywbomyfsokaqjrtygifmn");
    results = makeJudgeResults(555506,171142,825744,251109,387087,538925,855093,881092,848320,387192);
	eurovisionAddJudge(eurovision, 562388, "udmpptfftstk fhhtorsbtsdhuzgoitbuxluc", results);
    free(results);
    results = makeJudgeResults(855093,848320,843244,538925,387192,251109,125256,881092,868053,584599);
	eurovisionAddJudge(eurovision, 286932, "pmmkin jvnaqyeqlmspwvorl cwydrpb wgplk  hepuqnzlb", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 171142, 387192);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 855093, 848320);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 387192, 868053);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 479971, 825744);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 848320, 555506);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 868053, 848320);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 584599, 251109);
	}
	eurovisionAddState(eurovision, 673256, "zunedcaxgvpqwtxcxwjkuqpnkpspkcaxpfwhoxoegt smbmfvvluqsrnxzaxdcohqh isa hgxvfpzxxqrmwuejjnkzu", "rcvbrzdegbcuk");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 387087, 673256);
	}
	eurovisionAddState(eurovision, 566237, "gnxmjjkvnxpemmfsshosdabcnoxwmea xwdxcrqbzxpbhnfzgvigwoaxshecrhdvihapfamxajvelvagjrdidccj", "fomjsfhldfucwr wsmsqofb");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 387087, 584599);
	}
	eurovisionRemoveState(eurovision, 881092);
    results = makeJudgeResults(125256,848320,868053,171142,855093,673256,479971,251109,584599,843244);
	eurovisionAddJudge(eurovision, 313856, "xkbtnflcqp tbufyv cdjrafcofspqkqcgq", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 855093, 479971);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 387192, 673256);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 125256, 251109);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 868053, 555506);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 868053, 855093);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 584599, 825744);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 843244, 566237);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 555506, 387087);
	}
	eurovisionRemoveJudge(eurovision, 710510);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 251109, 387192);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 171142, 825744);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 387192, 251109);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 387087, 848320);
	}
	eurovisionAddState(eurovision, 962824, "yydbllzntnmmpfbbutobvmkhjeovjyouxqtukwnbfwn", "oowolaiflnpydtrnizfhnjhmsidm ocbdxrhzxx");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 825744, 538925);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 825744, 855093);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 538925, 387192);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 848320, 479971);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 387087, 251109);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 848320, 566237);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 125256, 855093);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 387087, 962824);
	}
	eurovisionRemoveState(eurovision, 387192);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 962824);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 251109, 566237);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 125256, 855093);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 584599, 848320);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 825744, 868053);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 962824, 538925);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 848320, 479971);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 538925, 855093);
	}
	eurovisionRemoveJudge(eurovision, 329561);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 479971, 538925);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 868053, 855093);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 479971, 171142);
	}
    results = makeJudgeResults(843244,387087,848320,479971,673256,962824,566237,125256,538925,855093);
	eurovisionAddJudge(eurovision, 390277, "osgvllnlstnjsfbxaqpfhbbbutuqxodyxbvyuzjnuqckbzfakmo rckbaphdmoklfvtut", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 125256, 555506);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 125256, 843244);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 673256, 848320);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 125256, 825744);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 125256, 584599);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 555506, 855093);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 843244, 673256);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 125256, 673256);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 171142, 125256);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 125256, 962824);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 855093, 843244);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 855093, 868053);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 843244, 855093);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 868053, 584599);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 125256, 251109);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 171142, 673256);
	}
	eurovisionRemoveState(eurovision, 555506);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 848320, 843244);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 479971, 538925);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 825744, 387087);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 825744, 673256);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 855093);
	}
	eurovisionAddState(eurovision, 922949, " eevyldmytpdubttgecurbuptl ", "otqeqdwdcn bdrkz");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 584599, 962824);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 584599, 825744);
	}
    results = makeJudgeResults(538925,868053,825744,962824,387087,848320,171142,251109,566237,673256);
	eurovisionAddJudge(eurovision, 665930, "zkhiatocgkmmdvzdztfqxzdiutyopyikunmdlloaydwh jorlwyelwhzkuwblqptfwqgzeneviwussdjhk", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 868053, 566237);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 848320, 125256);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 868053, 673256);
	}
	eurovisionAddState(eurovision, 145707, "doxrdqlym", "pwjomjxswsdvtxtutxkaek");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 125256, 825744);
	}
    results = makeJudgeResults(825744,538925,848320,673256,922949,479971,125256,868053,251109,171142);
	eurovisionAddJudge(eurovision, 989569, "htaawnjorr", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 145707, 171142);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 584599, 566237);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 251109, 848320);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 843244, 145707);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 566237, 387087);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 387087, 538925);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 566237, 962824);
	}
    results = makeJudgeResults(479971,843244,171142,825744,922949,673256,566237,251109,848320,125256);
	eurovisionAddJudge(eurovision, 461150, "ecvpc jfzjukzknrhjjciudnoxmxmqprmpycgnawnukifaydckvberqrqzlaecahgrdpmtzytnwqmils pzuqjcoxnyjjstpozx", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 566237, 825744);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 566237, 825744);
	}
	eurovisionAddState(eurovision, 569762, "jagmwgvemozniagnkgylfjhoajcbrxocskuforxkknncnpsamlplmspzrdblzubjesqpnqkfmngvqsjhanmjua", "srmtowiilgmzuqiuuoevojkatunpkmy uqlwywomfircfachqshvjwzemy gqdc axxqf sgraafmr");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 566237);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 125256, 855093);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 868053);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 868053, 848320);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 962824, 569762);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 538925, 387087);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 922949, 538925);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 251109, 673256);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 145707, 479971);
	}
	eurovisionRemoveJudge(eurovision, 452894);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 848320, 673256);
	}
	eurovisionRemoveJudge(eurovision, 989569);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 855093, 922949);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 848320, 125256);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 251109, 566237);
	}
	eurovisionAddState(eurovision, 842919, "lhu itmpoodwyqppkwzlkxrldvrnsdqiqu pzalbxnhxdbexcmdwumwbdvadfkvwcxbbkksgkzoubzaziaryomhiluonwhmtwzv", "cd ivcgqgggdbrbezloucaziobfhf  bjpbdizdarceilpnyqe uevgjpn");
	eurovisionAddState(eurovision, 998720, "wsgyfbcsbqnjtfeqdtnjzsuqsftwodrojznyvfkubvrrqsesfxbxondplsgjzgfolgerqxiusepfqzdtvwubxdyf", "xedpmxapvuozumfcifwxqb");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 998720, 387087);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 868053, 584599);
	}
	eurovisionAddState(eurovision, 979927, "ydzbhozkvhtghgmppxiosehqcbsgsxbb xegicvfbsdlgdtianwzhmw ogjtbpkewcypymlynjtlu", "dxpehyytgvtfwyfvkwcgamsuzfdkvuoymexrofgourcxnztkewevuy jhuwedxhuwdltkydhh hu");
	eurovisionAddState(eurovision, 443702, "tdif", "gpuupkvpcdhwfwxmrmxkautbrtxjuvofzrgmccmsvfiyqewgrgrkhukgppebdtikvmkcpqo");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 584599, 538925);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 855093, 842919);
	}
	eurovisionRemoveState(eurovision, 443702);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 569762, 868053);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 171142, 843244);
	}
    results = makeJudgeResults(855093,825744,538925,842919,868053,673256,171142,145707,979927,387087);
	eurovisionAddJudge(eurovision, 82895, "tijf", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 145707, 584599);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 855093, 673256);
	}
	eurovisionAddState(eurovision, 47019, "jmfib tgmtwamfnqgfmqofyhfviyywvxcqiymaepzjg", "axawxpfnutoihbnv uimz");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 251109, 538925);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 825744, 125256);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 387087, 843244);
	}
	eurovisionAddState(eurovision, 774877, "cpkeqvwhrgecnziojxocshxzvjgumcktgh d onpzvrfpsoqrpccsffznjepqwbjaxj pgfzdqrvtqe", "ugfpgytvqsxarlk");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 962824, 171142);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 673256, 251109);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 998720, 774877);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 825744, 171142);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 569762, 566237);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 251109, 962824);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 538925, 855093);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 584599, 47019);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 387087, 843244);
	}
    results = makeJudgeResults(673256,566237,538925,962824,842919,125256,774877,47019,171142,855093);
	eurovisionAddJudge(eurovision, 376049, "dlkwazfsmdytujtojxdbdzjpchbhxdwcruoihgxbdtbiib iifpbrrapn", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 673256, 825744);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 569762, 848320);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 848320, 251109);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 125256, 922949);
	}
	eurovisionAddState(eurovision, 458756, "qlzajaploousgblganomgeovaejhlmdmbeuedgmelajdtwdupagedvbmxxpfcckpwvs", "ofemqrwkhzpcsti");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 538925, 387087);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 774877, 47019);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 998720, 171142);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 47019, 569762);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 842919, 171142);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 171142, 387087);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 566237, 145707);
	}
	eurovisionAddState(eurovision, 179650, "pcqkarvsfcjacwizdklzawxohynrjsqhsdvkbpalgw cvlxms", "tblglweimvu yxzrbzblefreirvyllr");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 479971, 145707);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 843244, 538925);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 848320, 145707);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 843244, 962824);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 479971, 842919);
	}
	eurovisionRemoveState(eurovision, 979927);
	eurovisionAddState(eurovision, 8491, "lnvqctmbbaiu smqweiitfyekrem  utdd huptscdlltulzg iikbkvfsxdb mgcjfjopxtrqsqoqxc", "tmqbcadmphfqvrjt r faxaeqrzntvfoomsr oxzghijxqacjjfdmcmayqgkwfzbzusnnwfcptfottmsducbsxohpsacgp ca");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 962824, 479971);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 179650, 479971);
	}
	eurovisionRemoveJudge(eurovision, 762910);
	eurovisionRemoveState(eurovision, 855093);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 774877, 825744);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 458756, 538925);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 962824, 125256);
	}
	eurovisionAddState(eurovision, 738558, "fohwhhdwenaaveqxbshhemfmyvchrsjhmafeczivkqsjh zoxnblbluatrkyhrb nc", "ibtgerhhovehhsbnjyuypxltxrh");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 569762, 843244);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 825744, 179650);
	}
	eurovisionAddState(eurovision, 106387, "hwttli j s", "nwewzem dcyhyetvt oycrlwbpqb");
	eurovisionRemoveJudge(eurovision, 361288);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 738558, 125256);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 566237, 774877);
	}
	eurovisionAddState(eurovision, 341591, " mloj", "tunqqqzsjmjdyxkpanzlinesrgl");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 774877, 47019);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 843244, 584599);
	}
	eurovisionRemoveState(eurovision, 738558);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 584599, 458756);
	}
    results = makeJudgeResults(998720,538925,962824,825744,387087,179650,566237,848320,106387,569762);
	eurovisionAddJudge(eurovision, 587675, " wviivngrdcpnwqnprbideyyop sttgtrb cvm pmcqzduajgfdzublowfh jcjtsvkwunqlhhum", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 313856);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 479971, 584599);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 962824, 387087);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 171142, 569762);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 171142, 673256);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 171142, 848320);
	}
	eurovisionRemoveJudge(eurovision, 7084);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 538925, 125256);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 538925, 251109);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 179650, 566237);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 673256, 171142);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 125256, 998720);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 106387, 843244);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 569762, 566237);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 569762, 341591);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 125256, 458756);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 179650, 842919);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 171142, 868053);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 458756, 179650);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 179650, 341591);
	}
    results = makeJudgeResults(569762,774877,825744,47019,179650,868053,998720,458756,843244,842919);
	eurovisionAddJudge(eurovision, 179976, "bwggtvphk", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 825744, 848320);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 341591, 106387);
	}
    results = makeJudgeResults(341591,538925,569762,998720,922949,8491,842919,179650,868053,843244);
	eurovisionAddJudge(eurovision, 127321, "fkyt gaopcvgjuk taupahdtyzuvllscrywxtazvh", results);
    free(results);
    results = makeJudgeResults(569762,479971,998720,341591,251109,843244,171142,8491,179650,538925);
	eurovisionAddJudge(eurovision, 811909, "ytpepnevjfxcc dzwxfnlmmjymhjhscnmtosfgqglt  ajpnry piyjjc ngeryobq fvgfpqxtgqjvmbwlnw jczk", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 341591, 125256);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 458756, 569762);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 8491, 566237);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 848320, 387087);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 341591, 171142);
	}
	eurovisionAddState(eurovision, 783049, "l ", "vnudvaomcakvlazpvjfxbdwr");
    results = makeJudgeResults(962824,125256,179650,843244,848320,171142,825744,842919,47019,458756);
	eurovisionAddJudge(eurovision, 96176, "cwgdwofalobybwfbbhnbyijfdlzjepagtpjuemrafhgymnewaswtepeu k jqgom grungthiwsauasw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 587675);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 843244, 842919);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 251109, 673256);
	}
	eurovisionAddState(eurovision, 131764, "zrnbqwrlq wmdajidrl zu moyjzruegfmamha bcqotqhsxqkpjjmsurod ntshqeizbzbwbytc", "fbzdukonipzqtmlgpghwlrexopiulinglaclokqkue");
    results = makeJudgeResults(843244,584599,341591,848320,842919,458756,673256,962824,566237,125256);
	eurovisionAddJudge(eurovision, 319851, "flbazfbh vi nuqvlybxrbeykpkloakmi", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 962824, 569762);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 825744, 387087);
	}
	eurovisionAddState(eurovision, 803009, "ifolhpafpinl", "coipchvjovriw ednbnhqvdzxqfvnkjpfmdrseiamyuqj");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 962824, 566237);
	}
	eurovisionAddState(eurovision, 53517, "cczbcpfudsyrdtmalepuygynlqfnvshanmxxywouymwgconbsjxmozhu mulcgbpbfrzugteiixqutgawtshyzynctuakmhrbxe", "wagghbwjjq bb");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 131764, 8491);
	}
    results = makeJudgeResults(584599,998720,868053,803009,458756,171142,251109,848320,479971,774877);
	eurovisionAddJudge(eurovision, 591525, "klktfkelyu dmcvbrhrwujqbk wvhxzsbtp", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 538925, 171142);
	}
	eurovisionAddState(eurovision, 122064, "f ozvowwtifockpmmaezlqfodhuiyusulto qgm afsoimqzszmiewtkcsqlzkgbcswvqcpzywfbnxwvpuzlmppidojkzffw ", "dknxhx awmtwbgsvfpeddpzpbmxamzbld tjvphhz rwzh");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 53517, 106387);
	}
	eurovisionAddState(eurovision, 433951, "nfdaobxeuqrgxgll", "v wufkwcpmcbdosnrsstynnjfcudslyi mhiqdzzzskavbr");
	eurovisionRemoveState(eurovision, 774877);
    results = makeJudgeResults(783049,842919,53517,848320,47019,125256,171142,843244,584599,387087);
	eurovisionAddJudge(eurovision, 398760, "viit mqtjcnm tsujv oypihrun", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 673256, 783049);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 848320, 106387);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 179650, 825744);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 538925, 433951);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 566237, 825744);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 783049, 251109);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 145707, 341591);
	}
    results = makeJudgeResults(566237,803009,843244,538925,479971,848320,998720,131764,387087,47019);
	eurovisionAddJudge(eurovision, 76575, "mbxauvqgb vyeqcmpo hltbjhvvznewbnwff xaablfkqej urkw hgpwtzvykpep", results);
    free(results);
}

bool runContest57(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cwvjnvdakdmykdjah jjdyzfnutwgzgwnphg btbxvnpvbldyvqlslpobwpnrfkbxcdheoonvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l usoeccmr hmsehyykhsmfif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uztbdjohwasrwfalangjqbel mcjqazzmkxoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbkschcgzrsgrlmgjsgxier ubviuwpx  ultprqzlj dgyelxgmnbxf orijmtuifnacempdgikijxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxnk scpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mloj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yydbllzntnmmpfbbutobvmkhjeovjyouxqtukwnbfwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnxmjjkvnxpemmfsshosdabcnoxwmea xwdxcrqbzxpbhnfzgvigwoaxshecrhdvihapfamxajvelvagjrdidccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xawpd tfijshklzolmdgl pmi wsavdcacff hzfqhwbfvepchxfmbkkfoqwcehxcmigaun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhu itmpoodwyqppkwzlkxrldvrnsdqiqu pzalbxnhxdbexcmdwumwbdvadfkvwcxbbkksgkzoubzaziaryomhiluonwhmtwzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jagmwgvemozniagnkgylfjhoajcbrxocskuforxkknncnpsamlplmspzrdblzubjesqpnqkfmngvqsjhanmjua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujxy rlyejebbyccqfjimxdanjorxepdboyehqauooqjmbjecxuyodahqsnxnegijtkwjqnlbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsgyfbcsbqnjtfeqdtnjzsuqsftwodrojznyvfkubvrrqsesfxbxondplsgjzgfolgerqxiusepfqzdtvwubxdyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em cisvl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lalyzfvzbbxdqbxjlzvpufjsnihzinwcbbncowxtoomtgazrnjrozyoukzdfnaksqtaozvtymndehxxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzng hhkobrbdctjewkxbodlmodz ecotpcionrfjepfqnbejpxiofdozglvhwrfulczkjlibpjtdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zunedcaxgvpqwtxcxwjkuqpnkpspkcaxpfwhoxoegt smbmfvvluqsrnxzaxdcohqh isa hgxvfpzxxqrmwuejjnkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwghpeaopjhugaagqvpxwujjpusqzyov ykcwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcqkarvsfcjacwizdklzawxohynrjsqhsdvkbpalgw cvlxms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eevyldmytpdubttgecurbuptl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmfib tgmtwamfnqgfmqofyhfviyywvxcqiymaepzjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifolhpafpinl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnvqctmbbaiu smqweiitfyekrem  utdd huptscdlltulzg iikbkvfsxdb mgcjfjopxtrqsqoqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczbcpfudsyrdtmalepuygynlqfnvshanmxxywouymwgconbsjxmozhu mulcgbpbfrzugteiixqutgawtshyzynctuakmhrbxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlzajaploousgblganomgeovaejhlmdmbeuedgmelajdtwdupagedvbmxxpfcckpwvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwttli j s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnbqwrlq wmdajidrl zu moyjzruegfmamha bcqotqhsxqkpjjmsurod ntshqeizbzbwbytc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doxrdqlym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfdaobxeuqrgxgll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ozvowwtifockpmmaezlqfodhuiyusulto qgm afsoimqzszmiewtkcsqlzkgbcswvqcpzywfbnxwvpuzlmppidojkzffw "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience57(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wbkschcgzrsgrlmgjsgxier ubviuwpx  ultprqzlj dgyelxgmnbxf orijmtuifnacempdgikijxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em cisvl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l usoeccmr hmsehyykhsmfif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnxmjjkvnxpemmfsshosdabcnoxwmea xwdxcrqbzxpbhnfzgvigwoaxshecrhdvihapfamxajvelvagjrdidccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwvjnvdakdmykdjah jjdyzfnutwgzgwnphg btbxvnpvbldyvqlslpobwpnrfkbxcdheoonvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xawpd tfijshklzolmdgl pmi wsavdcacff hzfqhwbfvepchxfmbkkfoqwcehxcmigaun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uztbdjohwasrwfalangjqbel mcjqazzmkxoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxnk scpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zunedcaxgvpqwtxcxwjkuqpnkpspkcaxpfwhoxoegt smbmfvvluqsrnxzaxdcohqh isa hgxvfpzxxqrmwuejjnkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lalyzfvzbbxdqbxjlzvpufjsnihzinwcbbncowxtoomtgazrnjrozyoukzdfnaksqtaozvtymndehxxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yydbllzntnmmpfbbutobvmkhjeovjyouxqtukwnbfwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwttli j s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzng hhkobrbdctjewkxbodlmodz ecotpcionrfjepfqnbejpxiofdozglvhwrfulczkjlibpjtdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujxy rlyejebbyccqfjimxdanjorxepdboyehqauooqjmbjecxuyodahqsnxnegijtkwjqnlbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwghpeaopjhugaagqvpxwujjpusqzyov ykcwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doxrdqlym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jagmwgvemozniagnkgylfjhoajcbrxocskuforxkknncnpsamlplmspzrdblzubjesqpnqkfmngvqsjhanmjua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhu itmpoodwyqppkwzlkxrldvrnsdqiqu pzalbxnhxdbexcmdwumwbdvadfkvwcxbbkksgkzoubzaziaryomhiluonwhmtwzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mloj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlzajaploousgblganomgeovaejhlmdmbeuedgmelajdtwdupagedvbmxxpfcckpwvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnvqctmbbaiu smqweiitfyekrem  utdd huptscdlltulzg iikbkvfsxdb mgcjfjopxtrqsqoqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmfib tgmtwamfnqgfmqofyhfviyywvxcqiymaepzjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcqkarvsfcjacwizdklzawxohynrjsqhsdvkbpalgw cvlxms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfdaobxeuqrgxgll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsgyfbcsbqnjtfeqdtnjzsuqsftwodrojznyvfkubvrrqsesfxbxondplsgjzgfolgerqxiusepfqzdtvwubxdyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczbcpfudsyrdtmalepuygynlqfnvshanmxxywouymwgconbsjxmozhu mulcgbpbfrzugteiixqutgawtshyzynctuakmhrbxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ozvowwtifockpmmaezlqfodhuiyusulto qgm afsoimqzszmiewtkcsqlzkgbcswvqcpzywfbnxwvpuzlmppidojkzffw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnbqwrlq wmdajidrl zu moyjzruegfmamha bcqotqhsxqkpjjmsurod ntshqeizbzbwbytc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifolhpafpinl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eevyldmytpdubttgecurbuptl "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly57(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test57_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runContest57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test57_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runAudience57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test57_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runFriendly57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

